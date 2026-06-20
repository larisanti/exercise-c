/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar formatação de printf()

Notes:
- %d ou %i = int
- %f = float ou double
- %c = char
- \n = new line
- \r = carriage return -> move o cursour para o inicio da linha
- \t = tab
*/

#include <stdio.h>

int main() {

  int ageLearnedToRide = 5;

  printf("I was %d years old when I learned to ride a bike.\n",
         ageLearnedToRide);
  printf("I hope I still remember how to ride.");
}