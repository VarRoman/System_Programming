#include "calculator.h"

int Calculator::Add (double a, double b)
{
  return a + b;
}

int Calculator::Sub (double a, double b)
{
  return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

// Extra method for division
int Calculator::Div (double a, double b)
{
    return a / b + 0.5;
}

// Extra method for 3 variables
int Calculator::Add_Plus_Sub (double a, double b, double c)
{
    return a + b - c;
}