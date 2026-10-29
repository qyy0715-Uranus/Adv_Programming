#include <iostream>
#include <limits>

double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

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

int main() {
    const double a = 8.0;
    const double b = 2.0;

    std::cout << "sum(8, 2) = " << sum(a, b) << '\n';
    std::cout << "subtract(8, 2) = " << subtract(a, b) << '\n';
    std::cout << "multiply(8, 2) = " << multiply(a, b) << '\n';
    std::cout << "divide(8, 2) = " << divide(a, b) << '\n';
    return 0;
}
