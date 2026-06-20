/*
Curso:
Learn C (Codecademy)

Objetivo:
Continuação da revisão -> projeto Grocery Store
*/

#include <stdio.h>

int main() {
  int appleQuantity;
  double applePrice = 1.49;
  double appleReview;
  int appleReviewDisplay;
  const char appleLocation = 'F';

  appleQuantity = 23;
  appleReview = 82.5;
  appleReviewDisplay = appleReview;

  printf("An apple costs: $%.2f, there are %d in inventory found in section: "
         "%c and your customers gave it an average review of %d%%!",
         applePrice, appleQuantity, appleLocation, appleReviewDisplay);
}