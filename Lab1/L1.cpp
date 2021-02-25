#include <iostream>

using namespace std;

// This program converts a provided double value in degrees celsius to fahrenheit

double convert_to_fahrenheit(double celsius);

int main() {

	double celsius;
	
	while (true) {
		cout << "Input in celsius > ";
		cin >> celsius;
		cout << celsius << " C is equal to " << convert_to_fahrenheit(celsius) << " F\n";
	}
	return 0;
}

double convert_to_fahrenheit(double celsius) {
	// Pre: celsius must be above -273.18 (absolute zero) and can't cause an output above the limit of a double
	// Post: returns -1 in case of error (invalid celsius reading) and displays an error message
	
	double fahrenheit;
	const double ABSOLUTE_ZERO = -273.18;

	if (celsius < ABSOLUTE_ZERO) {
		cout << "ERROR - Value must be above absolute zero!\n";
		return -1;
	}

	fahrenheit = (celsius * (9.0/5.0)) + 32.0;

	return fahrenheit;
}