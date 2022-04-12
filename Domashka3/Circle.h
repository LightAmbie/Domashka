#ifndef CIRCLE_H_
#define CIRCLE_H_

#define _USE_MATH_DEFINES
#include<cmath>
#include <iostream>

class Circle
{
public:
	double radius;
	
	Circle(double r) {
		this->radius = r;
	}

	double area();

	double circumference();

	void print();
};
#endif


