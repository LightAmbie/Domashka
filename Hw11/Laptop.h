#ifndef LAPTOP_H_
#define LAPTOP_H_
#include "Screen.h"
#include "Keyboard.h"
class Laptop : virtual public Screen, virtual public Keyboard
{
	void getPictures() override {};
	bool spacebarIsPressed() override {};
};
#endif

