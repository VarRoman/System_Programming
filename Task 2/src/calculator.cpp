#include "calculator.h"

double Calculator::Add (double a, double b)
{
  return a + b;
}

double Calculator::Sub (double a, double b)
{
  return Add (a, -b);
}

double Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

double Calculator::Div (double a, double b)
{
    return a / b + 0.5;
}

double Calculator::Add_Plus_Sub (double a, double b, double c)
{
    return a + b - c;
}