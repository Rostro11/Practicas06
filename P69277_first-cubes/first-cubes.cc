/**
 * @autor David Rostro Buide
 * @fecha Nov 1st 2022
 * @Nombre del programa: P69277 First Cubes.
 * Resumen: Write a program that reads a number n, and prints 03,13,…,(n−1)3,n3.
 * URL: https://jutge.org/problems/P69277_en
 * alu0101544359@ull.edu.es
 */

#include <iostream>

int main() {
	int numero_cubos;
  std::cin >> numero_cubos;
  for (int i = 0; i < numero_cubos; ++i) { 
    std::cout << i * i * i << ',';
  }
  std::cout << numero_cubos*numero_cubos*numero_cubos << std::endl;
  return 0;
}
