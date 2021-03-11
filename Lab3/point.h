#include <iostream>

#ifndef POINT_INCLUDED
#define POINT_INCLUDED

class point {
public:
	point();
	point(double x, double y);
	void set_x(double x);
	void set_y(double y);
	double get_x() const;
	double get_y() const;

	void operator += (point&);

protected:
	double x;
	double y;
};

bool operator == (point&, point&);

std::ostream& operator << (std::ostream& out, const point& point);

#endif