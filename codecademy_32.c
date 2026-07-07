/*
Curso:
Learn C (Codecademy)

Objetivo:
Chamar funções em C com argumentos variados

Notes:
- chamar funções com print e variável int é como em python:
  printf("texto %d", intVariavel)
- número e tipo de argumentos podem variar
  ^~~~~ apenas na função printf
*/

#include <stdio.h>

int main(void) {
  int num1 = -5;
  int num2 = 42;

  printf("printing numbers %d %d", num1, num2);
}