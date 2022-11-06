// This is the compound calculator function. 
// Anthony Melnik
#include <cmath>
#include "compoundCalc.h"

double compoundCalc(double presentValue, double interestRate, int numOfYears) {
	
	double retirementSavings = presentValue * pow(1 + interestRate, numOfYears);

	return retirementSavings;
}