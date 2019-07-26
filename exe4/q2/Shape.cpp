#include "Shape.h"

//set's and get's
void Shape::setPosition(double x, double y) {
	position.x = x;
	position.y = y;
}
void Shape::setPoint2(double x, double y) {
	point2.x = x;
	point2.y = y;
}

//c'tors
Shape::Shape():point2(1,1) {}
Shape::Shape(Point position, Point point2):position(position),point2(point2) {}
//operators
ostream& operator<<(ostream& os, const Shape& o) {
	os << "position: " << o.position << "\npoint2: " << o.point2;
	return os;
}
//methods
void Shape::move(double dx, double dy) {
	position.move(dx, dy);
	point2.move(dx, dy);
}