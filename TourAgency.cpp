#include "TourAgency.h"
#include<fstream>
#include <iostream>

#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace nlohmann;
void TourAgency::reserveTour(Tourist* client, string tourName) {//������������� ���, ���� ���� ������� � � ������� � �������� �� �� �-���, ��� � ����� ���������� � ���-������� � ���� � �� ���������
    ifstream outFile1("Tours.txt");
    string tourName1;
    double tourPrice1;
    while (outFile1 >> tourName1 >> tourPrice1) {
        tours[tourName1] = tourPrice1;
    }
    outFile1.close();
    if (tours.find(tourName) != tours.end()) {
        double tourPrice = tours[tourName];

        if (client->getBudget() >= tourPrice) {
            client->setBudget(client->getBudget() - tourPrice);
            tours_reserved[client] = tourName; //� ���-������� �������������� ���� (���� ������ � ���� �������������� ���� ����)

            addClientsToFile(*client);


            cout << client->getFirstName() << " " << client->getLastName() << " ����� ��� " << tourName << endl;
        }
        else {
            cout << client->getFirstName() << " " << client->getLastName() << " �� �� ��������� ����� ��� ������� ���� " << tourName << endl;
        }
    }
    else {
        cout << "��� � ������ " << tourName << " �� ����." << endl;
    }
}
//void TourAgency::reserveNewTour(Tourist* client, Tour*tour) {//������������� ���, ���� ���� ������� � � ������� � �������� �� �� �-���, ��� � ����� ���������� � ���-������� � ���� � �� ���������
//   
//    
//    if (tours.find(tourName) != tours.end()) {
//        double tourPrice = tours[tourName];
//
//        if (client->getBudget() >= tourPrice) {
//            client->setBudget(client->getBudget() - tourPrice);
//            tours_reserved[client] = tourName; //� ���-������� �������������� ���� (���� ������ � ���� �������������� ���� ����)
//
//            addClientsToFile(*client);
//
//
//            cout << client->getFirstName() << " " << client->getLastName() << " ����� ��� " << tourName << endl;
//        }
//        else {
//            cout << client->getFirstName() << " " << client->getLastName() << " �� �� ��������� ����� ��� ������� ���� " << tourName << endl;
//        }
//    }
//    else {
//        cout << "��� � ������ " << tourName << " �� ����." << endl;
//    }
//}


void TourAgency::addClient() {//��� �볺��� � ������
    ifstream outFile("Data.txt");
    string firstName, lastName;
    int age;
    double budget;
    bool insurance;
    while (outFile >> firstName >> lastName >> age >> budget >> insurance) {
        clients.emplace_back(firstName, lastName, age, budget, insurance);
    }
    outFile.close();


}
void TourAgency::checkClient(string name, string surname) {//������� �� ���� ��� �볺���
    bool found = false;
    addClient();


    for (auto& client : clients) {
        if (client.getFirstName() == name && client.getLastName() == surname) {
            // ���� �������� ���������, ������� ���������� ��� �������
            cout << "��'�: " << client.getFirstName() << endl;
            cout << "�������: " << client.getLastName() << endl;
            cout << "³�: " << client.getAge() << endl;
            cout << "������: " << client.getBudget() << endl;
            cout << "�����������: " << (client.getIsuarence() ? "���" : "ͳ") << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "������ �볺��� �� ��������." << endl;
    }
}
void TourAgency::addTour(string tourName, double price) {//������ ��� �� �����

    ofstream inFile("Tours.txt", ios::app);
    inFile << " " << tourName << " " << price << endl;
    inFile.close();

}
void TourAgency::showTours() {//������� �� ����
    ifstream outFile1("Tours.txt");
    string tourName;
    double tourPrice;
    while (outFile1 >> tourName >> tourPrice) {
        tours[tourName] = tourPrice;
    }
    outFile1.close();
    for (const auto& pair : tours) {
        cout << "�����: " << pair.first << ", ֳ��: " << pair.second << std::endl;
    }


}
string TourAgency::getNumber() {
    return phoneNumber;
}
void TourAgency::addClientsToFile(Tourist& currentClient) {//�������� �볺��� � ���� (��������������� ��� �����������)

    ofstream inFile("Data.txt", ios::app);
    if (inFile.is_open()) {

        inFile << currentClient.getFirstName() << " " << currentClient.getLastName() << " " << currentClient.getAge() << " " << currentClient.getBudget() << " " << currentClient.getIsuarence() << endl;

    }
    else {
        cout << "�� ������� ������� ����." << endl;
    }
    inFile.close();



}
void TourAgency::readClientsFromFile() {//������� �볺���
    ifstream outFile("Data.txt");
    if (outFile.is_open()) {
        vector<Tourist> clients;
        string firstName, lastName;
        int age;
        double budget;
        bool insurance;

        while (outFile >> firstName >> lastName >> age >> budget >> insurance) {
            clients.emplace_back(firstName, lastName, age, budget, insurance);
        }

        for (auto& client : clients) {
            cout << "��'�: " << client.getFirstName() << ", �������: " << client.getLastName() << ", ³�: " << client.getAge() << ", ������: " << client.getBudget() << ", �����������: " << (client.getIsuarence() ? "���" : "ͳ") << std::endl;
        }
    }
    else {
        cout << "�� ������� ������� ����." << endl;
    }
    outFile.close();
}
void TourAgency::addTourPackage(string packageName, double packagePrice, const Country& packageCountry) {
    tourPackages.emplace_back(packageName, packagePrice, packageCountry);
}
void TourAgency::showTourPackages() {
    for (auto& package : tourPackages) {
        cout << "Package Name: " << package.getName()
            << ", Price: " << package.getPrice()
            << ", Country: " << package.getCountry().getName() << endl;
    }
}
void TourAgency::reserveTourJs(Tourist* tourist,Tour* tour, double price) {
   

    // �������� ������������� ����, ���������, ���� �����
    

    double userBudget = tourist->getBudget();

    // �������� JSON-������������� ����������� �� ����
    if (userBudget >= price) {
        // ³������ ������� ���� �� ������� �����������
        tourist->setBudget(tourist->getBudget() - price);
        nlohmann::json userJson = tourist->toJson1();
        nlohmann::json tourJson = tour->toJson();
        std::string tourIdentifier = tourist->getLastName();
        

        // �������� ���������� � ���� (user_tour.json)
        std::ifstream inputFile("user_tour.json");
        nlohmann::json reservations;

        if (inputFile.is_open()) {
            inputFile >> reservations;
        }

        reservations[tourIdentifier] = { {"user", userJson}, {"tour", tourJson} };

        std::ofstream outputFile("user_tour.json");
        outputFile << std::setw(4) << reservations << std::endl;
        MessageBox::Show("������ �������������");
    }
    else {
        MessageBox::Show("����������� �����");
    }
}
void TourAgency::addTourToJs(Tour* tour) {
    std::ifstream inputFile("tours.json");
    nlohmann::json toursJson;

    if (inputFile.is_open()) {
        inputFile >> toursJson;
    }

    // ������ ����� ��� �� JSON ��'����
    toursJson.push_back(tour->toJson());

    // �������� ��������� JSON � ����
    std::ofstream outputFile("tours.json");
    outputFile << std::setw(4) << toursJson << std::endl;

}

