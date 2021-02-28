#include <iostream>

double Celsius_Fahrenheit(double celsius);

int main() {

	double celsius;
	
	while (true) {
		std::cout << "Input in celsius > ";
		std::cin >> celsius;
		std::cout << Celsius_Fahrenheit(celsius) << "F\n";
	}
	return 0;
}

double Celsius_Fahrenheit(double celsius) {
	double output = (celsius * (9.0/5.0)) + 32.0;
	if (celsius < -273.18)
		std::cout << "WARNING - The temperature is below absolute zero!\n";
	return output;
}
