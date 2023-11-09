#include <iostream>
#include <cstdlib>
#include <ctime>

// Función para generar un número aleatorio en el intervalo [n, m]
double generarNumeroAleatorio(int n, int m) {
    return n + (double)std::rand() / RAND_MAX * (m - n);
}

int main() {
    // Semilla para la generación de números aleatorios
    std::srand(std::time(0));

    int n, m;
    std::cout << "Ingrese dos números naturales n y m (n < m): ";
    std::cin >> n >> m;

    if (n >= m) {
        std::cout << "Error: n debe ser menor que m." << std::endl;
        return 1;
    }

    double numeroAleatorio = generarNumeroAleatorio(n, m);

    std::cout << "El número aleatorio generado en el intervalo [" << n << ", " << m << "] es: " << numeroAleatorio << std::endl;

    return 0;
}

