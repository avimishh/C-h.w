#ifndef __GardenApartment_h
#define __GardenApartment_h
#include "Apartment.h"

class GardenApartment: public Apartment {
	int gardenSize;
public:
	//set's and get's
	int getGardenSize() const { return gardenSize; };
	void setGardenSize(int gardenSize);
	//c'tors
	GardenApartment();
	GardenApartment(char* streetName, int buildingNumber, int apartmentNumber, int numOfRooms, int size, int floor,int gardenSize) throw (const char*, int);
	//operators
	bool operator==(const GardenApartment& other) const;
	friend ostream& operator<<(ostream& os, const GardenApartment& other);
	friend ostream& operator<<(ostream& os, const Apartment& other);
};



#endif