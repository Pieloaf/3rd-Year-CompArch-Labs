// MathFuncsDll.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "MathFuncsDll.h"
#include <stdexcept>

using namespace std;


// This is an example of an exported variable
MATHFUNCSDLL_API int nMathFuncsDll=0;

// This is an example of an exported function.
MATHFUNCSDLL_API int fnMathFuncsDll(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CMathFuncsDll::CMathFuncsDll()
{
    return;
}

namespace MathFuncs
{
    double MyMathFuncs::Add(double a, double b)
    {
        return a + b;
    }

    double MyMathFuncs::Subtract(double a, double b)
    {
        return a - b;
    }

    double MyMathFuncs::Multiply(double a, double b)
    {
        return a * b;
    }

    double MyMathFuncs::Divide(double a, double b)
    {
        if (b == 0)
        {
            throw new invalid_argument("b cannot be zero!");
        }

        return a / b;
    }
}
