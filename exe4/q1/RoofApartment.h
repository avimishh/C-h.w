#ifndef __RoofApartment_h
#define __RoofApartment_h
#include "Apartment.h"

class RoofApartment : public Apartment {
	int roofSize;
public:
	//set's and get's
	int getRoofSize() const { return roofSize; };
	void setRoofSize(int roofSize);
	//c'tors
	RoofApartment();
	RoofApartment(char* streetName, int buildingNumber, int apartmentNumber, int numOfRooms, int size, int floor, int roofSize) throw (const char*, int);
	//operators
	bool operator==(const RoofApartment& other)const;
	friend ostream& operator<<(ostream& os, const RoofApartment& other);
	friend ostream& operator<<(ostream& os, const Apartment& other);
};



#endif
