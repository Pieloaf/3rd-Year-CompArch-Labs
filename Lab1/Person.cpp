#include "Person.h"
#include "pch.h"

void Person::print_details(void) {
	cout << "\nName is: " << name;
	cout << "\nAddress is " << address;
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