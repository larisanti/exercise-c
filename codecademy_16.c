/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar módulo em operações matemáticas

Notes:
Igual python, exceto com nros negativos:
- python: -5 % 2 = 1
- C: -5 % 2 = -1
*/

#include <stdio.h>

int main() {

  int endingDayOfWeek = 0;
  int daysThatPass = 13;
  int daysInWeek = 7;

  endingDayOfWeek = daysThatPass % daysInWeek;

  printf("You started on the 1st (0) day of the week, went %d days from this, "
         "so it is now the %d day of the week\n",
         daysThatPass, endingDayOfWeek);
}