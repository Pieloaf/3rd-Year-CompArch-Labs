#pragma once
#include "Person.h"

class Student : public Person
{
public:
	void set_id(int);
	void print_id(void);
private:
	int id;
};
