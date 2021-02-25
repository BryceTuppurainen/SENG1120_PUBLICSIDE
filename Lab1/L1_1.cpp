#include <iostream>
#include "../conversions.h"

// This program converts a provided double value in degrees celsius to fahrenheit

double convert_to_fahrenheit(double celsius);

int main() {

	double celsius;
	
	while (true) {
		std::cout << "Input in celsius > ";
		std::cin >> celsius;
		std::cout << celsius << " C is equal to " << conversions::Celsius_Fahrenheit(celsius) << " F\n";
	}
	return 0;
}