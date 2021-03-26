#include "pch.h"

void Student::print_id(void) {
	cout << "\nID: " << id;
}

void Student::set_id(int newId) {
	id = newId;
}

void Student::display(void)
{
	Person::display();
	Student::print_id();
}

void Student::set_details(string name, string address, int newId)
{
	Person::set_details(name, address);
	id = newId;
}

Student::Student()
{
	id = 0;
}

Student::~Student()
{

}