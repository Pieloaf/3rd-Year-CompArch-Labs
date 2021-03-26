// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

int main()
{
    Person* ptr;
    Student* sPtr;
    Lecturer* lPtr;

    ptr = new Person;
    sPtr = new Student;
    lPtr = new Lecturer;
    
    cout << "\n\nPerson";
    ptr->display();
    
    cout << "\n\nStudent";
    sPtr->set_details("test", "test", 18319993);
    sPtr->display();

    cout << "\n\nLecturer";
    lPtr->set_details("Pierce", "Dublin", "DT021");
    lPtr->display();
    cout << "\n";
    lPtr->show_details();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
