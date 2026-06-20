/*
Curso:
Learn C (Codecademy)

Objetivo:
- Atribuir novo valor a uma variável

Notes:
- é como em python
- não precisa repetir o tipo da variável
*/

#include <stdio.h>

int main() {

  char bookVersionReview = 'A';
  char movieVersionReview = 'B';
  double ticketPrice = 10.25;
  double bookPrice = 19.99;

  // novo score
  movieVersionReview = 'C';
  // novo preço
  ticketPrice = bookPrice;

  // No need to change below here
  printf("The book version has a review score of %c and costs $%.2f\n",
         bookVersionReview, bookPrice);
  printf("The movie version has a review score of %c and costs $%.2f\n",
         movieVersionReview, ticketPrice);
}