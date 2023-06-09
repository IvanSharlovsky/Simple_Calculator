// Simple_Calculatorl.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application\n\n";
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    Calculator c;
    while (1)
    {
        cin >> x >> oper >> y;

        if (oper == '/' && y == 0)
        {
            cout << "Attempted to divide by zero!\n";
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }

        cout << "Result of " << x << oper << y << " is: " << result << endl;
    }

    return 0;
}
