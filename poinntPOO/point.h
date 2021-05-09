#pragma once
#include <iostream>

class point
{
public:
	point();
	point(std::string, double a =0, double b=0, double c =0);
	void print();
	void translat(double t); 
	double distance(point);
	~point();

private:
	double x, y, z;
	std::string name;
};
