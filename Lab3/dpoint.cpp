#include "dpoint.h"

dpoint::dpoint() {
	x = 0;
	y = 0;
	z = 0;
}

dpoint::dpoint(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

double dpoint::get_z() {
	return z;
}

void dpoint::set_z(double z) {
	this->z = z;
}