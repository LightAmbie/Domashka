#include "Circle.h"


double Circle::area()
{
	return M_PI*radius*radius;
}

double Circle::circumference()
{
	return 2 * M_PI * radius;
}

void Circle::print()
{
	std::cout << "Circle(" << radius << ")\n";
}


