#ifndef VECTOR_H_
#define VECTOR_H_

#define _USE_MATH_DEFINES
#include<cmath>
#include <iostream>

class Vector3
{
public:
	double x,y,z;

	Vector3(double x, double y, double z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	double abs();
	
	Vector3 sum(Vector3 v2);

	Vector3 normalized();

	void scale(double k);

	void print();
};
#endif


