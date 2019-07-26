#ifndef __Point_h
#define __Point_h
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Point {
	double x, y;
	friend class Shape;
	friend class Rectangle;
	friend class Circle;
public:
	//get's and set's
	double getX() const{ return x; };
	double getY() const{ return y; };
	void setX(double) { this->x = x; };
	void setY(double) { this->y = y; };
	//c'tors
	Point();
	Point(double, double);
	//operators
	bool operator==(const Point& o)const;
	Point operator+(const Point& o)const;
	Point operator-(const Point& o)const;
	const Point& operator+=(const Point& o);
	friend ostream& operator<<(ostream &os, const Point& o);
	//methods
	void move(double, double);
};



#endif