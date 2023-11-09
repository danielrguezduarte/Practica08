#include <iostream>
#include <cmath>

bool IsAValidTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double Area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    std::cout << "Ingrese las longitudes de los lados del triángulo (a b c): ";
    std::cin >> a >> b >> c;

    if (IsAValidTriangle(a, b, c)) {
        double area = Area(a, b, c);
        std::cout << "El área del triángulo es: " << area << std::endl;
    } else {
        std::cout << "No es un triángulo válido." << std::endl;
    }

    return 0;
}

