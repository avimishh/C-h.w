#include "Point.h"

//c'tors
Point::Point() :x(0), y(0) {};
Point::Point(double x, double y) :x(x), y(y) {};
//operators
bool Point::operator==(const Point& o)const {
	return x == o.x && y == o.y;
}
Point Point::operator+(const Point& o)const {//to check in main
	return Point(x + o.x, y + o.y);
}
Point Point::operator-(const Point& o)const {
	return Point(x - o.x, y - o.y);
}
const Point& Point::operator+=(const Point& o) {
	x += o.x;
	y += o.y;
	return *this;
}
ostream& operator<<(ostream &os, const Point& o) {
	os << "(" << o.x << "," << o.y << ")";
	return os;
}
//methods
void Point::move(double dx, double dy) {
	x += dx;
	y += dy;
}