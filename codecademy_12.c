/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar conversão de tipos (casting) -> continuação do anterior

Notes:
- Computadores não guardam letras,
^ guardam o código numérico da tabela ASCII.
- a = 97
- A = 65
*/

#include <stdio.h>

int main() {

  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  targetChar = (char)sourceInt;
  targetChar = sourceDouble;

  printf("source int %d, source double, %.2f, target %c\n", sourceInt,
         sourceDouble, targetChar);
}