#include "Square.h"

// Default constructor assigns value to member variable.
// In-class initialization is usually preferred
Square::Square()
{ side = 1.0; }

// Overloaded constructor assigns user provided
// value to member variable
Square::Square(double s)
{ side = s; }

// mutator/setter function
bool Square::setSide(double s)
{	
	if (s >= 0) {
		side = s;
		return false;
	}

	else {
		return true;
	}
}

// accessor/getter function
double Square::getSide() 
{ return side; }

double Square::calcArea()
{ return side * side; }