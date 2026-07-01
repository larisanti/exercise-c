/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar loops em arrays.

Notes:
- principal benefício do array:
trabalhar com grande volume de dados de forma organizada
sem precisar nomear variável individual para cada valor
- loops automatizam esse processamento
- i++ -> soma 1 a i no final de cada repetição
*/

#include <stdio.h>

int main() {
  int arr[] = {3,  4,  5,  6,  7,  8,  9,  10, 11, 12,
               13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];

  // Checkpoint 1.
  for (int i = 0; i < 20; i++) {
    printf("%i\n", arr[i]);
  }

  // Checkpoint 2.
  for (int x = 0; x < 100; x++) {
    arr2[x] = x + 4;
  }
}