#include <iostream>
#include <string>

extern "C" {char* sort(char*,int); }
int main()
{
	//initialising variables
	int len;
	std::string strToPass;

	//reading in string to be sort
	std::cout << "String: ";
	std::cin >> strToPass;
	
	//passing string to sort function and printing the output
	len = strlen(&strToPass[0]);
	sort(&strToPass[0], len);
	std::cout << strToPass;
}

