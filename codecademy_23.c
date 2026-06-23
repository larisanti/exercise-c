/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar if statement com else clause.

Notes:
- "separar" if de else em chaves/blocos diferentes
- cada bloco é executado individualmente
*/

#include <stdio.h>

int main() {

  int grade1 = 59;
  int grade2 = 90;

  if (grade1 > 60) {
    printf("pass\n");
  } else {
    printf("fail\n");
  }

  if (grade2 > 60) {
    printf("pass\n");
  } else {
    printf("fail\n");
  }
}