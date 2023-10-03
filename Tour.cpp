#include "Tour.h"
#include <iostream>
using namespace std;

string Tour::getName() {
	return tourName;
}
double Tour::getPrice() {
	return price;

}
Country Tour::getCountry() {
	return m_country;
}
void Tour::printTour() {
	cout << "Назва туру: " << tourName << " " << "Ціна: " << price << " " << "Країна:" << m_country.getName() << endl;
}
void Tour::setName(string newTourName) {
	tourName = newTourName;
}
void Tour::setPrice(double newTourPrice) {
	price = newTourPrice;
}
void Tour::setCountry(Country newTourCountry) {
	m_country = newTourCountry;
}