#include "RoofApartment.h"

//set's and get's
void RoofApartment::setRoofSize(int roofSize) throw(const char*) {
	if (roofSize > 100 || roofSize < 20)
		throw "wrong size of roof.";
	this->roofSize = roofSize;
}
//c'tors
RoofApartment::RoofApartment() {
	roofSize = 0;
}
RoofApartment::RoofApartment(char* streetName, int buildingNumber, int apartmentNumber, int numOfRooms, int size, int floor, int roofSize) throw (const char*, int) :Apartment(streetName, buildingNumber, apartmentNumber, numOfRooms, size, floor) {
	setRoofSize(roofSize);
}

//operators
bool RoofApartment::operator==(const RoofApartment& other) const{
	return Apartment::operator==(other) && roofSize == other.roofSize;
}
ostream& operator<<(ostream& os, const RoofApartment& other) {
	os << Apartment(other) << "Roof size: " << other.roofSize;
	return os;
}