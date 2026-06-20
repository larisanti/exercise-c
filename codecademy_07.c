/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar atribuição de valores de variáveis

Notes:
A sintaxe é diferente da do python:
tipo + nome + = + valor + ;
*/

#include <stdio.h>

int main() {
  // tipo + nome + = + valor + ;
  int numOfBooks = 3;
  char favLetter = 'L'; // sempre aspas simples
  char favDigit = '3';
  double costOfCandyBar = 0.85;

  printf("Number of books: %d\n", numOfBooks);
  printf("Your Favorite Letter is: %c\n", favLetter);
  printf("Your Favorite Digit is: %c\n", favDigit);
  printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);
}