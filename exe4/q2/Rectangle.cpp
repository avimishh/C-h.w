#include "Rectangle.h"

//c'tors
Rectangle::Rectangle() {}
Rectangle::Rectangle(Point position, Point point2) :Shape(position, point2) {}
//operators
ostream& operator<<(ostream& os, const Rectangle& o) {
	os << "side1: " << o.getSide1() << "\tside2: " << o.getSide2();
	return os;
}
//methods
double Rectangle::getSide1() const {
	double result=point2.x - position.x;
	if (result > 0)
		return result;
	else return -result;
}
double Rectangle::getSide2()const {
	double result = point2.y - position.y;
	if (result > 0)
		return result;
	else return -result;;
}
double Rectangle::area()const {
	return getSide1()*getSide2();
}
double Rectangle::perimeter()const {
	return 2 * getSide1() + 2 * getSide2();
}