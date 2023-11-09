/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * 
 *
 * @file  P65437
 * @author Daniel Rodríguez Duarte
 * @date Nov 9 2023
 * Este programa lo que hace es indica si el número natural n es un número palindrómico o no.
 */
#include <algorithm>
#include <iostream>

bool is_palindromic(int n) {
  int numero{0}, girar{0};
  numero = n;
  while (numero != 0) {
    girar = girar * 10 + numero % 10;
    numero /= 10;
  }
  return n == girar;
}

int main() {
  int numero;
  while (std::cin >> numero) {
    std::cout << "is_palindromic(" << numero << ") → ";
    if (is_palindromic(numero) == true) {
      std::cout << "true" << std::endl;
    } else {
      std::cout << "false" << std::endl;
    }
  }
}

