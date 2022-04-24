#ifndef BOSS_H_
#define BOSS_H_
#include "Human.h"
class Boss : public Human
{
public:

	int numberOfWorkers;

	Boss() : Human() {};

	Boss(string surname, string name, string midname, int age, int numberOfWorkers) :
		Human(surname, name, midname, age), numberOfWorkers(numberOfWorkers) {};

	~Boss();

	void print() override;
};
#endif

