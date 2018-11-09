#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
    Calculator();

    void firstNumEntered(int);
    void secondNumEntered(int);
    void additionMode();
    void subtractionMode();
    int calculate();
    void clear();

private:
    int firstNumber, secondNumber;
    bool addition;
    bool subtraction;
    int result;

};

#endif // CALCULATOR_H
