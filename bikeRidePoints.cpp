// This program will take the user's inputs to determine how many points they will get rewarded for taking bike rides. 
// Anthony Melnik
#include <iostream>
using namespace std;

int main() {

	int numBikeRides;

	cout << "Enter the number of bike rides taken: ";
	cin >> numBikeRides;

	//While loop to make sure an invalid number is not entered
	while (numBikeRides < 0) {
		cout << "The number you entered is invalid\n";
		cout << "Enter the number of bike rides taken: ";
		cin >> numBikeRides;
	}

	//If/else chain to determine points to reward
	if (numBikeRides == 0) {
		cout << "You earned 0 points this semester" << endl;
	}
	else if (numBikeRides == 1) {
		cout << "You earned 3 points this semester" << endl;
	}
	else if (numBikeRides == 2) {
		cout << "You earned 10 points this semester" << endl;
	}
	else if (numBikeRides == 3) {
		cout << "You earned 15 points this semester" << endl;
	}
	else if (numBikeRides == 4) {
		cout << "You earned 30 points this semester" << endl;
	}
	else if (numBikeRides >= 5) {
		cout << "You earned 50 points this semester" << endl;
	}

	return 0;
}