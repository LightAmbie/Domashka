#ifndef HUMAN_H_
#define HUMAN_H_

#include <string>
using namespace std;

class Human
{
public:
	string surname;
	string name;
	string midname;
	int age;

	Human();

	Human(string surname, string name, string midname, int age) :
		surname(surname), name(name), midname(midname), age(age) {};

	virtual void print();

	~Human() {};
};
#endif

