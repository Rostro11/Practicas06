/**
 * @autor David Rostro Buide
 * @fecha Nov 1st 2022
 * @Nombre del programa: P52847 máximo de tres números diferentes.
 * El programa consiste en leer tres numeros introducidos por teclado y mostrarla por pantalla el mayor de estos.
 * alu0101544359@ull.edu.es
 */
 #include <iostream>

  int main() {
  int numero1, numero2, numero3;
  std::cin >> numero1 >> numero2 >> numero3;
  if ( ( numero1 > numero2 ) && ( numero1 > numero3 ) ) { 
    std::cout << numero1 << std::endl;
  }
  else if ( ( numero2 > numero1 ) && ( numero2 > numero3 ) ) { 
    std::cout << numero2 << std::endl;
  }
  else if ( ( numero3 > numero2 ) && ( numero3 > numero1 ) ) { 
    std::cout << numero3 << std::endl;
  }
  else if ( ( numero1 == numero2 ) && ( numero1 < numero3 ) ) { 
    std::cout << numero3 << std::endl;
  }
  else if ( ( numero1 == numero3 ) && ( numero1 < numero2 ) ) {
    std::cout << numero2 << std::endl;
  }
  else if ( ( numero2 == numero3  ) && ( numero2 < numero1 ) ) {
    std::cout << numero1 << std::endl;
  }
  else if ( ( numero1 == numero2 ) && ( numero1 > numero3 ) ) { 
    std::cout << numero1 << std::endl;
  }
  else if ( ( numero1 == numero3 ) && ( numero1 > numero2 ) ) { 
    std::cout << numero1 << std::endl;
  }
  else if ( ( numero2 == numero3  ) && ( numero2 > numero1 ) ) { 
    std::cout << numero2 << std::endl;
  }
  else {
    std::cout << numero1 << std::endl;
  }
  return 0;
}
