#ifndef APARTMENT_H_
#define APARTMENT_H_
#include "Property.h"

class Apartment : virtual public Property
{
public:

	Apartment(double worth) : Property(worth) {};

	double tax() override;
};
#endif