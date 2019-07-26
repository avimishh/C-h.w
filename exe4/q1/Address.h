#ifndef __Address_h
#define __Address_h
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Address {
	char streetName[21];
	int buildingNumber;
	int appartmentNumber;
public:
	//set's and get's
	const char* getStreetName() const { return streetName; };
	int getBuldingNumber()const { return buildingNumber; };
	int getAppartmentNumber() const { return appartmentNumber; };
	void setStreetName(const char *streetName) throw(char*);
	void setBuildingNumber(int buildingNumber) throw(int);
	void setAppartmentNumber(int appartmentNumber);
	//c'tors
	Address();
	Address(char* streetName, int buildingNumber, int appartmentNumber) throw (const char*, int);
	//operators
	bool operator==(const Address&other) const;
	friend ostream& operator<<(ostream& os, const Address& other);
	//methods
	void setAddress(const char* streetName, int buildingNumber,int appartmentNumber)  throw (const char*, int);
};

#endif
