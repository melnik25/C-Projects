#include <cmath>
#include "Circle.h"

// Default constructor assigns value to member variable.
// In-class initialization is usually preferred
Circle::Circle()
{ radius = 1.0; }

// Overloaded constructor assigns user provided
// value to member variable
Circle::Circle(double r)
{ radius = r; }

// mutator/setter function
bool Circle::setRadius(double r)
{
	if (r >= 0) {
		radius = r;
		return false;
	}

	else {
		return true;
	}
}

// accessor/getter function
double Circle::getRadius() 
{ return radius; }

double Circle::calcArea()
{ return 3.14 * pow(radius, 2); }