#pragma once
#include <string>
#include <nlohmann/json.hpp>

#include <fstream>

using namespace std;
class Country
{
private:
    string name;
    string capital;
    string language;
    double population;
    string currency;
    friend class Tour;
public:
    
    Country(string n, string cap, string lng, double popl, string cur) : name(n), capital(cap), language(lng), population(popl), currency(cur) {};
    string getName();
    string getCapital() {
        return capital;
    }
    string getLanguage();
    double getPopulation();
    string getCurrency();
    nlohmann::json toJson() {
        return {
            {"name", name},
            {"capital", capital},
            {"language", language},
            {"population", population},
            {"currency", currency}
        };
    }
};

