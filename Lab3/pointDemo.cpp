#include "point.h"
#include <iostream>
#include <cmath>

double length(point* pointOne, point* pointTwo) {
	return std::sqrt(std::pow((pointTwo->get_x()-pointOne->get_x()), 2) + std::pow((pointTwo->get_y()-pointOne->get_y()), 2));
}

int main() {
	int command = 4;
	point* livePointOne = new point();
	point* livePointTwo = new point();
	double x;
	double y;
	while (command != 0) {
		std::cout << "0 - Exit\n1 - Set the x coordinate for point one\n2 - Set the y coordinate for point one\n3 - Print the current point one\n4 - Set the x coordinate for point two\n5 - Set the y coordinate for point two\n6 - Print the current point two\n7 - Print the length between the two points\n8 - Check if the two points are equal\n9 - Add point two to point one\n$ ";
		std::cin >> command;
		switch (command) {
			case 1:
				std::cout << "What would you like to set x to? $ ";
				std::cin >> x;
				livePointOne->set_x(x);
				break;
			case 2:
				std::cout << "What would you like to set y to? $ ";
				std::cin >> y;
				livePointOne->set_y(y);
				break;
			case 3:
				std::cout << "Point one: " << *livePointOne << "\n";
				break;
			case 4:
				std::cout << "What would you like to set x to? $ ";
				std::cin >> x;
				livePointTwo->set_x(x);
				break;
			case 5:
				std::cout << "What would you like to set y to? $ ";
				std::cin >> y;
				livePointTwo->set_y(y);
				break;
			case 6:
				std::cout << "Point two: " << *livePointTwo << "\n";
				break;
			case 7:
				std::cout << "The length between the points is " << length(livePointOne, livePointTwo) << "\n";
				break;
			case 8:
				std::cout << *livePointOne << " = " << *livePointTwo << "\n";
				if (*livePointOne == *livePointTwo) {
					std::cout << "True\n";
				} else {
					std::cout << "False\n";
				}
				break;
			case 9:
				*livePointOne += *livePointTwo;
				break;
		}
	}
	delete livePointOne;
	delete livePointTwo;
	std::cout << "\nExit successful, no data should be leaked!\n\n";
}

