/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar a criação de ponteiros.

Notes:
- steps:
  1. define a variável (int x = 5)
  2. definir o ponteiro com o mesmo tipo da variável (int* ptr)
  3. atribuir o endereço da variável ao ponteiro (ptr = &x)
*/

#include<stdio.h>

int main() {
  
  double g = 9.81; // 1
  double pi = 3.14;
  
  double* dblPtr = &g; // 2 e 3
  printf("%p\n", dblPtr);
  dblPtr = &pi;
}
