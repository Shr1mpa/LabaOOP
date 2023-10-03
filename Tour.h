#pragma once
#include "Country.h"
#include <nlohmann/json.hpp>
using namespace nlohmann;
class Tour
{
private:
    string tourName;
    double price;
    Country m_country; // Країна, пов'язана з туром

public:
    
    Tour(string name, double p, Country country) : tourName(name), price(p), m_country(country) {};
    string getName();
    double getPrice();
    Country getCountry();
    void setName(string newTourName);
    void setPrice(double newTourPrice);
    void setCountry(Country newTourCountry);
    void printTour();
    nlohmann::json toJson() {
        return {
            {"tourName", tourName},
            {"price", price},
            {"country", m_country.toJson()}
            // додайте інші властивості туру, які вам потрібні
        };
    }
    std:: vector<Tour> static ReadAllToursFromJsonFile() {
        std::ifstream file("tours.json");
        if (!file.is_open()) {
            throw std::runtime_error("Файл не знайдено.");
        }

        json jsonData;
        file >> jsonData;

        std::vector<Tour> tours;
        for (const auto& tourData : jsonData) {
            std::string tourName = tourData["tourName"];
            double price = tourData["price"];
            
            json countryData = tourData["country"];
            string countryCurrency = countryData["currency"];
            std::string countryName = countryData["name"];
            std::string countryCapital = countryData["capital"];
            string countryLanguage = countryData["language"];
           
            double countryPopulation1 = countryData["population"];
            // Додайте інші поля країни

            Country country(countryName, countryCapital, countryLanguage, countryPopulation1, countryCurrency);
            Tour tour(tourName, price, country);

            tours.push_back(tour);
        }

        return tours;
    }

    
   



};

