// This program will take the user's inputs to determine the amount of money saved and compounded for retirement. 
// Anthony Melnik
#include <iostream>
#include <iomanip>
#include "compoundCalc.h"
using namespace std;

int main() {

	double presentValue,
		   interestRate;
	int numOfYears;

	cout << fixed << showpoint << setprecision(2); //This ensures two decimal points

	cout << "Enter your principal: ";
	cin >> presentValue;

	cout << "\nEnter your interest rate: ";
	cin >> interestRate;

	cout << "\nEnter the number of years invested: ";
	cin >> numOfYears;

	cout << "\nYour retirement savings will be $" << compoundCalc(presentValue, interestRate, numOfYears) << endl;

	return 0;
}