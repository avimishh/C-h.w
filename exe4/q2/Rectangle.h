#ifndef __Rectangle_h
#define __Rectangle_h
#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape {
public:
	//c'tors
	Rectangle();
	Rectangle(Point, Point);
	//operators
	friend ostream& operator<<(ostream& os, const Rectangle& o);
	//methods
	double getSide1() const;
	double getSide2() const;
	double area() const;
	double perimeter() const;
};



#endif