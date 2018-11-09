#include "calculator.h"

Calculator::Calculator() : firstNumber(0), secondNumber(0), addition(0), subtraction(0), result(0)
{
}

void Calculator::firstNumEntered(int n)
{
    firstNumber = n;
}

void Calculator::secondNumEntered(int n)
{
    secondNumber = n;
}

void Calculator::additionMode()
{
    addition = true;
}

void Calculator::subtractionMode()
{
    subtraction = true;
}

int Calculator::calculate()
{
    if (addition)
        result = firstNumber + secondNumber;
    if (subtraction)
        result = firstNumber - secondNumber;

    return result;
}

void Calculator::clear()
{
    firstNumber = 0;
    secondNumber = 0;
    result = 0;
    addition = false;
    subtraction = false;
}
