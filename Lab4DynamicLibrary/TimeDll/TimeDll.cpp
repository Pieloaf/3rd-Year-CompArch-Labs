// TimeDll.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"

void timeFuncs::currentTime()
{
    time_t timenow = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << ctime(&timenow) << std::endl;
};