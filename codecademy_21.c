/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar if statement em C.

Notes:
- condição precisa estar entre ()
- 0 e 1, não true e false
*/

#include <stdio.h>

int main() {

  int grade1 = 90;
  int grade2 = 59;

  if (grade1 > 60) {
    printf("pass\n");
  }

  if (grade2 < 60) {
    printf("fail\n");
  }
}