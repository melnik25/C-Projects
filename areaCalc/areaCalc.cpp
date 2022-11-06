// This program will take the user's inputs to determine the area of 4 different shapes. 
// Anthony Melnik
#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"
using namespace std;

int main()
{
	// variables used in main()
	int userChoice;
	double squareLength;
	double squareHeight;
	double trapezoidTop;
	double circleRadius;
	bool inValid = 1;

	//display menu
	cout << "\t1 -- circle\n\t2 -- square\n\t3 -- rectangle\n\t4 -- trapezoid\n\t5 -- quit" << endl;

	//get user's menu choice
	cin >> userChoice;

	//while loop if user enters a negative value
	while (userChoice > 5 || userChoice < 1) {
		cout << "You entered an invalid choice. Try again.\n";
		cout << "\t1 -- circle\n\t2 -- square\n\t3 -- rectangle\n\t4 -- trapezoid\n\t5 -- quit" << endl;
		cin >> userChoice;
	}

	//sets all decimal places to 1
	cout << fixed << showpoint << setprecision(1);

	// if/else if chain of user's selection with 
	// class implementation to calculate areas
	if (userChoice == 1) {
		Circle Circleobj;
		while (inValid) {
			cout << "Radius: ";
			// get input in main, not in classes
			cin >> circleRadius;
			inValid = Circleobj.setRadius(circleRadius);
		}
		cout << "Area: " << Circleobj.calcArea() << endl;
	}
	else if (userChoice == 2) {
		Square Squareobj;
		while (inValid) {
			cout << "Side: ";
			cin >> squareLength;
			inValid = Squareobj.setSide(squareLength);
		}
		cout << "Area: " << Squareobj.calcArea() << endl;
	}
	else if (userChoice == 3) {
		Rectangle Rectangleobj;
		while (inValid) {
			cout << "Length: ";
			cin >> squareLength;
			cout << "Width: ";
			cin >> squareHeight;
			inValid = ((Rectangleobj.setLength(squareLength)) || (Rectangleobj.setWidth(squareHeight)));
		}
		cout << "Area: " << Rectangleobj.calcArea() << endl;
	}
	else if (userChoice == 4) {
		Trapezoid Trapezoidobj;
		while (inValid) {
			cout << "Base1: ";
			cin >> squareLength;
			cout << "Base2: ";
			cin >> trapezoidTop;
			cout << "Height: ";
			cin >> squareHeight;
			inValid = ((Trapezoidobj.setBase1(squareLength)) || (Trapezoidobj.setBase2(trapezoidTop)) || (Trapezoidobj.setHeight(squareHeight)));
		}
		cout << "Area: " << Trapezoidobj.calcArea() << endl;
	}
	return 0;
}
