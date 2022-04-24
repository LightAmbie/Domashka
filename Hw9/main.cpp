﻿#include "Property.h"
#include "Apartment.h"
#include "Car.h"
#include "CountryHouse.h"
int main()
{
    Property* p[7];

	for (int i = 1; i < 8; i++)
	{
		if (i<4)
		{
			p[i-1] = new Apartment(1000 * i);
		}
		else if (i<7)
		{
			p[i - 1] = new Car(200 * i);
		}

		else
		{
			p[i - 1] = new CountryHouse(500 * i);
		}
	}
	for (int i = 0; i < 7; i++)
	{
		cout << "worth: " << p[i]->worth << endl;
		cout << "tax: " << p[i]->tax() << endl;
		cout << "==============" << endl;
	}
}


