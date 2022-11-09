/**
 * @autor David Rostro Buide
 * @fecha Nov 7th 2022
 * @Nombre del programa: P34279 add one second
 * Resumen: El programa consiste en leer una hora por teclado y añadirle un segundo y mostrarla por pantalla.
 * alu0101544359@ull.edu.es
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	int horas, minutos, segundos;
  std::cin >> horas >> minutos >> segundos;
	++segundos;
	if ( segundos == 60 ) {
		++minutos;
		segundos = 0;
	}
	if ( minutos == 60 ) {
		++horas;
		minutos = 0;
	}
	if ( horas == 24 ) { 
    horas = 0;
  }
	std::cout << setfill ( '0' ) << setw ( 2 ) << horas << ':' << setfill ( '0' ) << setw ( 2 ) << minutos << ':' << setfill ( '0' ) << setw ( 2 ) << segundos << std::endl;
  return 0;
}
