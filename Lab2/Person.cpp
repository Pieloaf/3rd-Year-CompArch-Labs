#include "pch.h"

void Person::display(void) {
	cout << "\nName: " << name;
	cout << "\nAddress: " << address;
}

void Person::set_details(string n, string a) {
	name = n;
	address = a;
}

Person::Person()
{
	name = "uninitialised";
	address = "uninitialised";
}

Person::~Person()
{

}