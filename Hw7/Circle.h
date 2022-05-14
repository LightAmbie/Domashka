#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>
using namespace std;

class Circle {
private:
	double r;
public:
	Circle(const Circle &obj){}

	Circle(double r = 0) : r(r) {};

	~Circle() {};

	double circumference();

	double area();

	friend std::ostream& operator<<(std::ostream& out, const Circle& c);
};

#endif 
