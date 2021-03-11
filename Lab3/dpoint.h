#include "point.h"

#ifndef DPOINT_EXISTS
#define DPOINT_EXISTS

class dpoint:public point {
public:
	dpoint();
	dpoint(double x, double y, double z);
	double get_z();
	void set_z(double z);

private:
	double z;
};

#endif