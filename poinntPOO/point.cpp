
#include "point.h"
#include <iostream>

point::point()
{
	name = "O";
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

 point::point(std::string n, double a , double b , double c ) 
 {
	 name = n; x = a; y = b; z = c;
 }

 void point::print()
{
	std::cout << "" << name << "( " << x << ", " << y << ", " << z << " )" << std::endl;
}

 void point::translat(double t)
{
	x += t; y += t; z += t; // the point moves
}

 double point::distance(point p)
{
	return sqrt(pow((x - p.x), 2) + pow((y - p.y), 2) + pow((z - p.z), 2)); // destance between two points
}

point::~point()
{
}