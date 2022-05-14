#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

class Complex {
private:
	double re, im;

public:

	Complex(const Complex &obj){}

	Complex(double re = 0, double im= 0) : re(re), im(im) {};

	~Complex() {};

	double abs();

	Complex operator+(Complex& other);

	Complex operator-(Complex& other);

	Complex operator*(Complex& other);

	Complex operator/(Complex& other);


	friend std::ostream& operator<< (std::ostream& out, const Complex& complex);
};

#endif