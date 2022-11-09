/**
 * @autor David Rostro Buide
 * @fecha Nov 1st 2022
 * @Nombre del programa: P59539 harmonic numbers.
 * @Resumen: El programa consiste en leer un número introducido por teclado y escribir el número harmónico de dicho número por pantalla.
 * alu0101544359@ull.edu.es
 */

#include <iostream>
#include <iomanip>

int main() {
  int numero;
  std::cin >> numero;
  double numero_harmonico = 0.0;
  for (int i = 1; i <= numero; ++i) {
    numero_harmonico = numero_harmonico + 1.0 / i;
  }
  std::cout << std::fixed << std::setprecision(4) << numero_harmonico << std::endl;
  return 0;
}
