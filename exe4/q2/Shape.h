#ifndef __Shape_h
#define __Shape_h
#include "Point.h"

class Shape {
 protected:
	Point position, point2;
public:
	//set's and get's
	Point getPosition()const { return position; };
	Point getPoint2()const { return point2; };
	void setPosition(double x, double y);
	void setPoint2(double x, double y);
	//c'tors
	Shape();
	Shape(Point, Point);
	//operators
	friend ostream& operator<<(ostream& os, const Shape& o);
	//methods
	void move(double, double);
};



#endif