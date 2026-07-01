/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar modificação de elementos no array.

Notes:
- sintaxe como em python
- não existe índice negativo em C
- se usar valor negativo: acessa pedaço aleatório na memória
- não apresenta index error se modificar o tamanho do array
*/

#include <stdio.h>

int main() {

  int evens[] = {2, 4, 6, 8, 10, 12};
  int odds[] = {1, 4, 5, 7, 10, 11};

  printf("%i\n", evens[5]); // Checkpoint 1. Fix this error.

  // Code for checkpoint 2 goes here.
  printf("%i\n", evens[2]);

  // Code for checkpoint 3 goes here.
  odds[1] = 3;
  odds[4] = 9;
}