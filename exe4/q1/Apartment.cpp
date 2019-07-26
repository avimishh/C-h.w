#include "Apartment.h"

//set's
void Apartment::setAddress(char* streetName, int buildingNumber, int apartmentNumber) throw (const char*, int) {
	this->address.setAddress(streetName, buildingNumber, apartmentNumber);
}
/*void Apartment::setAddress(const Address& other) throw (const char*, int) {
	this->address.setAddress(other.getStreetName(),other.getBuildingNumber,other.getAppartmentNumber);
}*/
void Apartment::setNumOfRooms(int numOfRooms) throw(char*) {
	if (numOfRooms > 10 || numOfRooms < 0)
		throw "wrong number of rooms.";
	this->numOfRooms = numOfRooms;
}
void Apartment::setSize(int size) throw(char*) {
	if (size > 200 || size < 0)
		throw "wrong number of apartment size.";
	this->size = size;
}
void Apartment::setFloor(int floor) throw(char*) {
	if (floor > 20 || floor < 0)
		throw "wrong number of apertment floor.";
	this->floor = floor;
}

//c'tors
Apartment::Apartment() :numOfRooms(0),size(0),floor(0){

}
Apartment::Apartment(char* streetName, int buildingNumber, int apartmentNumber, int numOfRooms, int size, int floor) throw (const char*, int) : address(streetName,buildingNumber,apartmentNumber){
	setNumOfRooms(numOfRooms);
	setSize(size);
	setFloor(floor);
}

//operators
bool Apartment::operator==(const Apartment& other) const {
	if (!(address == other.address))
		return false;
	return numOfRooms == other.numOfRooms&&size == other.size&&floor == other.floor;
}
void Apartment::operator++(int) {
	this->numOfRooms++;
}
ostream& operator<<(ostream& os, const Apartment& other) {
	os <<" details: \n"<< other.address << "Rooms: " << other.numOfRooms << "\nSize: " << other.size << "\nFloor: " << other.floor << endl;
	return os;
}