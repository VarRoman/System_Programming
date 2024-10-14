#include <iostream>
#include "calculator.h"

int main()
{
    Calculator calc;
    double a = 5.0, b = 3.0, c = 2.0;

    std::cout << "Add: " << a << " + " << b << " = " << calc.Add(a, b) << std::endl;
    std::cout << "Sub: " << a << " - " << b << " = " << calc.Sub(a, b) << std::endl;
    std::cout << "Mul: " << a << " * " << b << " = " << calc.Mul(a, b) << std::endl;
    std::cout << "Div: " << a << " / " << b << " = " << calc.Div(a, b) << std::endl;
    std::cout << "Add + Sub: " << a << " + " << b << " - " << c << " = " << calc.Add_Plus_Sub(a, b, c) << std::endl;

    return 0;
}
