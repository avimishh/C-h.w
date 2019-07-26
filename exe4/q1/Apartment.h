#ifndef __Apartment_h
#define __Apartment_h
#include "Address.h"

class Apartment {
protected:
	Address address;
	int numOfRooms;
	int size;
	int floor;
public:
	//set's and get's
	const Address& getAddress() const { return address; };
	int getNumOfRooms() const { return numOfRooms; };
	int getSize() const { return size; };
	int getFloor() const { return floor; };
	void setAddress(char* streetName, int buildingNumber, int apartmentNumber) throw (const char*, int);
	//void setAddress(const Address& other) throw (const char*, int);
	void setNumOfRooms(int numOfRooms) throw(char*);
	void setSize(int size) throw(char*);
	void setFloor(int floor) throw(char*);
	//c'tors
	Apartment();
	Apartment(char* streetName, int buildingNumber, int apartmentNumber, int numOfRooms, int size, int floor) throw (const char*, int);
	//operators
	bool operator==(const Apartment& other) const;
	void operator++(int);
	friend ostream& operator<<(ostream& os, const Apartment& other);
};



#endif