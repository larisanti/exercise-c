/*
Curso:
Learn C (Codecademy)

Objetivo:
Revisão -> projeto Grocery Store (part 2)
*/

#include <stdio.h>

int main() {
  int appleQuantity;
  double applePrice = 1.49;
  double appleReview;
  int appleReviewDisplay;
  const char appleLocation = 'F';
  int dayOfWeek = 0;

  appleQuantity = 23;

  appleReview = 823.0 / 9;

  dayOfWeek += 3;

  appleReview = (823.0 + 52) / 10;
  appleReviewDisplay = appleReview;

  if (dayOfWeek % 7 == 3 || appleQuantity < 10) {
    printf("Sale on apples today, today only they are: $%.2f\n",
           applePrice * .9);
  }

  printf("An apple costs: $%.2f, there are %d in inventory found in section: "
         "%c and your customers gave it an average review of %d%%!\n",
         applePrice, appleQuantity, appleLocation, appleReviewDisplay);
}