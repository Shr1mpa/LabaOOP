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
    vector<Tourist> clients;//список клієнтів
    vector<Tour> tourPackages;//список путівок

    vector<Tour> reservedTours;
    string phoneNumber;
    string name;
    unordered_map<string, double> tours;//тур-ціна
    unordered_map<Tourist*, string> tours_reserved;//клієнт-назва туру
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
        // Пошук туру за назвою
        for (auto& tour : tourPackages) {
            if (tour.getName() == tourName) {
                // Додавання туру до списку заброньованих
                reservedTours.emplace_back(tour);
                cout << "Тур '" << tourName << "' заброньовано." << endl;

                // Записати інформацію в файл
                writeReservationToFile(tourist, tourName);

                // Додаткова логіка, яка може бути потрібна, наприклад,
                // видалення туру зі списку доступних
                // або оновлення інших даних
                // ...
                // Виходити з циклу, якщо тур знайдено
                return;
            }
        }
        cout << "Тур '" << tourName << "' не знайдено." << endl;
    }

    void writeReservationToFile(Tourist* tourist, string tourName) {
        // Відкрити файл для запису
        ofstream outFile("reservations.txt", ios::app); // ios::app додає нові дані до кінця файлу

        // Перевірити, чи файл вдалося відкрити
        if (outFile.is_open()) {
            // Записати ім'я, прізвище туриста та назву туру в файл
            outFile << tourist->getFirstName() << " " << tourist->getLastName() << " - " << tourName << endl;

            // Закрити файл
            outFile.close();
            cout << "Інформацію збережено в файл." << endl;
        }
        else {
            cout << "Неможливо відкрити файл для запису." << endl;
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




