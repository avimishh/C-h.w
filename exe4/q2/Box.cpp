#include "Box.h"

//get's and set's
void Box::setHeight(double height) {
	this->height = height;
}
void Box::setBase(Rectangle base) {
	this->base = base;
}
//c'tors
Box::Box() :height(1) {}
Box::Box(Point position, Point point2, double height):base(position,point2),height(height) {}
//operators
ostream& operator<<(ostream& os, const Box& o) {
	os << Shape(o.base) << "\nheight: " << o.height << endl;
	//os << "\nposition: " << o.base.getPosition << "\npoint2: " << o.base.getPoint2 << "\nheight: " << o.height << endl;
	return os;
}
//methods
Point Box::getPosition() const {
	return base.getPosition();
}
void Box::setPosition(double x,double y) {
	base.setPosition(x, y);
}
double Box::baseArea()const {
	return base.area();
}
double Box::volume() const {
	return height*base.area();
}
void Box::move(double dx, double dy) {
	base.move(dx, dy);
}