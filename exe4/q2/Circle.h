#ifndef __Circle_h
#define __Circle_h
#include "Point.h"
#include "Shape.h"

class Circle : public Shape {
public:
	//c'tors
	Circle();
	Circle(Point center, double radius=0);
	//operators
	friend ostream& operator<<(ostream& os, const Circle& o);
	//methods
	double getRadius() const;
	void setRadius(double radius);
	double area() const;
	double perimeter() const;
};

#endif