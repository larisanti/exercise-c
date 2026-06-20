/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar ordem de operações

Notes:
- forçar o que vai rodar primeiro -> ()
- segue a regra da matemática:
    1. *, /, %
    2. +, -
- atribuição é o último a ser resolvido
*/

#include <stdio.h>

int main() {

  int x;
  int y;

  x = (2 + 3) * 5;
  y = 2 / (4 + 6);

  printf("x is: %d\n", x);
  printf("y is: %d\n", y);
}