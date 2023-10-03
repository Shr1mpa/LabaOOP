#pragma once
#include <iostream>
#include<string.h>
#include <vector>
#include "nlohmann/json.hpp"

using namespace std;
using namespace nlohmann;
class TourAgency;
class Tourist
{
private:
	string firstName;
	string lastName;
	int age;
	double budget;
	bool hasIsuarence; //страхування
	vector<Tourist> tourists;

public:
	Tourist() {};
	Tourist(string first, string last, int a, double b, bool insurance) : firstName(first), lastName(last), age(a), budget(b), hasIsuarence(insurance) {}

	int getAge();
	bool getIsuarence();
	void setBudget(double newBudget);
	string getFirstName();
	string getLastName();
	void reserveTour1(TourAgency* agency, string tourName);
	void reserveTour2(TourAgency* agency, string name);
	double getBudget();
	void checkTours(TourAgency* agency);
	void makeCall(TourAgency* agency);
	Tourist* returnData();
	
	json toJson1();
	


};

