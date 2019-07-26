#include "Address.h"

//set's
void Address::setStreetName(const char *streetName) throw (const char*) {
	if (strlen(streetName) > 20)
		throw "wrong! street name could not get more than 20 chars";
	strcpy(this->streetName, streetName);
}
void Address::setBuildingNumber(int buildingNumber) throw (int){
	if (buildingNumber > 200 || buildingNumber < 1)
		throw buildingNumber;
	this->buildingNumber = buildingNumber;
}
void Address::setAppartmentNumber(int appartmentNumber) {
	this->appartmentNumber = appartmentNumber;
}

//c'tor's
Address::Address() :buildingNumber(0),appartmentNumber(0){
	strcpy(streetName, "");
}
Address::Address(char* streetName, int buildingNumber, int appartmentNumber)throw (const char*,int){
	setStreetName(streetName);
	setBuildingNumber(buildingNumber);
	setAppartmentNumber(appartmentNumber);
}

//operators
ostream& operator<<(ostream& os, const Address& other) {
	os << "address: street " << other.streetName <<" "<< other.buildingNumber << ", appartment " << other.appartmentNumber << endl;
	return os;
}
bool Address::operator==(const Address&other) const {
	return !strcmp(this->streetName, other.streetName) && this->buildingNumber==other.buildingNumber && this->appartmentNumber==other.appartmentNumber;
}

//methods
void Address::setAddress(const char* streetName, int buildingNumber, int appartmentNumber)  throw (const char*, int) {
	setStreetName(streetName);
	setBuildingNumber(buildingNumber);
	setAppartmentNumber(appartmentNumber);
}