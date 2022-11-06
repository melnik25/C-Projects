#ifndef SQUARE_H_
#define SQUARE_H_

class Square
{
private:
	double side;

public:
	Square(); // default constructor
	Square(double); // overloaded constructor that allows assingning
					// a value to side when object is created

	bool setSide(double);
	double getSide();
	double calcArea();
};

#endif
