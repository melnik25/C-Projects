#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle
{
private:
	double radius;

public:
	Circle(); // default constructor
	Circle(double); // overloaded constructor that allows assingning
					// a value to radius when object is created

	bool setRadius(double);
	double getRadius();
	double calcArea();
};

#endif

