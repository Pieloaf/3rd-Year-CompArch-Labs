#pragma once
#include "Person.h"
class Lecturer :
    public Person
{
public:
    void set_course(string);
    void show_details();
    void set_details(string, string, string);

    Lecturer();
    ~Lecturer();
private:
    string courseName;
};

