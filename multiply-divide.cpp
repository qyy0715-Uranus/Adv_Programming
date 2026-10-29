
#include <iostream>
#include <limits>

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b != 0.0)
    {
        return a / b;
    }
    else
    {
        std::cout << "Error: Division by zero!" << std::endl;
        return std::numeric_limits<double>::quiet_NaN();
    }
}

int main()
{
    std::cout << "Simple Calculator" << std::endl;
    return 0;
}
