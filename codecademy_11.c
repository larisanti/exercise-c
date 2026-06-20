/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar conversão de tipos (casting)

Notes:
- Conversão:
    - implícita: automática -> compilador (risco de perda de dados como java)
    - explícita: forçada -> (int)b
- decimal para int: trunca a parte decimal (despreza, 3.9 vira 3)
*/

#include <stdio.h>

int main() {

  double testScore = 95.7;
  int displayScore = 0;

  displayScore = (int)testScore;

  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);
}