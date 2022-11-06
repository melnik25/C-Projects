#include "Trapezoid.h"

// Default constructor assigns value to member variable.
// In-class initialization is usually preferred
Trapezoid::Trapezoid()
{ base1 = 1.0; base2 = 1.0; height = 1.0; }

// Overloaded constructor assigns user provided
// value to member variable
Trapezoid::Trapezoid(double b1, double b2, double h)
{ base1 = b1; base2 = b2; height = h; }

// mutator/setter function
bool Trapezoid::setBase1(double b1) {
	if (b1 >= 0) {
		base1 = b1;
		return false;
	}

	else {
		return true;
	}
}

bool Trapezoid::setBase2(double b2) {
	if (b2 >= 0) {
		base2 = b2;
		return false;
	}

	else {
		return true;
	}
}

bool Trapezoid::setHeight(double h) {
	if (h >= 0) {
		height = h;
		return false;
	}

	else {
		return true;
	}
}

// accessor/getter function
double Trapezoid::getBase1()
{ return base1; }

double Trapezoid::getBase2()
{ return base2; }

double Trapezoid::getHeight()
{ return height; }

double Trapezoid::calcArea()
{ return 0.5 * (base1 + base2) * height; }