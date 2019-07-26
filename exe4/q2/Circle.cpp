#include "Circle.h"
#include <cmath>
//c'tors
Circle::Circle() :Shape(Point(),Point(0,1)){}
Circle::Circle(Point center, double radius): Shape(center, Point(center.x, center.y + radius)) {}
//operators
ostream& operator<<(ostream& os, const Circle& o) {
	os << "center: " << o.position << "\tradius: " << o.getRadius();
	return os;
}
//methods
double Circle::getRadius() const {
	return sqrt(pow((point2.x - position.x), 2)+pow((point2.y - position.y), 2));
}
void Circle::setRadius(double radius) {
	point2.x = position.x;
	point2.y = position.y + radius; 
}
double Circle::area()const {
	double radius = getRadius();
	return 3.14*radius*radius;
}
double Circle::perimeter()const {
	return 2 * 3.14*getRadius();
}