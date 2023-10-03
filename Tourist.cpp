#include "Tourist.h"
#include "TourAgency.h"
using namespace nlohmann;
void Tourist::reserveTour1(TourAgency* agency, string tourName) {
	agency->reserveTour(this, tourName);

}
void Tourist::reserveTour2(TourAgency* agency, string tour) {
	agency->tourReserve(this, tour);

}
void Tourist::setBudget(double newBudget) {
	budget = newBudget;
}
string Tourist::getFirstName() {
	return firstName;
}
string Tourist::getLastName() {
	return lastName;
}

double Tourist::getBudget() {
	return budget;
}
int Tourist::getAge() {
	return age;
}
bool Tourist::getIsuarence() {
	return hasIsuarence;
}
void Tourist::checkTours(TourAgency* agency) {
	agency->showTours();

}
void Tourist::makeCall(TourAgency* agency) {
	cout << "Ви здійснили виклик за номером: " << agency->getNumber() << endl;
}
Tourist* Tourist::returnData() {
	return this;
};
json Tourist::toJson1() {
	return {
		{"name", firstName},
		{"surname", lastName},
		{"age", age},
		{"budget", budget},
			{"Insuarance", hasIsuarence}
			// додайте інші властивості туру, які вам потрібні
	};
}

