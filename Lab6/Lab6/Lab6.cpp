#include "pch.h"

int main()
{
    parallel_to_serial test(15);
    test.display();
    test += 1;
    test.display();
    return 0;
}