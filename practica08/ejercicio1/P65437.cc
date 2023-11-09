/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * 
 *
 * @file  P65437
 * @author Daniel Rodríguez Duarte
 * @date Nov 9 2023
 * Este programa intercambia el valor de los parametros
 */
#include <iostream>

void swap2(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}
int main() {
 int knumero1{0}, knumero2{0};
 while(std::cin >> knumero1 >> knumero2){
 swap2(knumero1, knumero2);
 std::cout << knumero1 << " " << knumero2 << std::endl;
 }
}

