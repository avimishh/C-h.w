#ifndef __Box_h
#define __Box_h
#include "point.h"
#include "Rectangle.h"

class Box {
	Rectangle base;
	double height;
public:
	//get's and set's
	double getHeight() const{ return height; };
	Rectangle getBase() const{ return base; };
	void setHeight(double);
	void setBase(Rectangle);
	//c'tors
	Box();
	Box(Point, Point, double);
	//operators
	friend ostream& operator<<(ostream& os, const Box& o);
	//methods
	Point getPosition() const;
	void setPosition(double x, double y);
	double baseArea()const;
	double volume() const;
	void move(double, double);
};



#endif