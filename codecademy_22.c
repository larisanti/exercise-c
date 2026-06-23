/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar if statement com operadores condicionais.

Notes:
! -> inverte o valor lógico
^ valores da condição precisa estar entre ()
*/

#include <stdio.h>

int main() {

  int a = 10;
  int b = -5;

  if (a > 0 || b > 0) {
    printf("Positive\n");
  }
  if (a > 0 && !(b > 0)) {
    printf("Positive\n");
  }
}