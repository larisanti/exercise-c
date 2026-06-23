/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar if else statement.

Notes:
- if else: antes do if e depois de else
- posso usar mais de um else if
- pode ser feito em uma única linha: ternary operators
*/

#include <stdio.h>

int main() {

  double ph = 7;

  if (ph > 7) {
    printf("basic\n");
  } else if (ph < 7) {
    printf("acidic\n");
  } else {
    printf("neutral\n");
  }
}