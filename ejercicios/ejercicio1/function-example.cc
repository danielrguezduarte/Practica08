#include <iostream>
#include <cmath>

double calcularFuncion(double x, double y, double z) {
    return (x * y) / sqrt(x + pow(y, 2)) - (pow(z, 3) / (x + y));
}

int main() {
    double x, y, z;

    std::cin >> x >> y >> z;

    double resultado = calcularFuncion(x, y, z);

    std::cout << resultado << std::endl;

    return 0;
}

