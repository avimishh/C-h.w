#include "Apartment.h"
#include "GardenApartment.h"
#include "RoofApartment.h"

void main() {
	int roofsize,buildingnumber;
	bool isvalid = false;
	while (!isvalid) {
		try {
			cout << "enter building number? ";
			cin >> buildingnumber;
			cout << "enter size of roof? ";
			cin >> roofsize;
			RoofApartment r1("roofst", buildingnumber, 20, 4, 10, 2, roofsize);
			isvalid = true;
			cout << "\n----r1 " << r1;
		}
		catch (char* e) {cout << e << endl;}
		catch (int x) {	cout << "wrong! building number must be from 1 to 200.\n";	}
		catch (...) {cout << "unknown error.";	}
	}
	GardenApartment g1("lala-land", 15, 80, 9, 180, 1, 40);
	GardenApartment g2("lala-land", 15, 80, 9, 180, 1, 40);
	cout <<"\n\n----g1 "<< g1;
	cout << "\n\n----g2: "<< g2;
	g1 == g2 ? cout << "\ng1 and g2 the same apartment." : cout << "\ng1 not the same with g2.";
	g2++;
	g2++;
	cout << "\nnumber of rooms in g2 increased by 2";
	cout << "\n\n----g2: " << g2;
	g1 == g2 ? cout << "\ng1 and g2 the same apartment." : cout << "\ng1 not the same with g2.";

	Apartment a1;
	cout <<"\n\na1 "<< a1;
	a1.setAddress("tudo-bom", 45, 20);
	cout << "\n\nafter change a1 " << a1;
	system("pause");
}