/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar a diferenciação entre float e double

Notes:
- float -> 32 bits / 6 decimais
- double -> 64 bits / 15 decimais
- ambos são arredondados mesmo que minimamente
^ float perde mais precisão
*/

#include <stdio.h>

int main() {

  float numOfLoops = 10;

  float a = 0.1f;
  float b = 0;
  double x = 0.1;
  double y = 0;

  printf("At the start, our target float b is:%f\n", b);
  printf("At the start, our target double y is:%f\n", y);
}