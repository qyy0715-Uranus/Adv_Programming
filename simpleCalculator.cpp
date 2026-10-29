#include <iostream>

double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

int main() {
    const double a = 8.0;
    const double b = 2.0;

    std::cout << "sum(8, 2) = " << sum(a, b) << '\n';
    std::cout << "subtract(8, 2) = " << subtract(a, b) << '\n';
    return 0;
}
