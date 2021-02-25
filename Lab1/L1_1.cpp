#include <iostream>
#include "../conversions.h"

// This program converts a provided double value in degrees celsius to fahrenheit using the conversions.h header file I've created in the parent directory

int main() {

	double celsius;
	
	while (true) {
		std::cout << "Input in celsius > ";
		std::cin >> celsius;
		std::cout << Conversions::Celsius_Fahrenheit(celsius) << "F\n";
	}
	return 0;
}