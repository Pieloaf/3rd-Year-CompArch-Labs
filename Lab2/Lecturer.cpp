#include "pch.h"

void Lecturer::set_course(string name)
{
	courseName = name;
}

void Lecturer::show_details()
{
	Person::display();
	cout << "\nCourse Name: " << courseName;
}

void Lecturer::set_details(string name, string address, string course)
{
	Person::set_details(name, address);
	courseName = course;
}


Lecturer::Lecturer()
{
	courseName = "uninitialised";
}

Lecturer::~Lecturer()
{

}