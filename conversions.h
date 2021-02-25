#include <iostream>

// A series of double conversions that can be used within a 'Conversions' namespace

namespace Conversions {
	double Celsius_Fahrenheit(double celsius) {
		double output = (celsius * (9.0/5.0)) + 32.0;
		if (celsius < -273.18)
			std::cout << "WARNING - The temperature is below absolute zero!\n";
		return output;
	}


	double Fahrenheit_Celsius(double fahrenheit) {
		double output = (fahrenheit - 32.0) / (9.0/5.0);
		if (output < -273.18)
			std::cout << "WARNING - The temperature  is below absolute zero!\n";
		return output;
	}
}