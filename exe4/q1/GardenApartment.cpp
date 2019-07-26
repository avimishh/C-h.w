#include "GardenApartment.h"

//set's and get's
void GardenApartment::setGardenSize(int gardenSize) throw(const char*){
	if (gardenSize > 100 || gardenSize < 20)
		throw "wrong size of garden.";
	this->gardenSize = gardenSize;
}
//c'tors
GardenApartment::GardenApartment() {
	gardenSize = 0;
}
GardenApartment::GardenApartment(char* streetName, int buildingNumber, int apartmentNumber, int numOfRooms, int size, int floor, int gardenSize) throw (const char*, int) :Apartment(streetName,buildingNumber,apartmentNumber,numOfRooms,size,floor) {
	setGardenSize(gardenSize);
}

//operators
bool GardenApartment::operator==(const GardenApartment& other) const{
	return Apartment::operator==(other) && gardenSize == other.gardenSize;
}
ostream& operator<<(ostream& os, const GardenApartment& other) {
	os << Apartment(other) << "Garden size: " << other.gardenSize;
	return os;
}