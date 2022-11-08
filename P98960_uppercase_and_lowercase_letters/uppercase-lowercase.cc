/**
 * @autor David Rostro Buide
 * @fecha Nov 1st 2022
 * @Nombre del programa: P98960 uppercase and lowercase letters.
 * El programa consiste en leer una letra en minuscula o mayuscula por teclado y mostrar su inversa por pantalla.
 * alu0101544359@ull.edu.es
 */
#include <iostream>

int main() {
  char letra;
  std::cin >> letra;
  int numero = int(char(letra));
  if (numero < 97) {
    std::cout << char(int( numero + 32 )) << std::endl;
  }
  if (numero >= 97) {
    std::cout << char(int( numero -32 )) << std::endl;
  }
  return 0;
}
