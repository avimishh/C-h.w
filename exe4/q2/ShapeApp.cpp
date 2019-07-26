#include "Point.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Box.h"

void main() {
	cout << "------------------------POINT----------------";
	Point p1(5,4),p3,p4;
	Point p2(4, 8);
	cout <<"\n\np1: "<< p1<< "\np2: " << p2 << "\np3: " << p3 << "\np4: " << p4 << endl;
	p1.move(-2, -3);
	cout << "p1 after move (dx=-2,dy=-3): " << p1 << endl;
	p4 = p1 + p2;
	cout << "p4=p1+p2: " << p4 << endl;
	p3 += p2;
	cout << "p3+=p2: " << p3 << endl;
	cout << "\n------------------------END OF POINT----------------";
	cout << "\n\n------------------------RECTANGLE----------------";
	Rectangle r1, r2(p1, p2);
	cout << "\nr1(empty c'tor): " << r1 << "\nr2(p1,p2): " << r2<<endl;
	cout << "r2 side1: " << r2.getSide1() << " side2: " << r2.getSide2() << "\n\tarea: " << r2.area() << "\n\tperimeter: " << r2.perimeter() << endl;
	cout << "\n------------------------END OF RECTANGLE----------------";
	cout << "\n\n------------------------CIRCLE----------------";
	Circle c1, c2(Point(1, 2), 2);
	cout << "\nc1(empty c'tor): " << c1 << "\nc2(center(1,2),radius=2): " << c2;
	c2.setRadius(10);
	cout << "\nafter set radius for c2 to 10: " << c2 << endl;
	cout << "c2 area: " << c2.area() << "\nc2 primeter: " << c2.perimeter();
	cout << "\n------------------------END OF CIRCLE----------------";
	cout << "\n\n------------------------BOX----------------";
	Box b1(Point(2, 4), Point(5, 8), 5);
	cout << "\nb1 created: " << b1;
	cout << "\nbase area: " << b1.baseArea() << "\nbox volume: " << b1.volume();
	cout << "\n------------------------END OF BOX----------------\n";
	system("pause");
}