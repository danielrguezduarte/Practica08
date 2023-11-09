#include <iostream>
#include <cmath>

bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {
    return std::abs(number1 - number2) < epsilon;
}

int main() {
    double a = 0.333;
    double b = 1.0 / 3;

    if (AreEqual(a, b)) {
        std::cout << "Los números son aproximadamente iguales." << std::endl;
    } else {
        std::cout << "Los números no son iguales." << std::endl;
    }

    return 0;
}

