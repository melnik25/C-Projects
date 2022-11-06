#include "Rectangle.h"

// Default constructor assigns value to member variable.
// In-class initialization is usually preferred
Rectangle::Rectangle()
{ length = 1.0; width = 1.0; }

// Overloaded constructor assigns user provided
// value to member variable
Rectangle::Rectangle(double l, double w)
{ length = l; width = w; }

// mutator/setter function
bool Rectangle::setLength(double l) {
	if (l >= 0) {
		length = l;
		return false;
	}

	else {
		return true;
	}
}

bool Rectangle::setWidth(double w) {
	if (w >= 0) {
		width = w;
		return false;
	}

	else {
		return true;
	}
}

// accessor/getter function
double Rectangle::getLength() 
{ return length; }

double Rectangle::getWidth() 
{ return width; }

double Rectangle::calcArea()
{ return length * width; }
