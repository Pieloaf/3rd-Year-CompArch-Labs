// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

void printLang(PolitePerson*);

int main()
{
	PolitePerson* obj;

	int input;
	while (true) {
		cout << "\nChoose a language:\n1. Irish\n2. French\n3. Spanish\n0. Quit\n";
		cin >> input;
		if (input == 1) {
			obj = new Irish;
			printLang(obj);
		}
		else if (input == 2) {
			obj = new French;
			printLang(obj);
		}
		else if (input == 3)
		{
			obj = new Spanish;
			printLang(obj);
		}
		else if (input == 0)
		{
			return 0;
		}
		else {
			cout << "\nPlease Use a Valid Input";
		}
	}
}

void printLang(PolitePerson* obj) {
	obj->farewell();
	obj->greeting();
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
