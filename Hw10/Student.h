#ifndef STUDENT_H_
#define STUDENT_H_
#include "Human.h"
class Student : public Human
{
public:

	bool onLesson;

	Student() : Human() {};

	Student(string surname, string name, string midname, int age, bool onLesson) :
		Human(surname, name, midname, age), onLesson(onLesson) {};

	~Student();

	void print() override;
};
#endif

