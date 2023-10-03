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
void TourAgency::reserveTour(Tourist* client, string tourName) {//Заразервувати тур, така сама функція є в туриста і перекидує на цю ф-цію, дані з файлу заноситься в хеш-таблицю і потім з неї зчитується
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
            tours_reserved[client] = tourName; //в хеш-таблиці зарезервованих турів (поки запису в файл зарезервованих турів немає)

            addClientsToFile(*client);


            cout << client->getFirstName() << " " << client->getLastName() << " купив тур " << tourName << endl;
        }
        else {
            cout << client->getFirstName() << " " << client->getLastName() << " не має достатньо коштів для покупки туру " << tourName << endl;
        }
    }
    else {
        cout << "Тур з назвою " << tourName << " не існує." << endl;
    }
}
//void TourAgency::reserveNewTour(Tourist* client, Tour*tour) {//Заразервувати тур, така сама функція є в туриста і перекидує на цю ф-цію, дані з файлу заноситься в хеш-таблицю і потім з неї зчитується
//   
//    
//    if (tours.find(tourName) != tours.end()) {
//        double tourPrice = tours[tourName];
//
//        if (client->getBudget() >= tourPrice) {
//            client->setBudget(client->getBudget() - tourPrice);
//            tours_reserved[client] = tourName; //в хеш-таблиці зарезервованих турів (поки запису в файл зарезервованих турів немає)
//
//            addClientsToFile(*client);
//
//
//            cout << client->getFirstName() << " " << client->getLastName() << " купив тур " << tourName << endl;
//        }
//        else {
//            cout << client->getFirstName() << " " << client->getLastName() << " не має достатньо коштів для покупки туру " << tourName << endl;
//        }
//    }
//    else {
//        cout << "Тур з назвою " << tourName << " не існує." << endl;
//    }
//}


void TourAgency::addClient() {//Пуш клієнтів в вектор
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
void TourAgency::checkClient(string name, string surname) {//Вивести всі данні про клієнта
    bool found = false;
    addClient();


    for (auto& client : clients) {
        if (client.getFirstName() == name && client.getLastName() == surname) {
            // Якщо знайдено співпадіння, виведіть інформацію про туриста
            cout << "Ім'я: " << client.getFirstName() << endl;
            cout << "Прізвище: " << client.getLastName() << endl;
            cout << "Вік: " << client.getAge() << endl;
            cout << "Бюджет: " << client.getBudget() << endl;
            cout << "Страхування: " << (client.getIsuarence() ? "Так" : "Ні") << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Такого клієнта не знайдено." << endl;
    }
}
void TourAgency::addTour(string tourName, double price) {//Додати тур до файлу

    ofstream inFile("Tours.txt", ios::app);
    inFile << " " << tourName << " " << price << endl;
    inFile.close();

}
void TourAgency::showTours() {//Вивести всі тури
    ifstream outFile1("Tours.txt");
    string tourName;
    double tourPrice;
    while (outFile1 >> tourName >> tourPrice) {
        tours[tourName] = tourPrice;
    }
    outFile1.close();
    for (const auto& pair : tours) {
        cout << "Країна: " << pair.first << ", Ціна: " << pair.second << std::endl;
    }


}
string TourAgency::getNumber() {
    return phoneNumber;
}
void TourAgency::addClientsToFile(Tourist& currentClient) {//Записати клієнта в файл (використовується при резервуванні)

    ofstream inFile("Data.txt", ios::app);
    if (inFile.is_open()) {

        inFile << currentClient.getFirstName() << " " << currentClient.getLastName() << " " << currentClient.getAge() << " " << currentClient.getBudget() << " " << currentClient.getIsuarence() << endl;

    }
    else {
        cout << "Не вдалося відкрити файл." << endl;
    }
    inFile.close();



}
void TourAgency::readClientsFromFile() {//Вивести клієнтів
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
            cout << "Ім'я: " << client.getFirstName() << ", Прізвище: " << client.getLastName() << ", Вік: " << client.getAge() << ", Бюджет: " << client.getBudget() << ", Страхування: " << (client.getIsuarence() ? "Так" : "Ні") << std::endl;
        }
    }
    else {
        cout << "Не вдалося відкрити файл." << endl;
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
   

    // Отримуємо ідентифікатор туру, наприклад, його назву
    

    double userBudget = tourist->getBudget();

    // Отримуємо JSON-представлення користувача та туру
    if (userBudget >= price) {
        // Віднімаємо вартість туру від бюджету користувача
        tourist->setBudget(tourist->getBudget() - price);
        nlohmann::json userJson = tourist->toJson1();
        nlohmann::json tourJson = tour->toJson();
        std::string tourIdentifier = tourist->getLastName();
        

        // Записуємо резервацію у файл (user_tour.json)
        std::ifstream inputFile("user_tour.json");
        nlohmann::json reservations;

        if (inputFile.is_open()) {
            inputFile >> reservations;
        }

        reservations[tourIdentifier] = { {"user", userJson}, {"tour", tourJson} };

        std::ofstream outputFile("user_tour.json");
        outputFile << std::setw(4) << reservations << std::endl;
        MessageBox::Show("Успішно зарезервовано");
    }
    else {
        MessageBox::Show("Недостатньо коштів");
    }
}
void TourAgency::addTourToJs(Tour* tour) {
    std::ifstream inputFile("tours.json");
    nlohmann::json toursJson;

    if (inputFile.is_open()) {
        inputFile >> toursJson;
    }

    // Додаємо новий тур до JSON об'єкту
    toursJson.push_back(tour->toJson());

    // Записуємо оновлений JSON у файл
    std::ofstream outputFile("tours.json");
    outputFile << std::setw(4) << toursJson << std::endl;

}

