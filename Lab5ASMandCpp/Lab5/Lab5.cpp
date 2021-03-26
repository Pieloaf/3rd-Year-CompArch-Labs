// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
extern "C" {int sample(int, int); }
int main()
{
    int a, b, test;
    a = 5;
    b = 10;
    test = sample(a, b);
    std::cout << test;
    return 0;
}


