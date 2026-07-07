/*
Curso:
Learn C (Codecademy)

Objetivo:
Compreender as library functions em C

Notes:
- Essas libs em C funcionam como os módulos importados em python:
    #include <biblioteca.h> -> similar ao import
- lista das libs:
https://www.ibm.com/docs/en/i/7.3.0?topic=extensions-standard-c-library-functions-table-by-name
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  int randomNumber = rand() % 20 + 1;
  printf("%d\n", randomNumber);
}