/*
Curso:
Learn C (Codecademy)

Objetivo:
Desreferenciar ponteiros.

Notes:
- Operador de desreferenciação (*) 
^ Dereference Operator
- desreferenciar = mudar o valor que está guardado no endereço de memória
- sintaxe: *pointerName;
*/

#include<stdio.h>

int main() {
  
  int k = 2000;
  int* ptr = &k;
  
  printf("%i\n", *ptr);

  *ptr = 961;

  printf("%i\n", k); // variável k mudou pois mudei o ponteiro
}