/**
 * @autor David Rostro Buide
 * @fecha Nov 1st 2022
 * @Nombre del programa: P97156 Numbers in an interval.
 * consiste en leer dos números introducidos por teclado y escribir los numeros que hay entre estos, el primer numero tiene que ser menor que el segundo.
 * alu0101544359@ull.edu.es
 */

#include <iostream>
using namespace std;

int main () {
  int numero1, numero2;
  std::cin >> numero1 >> numero2;
  for ( int i = numero1 ; i < numero2 ; ++i ) { 
    std::cout << i << ',';
  }
  if ( numero2 >= numero1 ) {
    std::cout << numero2;
  }
  std::cout << endl;
  return 0;
}
 
