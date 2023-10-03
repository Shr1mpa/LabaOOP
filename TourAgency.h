#pragma once
#pragma once
#include "Tourist.h"
#include <iostream>
#include<string.h>
#include <unordered_map>
#include <vector>
#include "Tour.h"
#include <fstream>
using namespace std;


class TourAgency {
private:
    vector<Tourist> clients;//������ �볺���
    vector<Tour> tourPackages;//������ ������

    vector<Tour> reservedTours;
    string phoneNumber;
    string name;
    unordered_map<string, double> tours;//���-����
    unordered_map<Tourist*, string> tours_reserved;//�볺��-����� ����
    unordered_map<Tourist*, shared_ptr<Tour>> toursNew;



public:

    TourAgency(string n, string phone) : name(n), phoneNumber(phone) {};
    void reserveTour(Tourist* client, string tourName);
    void addClientsToFile(Tourist& client);
    void readClientsFromFile();
    void addClient();
    void checkClient(string name, string surname);
    void addTour(string tourName, double price);
    void showTours();
    void addTourPackage(string packageName, double packagePrice, const Country& packageCountry);
    void showTourPackages();
    void tourReserve(Tourist* tourist, string tourName) {
        // ����� ���� �� ������
        for (auto& tour : tourPackages) {
            if (tour.getName() == tourName) {
                // ��������� ���� �� ������ �������������
                reservedTours.emplace_back(tour);
                cout << "��� '" << tourName << "' ������������." << endl;

                // �������� ���������� � ����
                writeReservationToFile(tourist, tourName);

                // ��������� �����, ��� ���� ���� �������, ���������,
                // ��������� ���� � ������ ���������
                // ��� ��������� ����� �����
                // ...
                // �������� � �����, ���� ��� ��������
                return;
            }
        }
        cout << "��� '" << tourName << "' �� ��������." << endl;
    }

    void writeReservationToFile(Tourist* tourist, string tourName) {
        // ³������ ���� ��� ������
        ofstream outFile("reservations.txt", ios::app); // ios::app ���� ��� ��� �� ���� �����

        // ���������, �� ���� ������� �������
        if (outFile.is_open()) {
            // �������� ��'�, ������� ������� �� ����� ���� � ����
            outFile << tourist->getFirstName() << " " << tourist->getLastName() << " - " << tourName << endl;

            // ������� ����
            outFile.close();
            cout << "���������� ��������� � ����." << endl;
        }
        else {
            cout << "��������� ������� ���� ��� ������." << endl;
        }
    }
    void addTourToMap(Tourist* tourist, shared_ptr<Tour> tour) {
        toursNew[tourist] = tour;
    }
    /* void addTourVector(vector<shared_ptr<Tour>>& toursPac) {
         toursPac=tourPackages;

     }*/
    vector<string> loadUsersFromJson(const std::string& filename) {
        vector<string> users;
        std::ifstream file(filename);
        json data;
        file >> data;
        file.close();

        for (const auto& userEntry : data.items()) {
            std::string username = userEntry.key();
            json user = userEntry.value()["user"];

            std::string name = user["name"];
            std::string surname = user["surname"];
            int age = user["age"];
            
            bool insurance = user["Insuarance"];

            std::string output = "Username: " + username + "\nName: " + name + "\nSurname: " + surname + "\nAge: " + std::to_string(age) + "\nInsurance: " + (insurance ? "true" : "false") + "\n\n";
            users.emplace_back(output);
           
        }
        return users;
    }
    vector<Tourist> loadUsersFromJsonTourist(const std::string& filename) {
        vector<Tourist> users;
        std::ifstream file(filename);
        json data;
        file >> data;
        file.close();

        for (const auto& userEntry : data.items()) {
           
            std::string username = userEntry.key();
            json user = userEntry.value()["user"];

            std::string name = user["name"];
            std::string surname = user["surname"];
            int age = user["age"];
            double budget = user["budget"];
            bool insurance = user["Insuarance"];
            Tourist tourist(name, surname, age, budget, insurance);

            
            users.emplace_back(tourist);

        }
        return users;
    }
    void addTourToJs(Tour* tour);
    void reserveTourJs(Tourist* tourist, Tour* tour, double price);
    void showClients();
    string getNumber();



};




