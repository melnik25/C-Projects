#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle
{
private:
	double length, width;

public:
	Rectangle(); // default constructor
	Rectangle(double, double); // overloaded constructor that allows assingning
							   // a value to length and width when object is created

	bool setLength(double);
	bool setWidth(double);
	double getLength();
	double getWidth();
	double calcArea();
};

#endif
