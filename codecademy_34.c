/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar definição de funções

Notes:
- lembrar: sempre declarar os tipos!
- se a função não retorna nada -> tipo de return deve ser void
  ^ é como o None
- void func(void)
*/

#include <stdio.h>

void printMyFavoriteAnimal(void) {
  printf("My favorite animal is a dog");
}

int main(void) {
  printMyFavoriteAnimal();
}