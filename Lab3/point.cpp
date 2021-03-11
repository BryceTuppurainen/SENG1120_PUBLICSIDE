#include "point.h"
#include <iostream>

point::point() {
	x = 0;
	y = 0;
}

point::point(double x, double y) {
	x = x;
	y = y;
}

void point::set_x(double x) {
	this->x = x;
}

void point::set_y(double y) {
	this->y = y;
}

double point::get_x() const {
	return x;
}

double point::get_y() const {
	return y;
}

std::ostream& operator << (std::ostream& out, const point& point) {
	out << "(" << point.get_x() << "," << point.get_y() << ")";
	return out;
}


bool operator == (point& pointOne, point& pointTwo) {
	return ((pointOne.get_x() == pointTwo.get_x()) && (pointOne.get_y() == pointTwo.get_y()));
}

void point::operator += (point& pointToAdd) {
	this->x += pointToAdd.get_x();
	this->y += pointToAdd.get_y();
}