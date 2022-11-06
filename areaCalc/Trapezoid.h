#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

class Trapezoid
{
private:
	double base1, base2, height;

public:
	Trapezoid(); // default constructor
	Trapezoid(double, double, double); // overloaded constructor that allows assingning
					// a value to bases and height when object is created

	bool setBase1(double);
	bool setBase2(double);
	bool setHeight(double);
	double getBase1();
	double getBase2();
	double getHeight();
	double calcArea();
};

#endif

