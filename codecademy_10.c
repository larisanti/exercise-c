/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar atribuição de constantes

Notes:
- sintaxe:
const + type + NAME + = + value + ;
- diferente de python, no C a é protegida pelo compilador
^ é como se não existissem constantes reais em python,
pois o sistema permite mudar elas sem gerar erro
*/

#include <stdio.h>

int main() {

  // Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the
  // multiplicaiton later.
  const double SPEEDOFLIGHT = 1.86;
  int timeTraveledInSeconds = 30;

  // No need to change below here
  printf("Light would travel %.2f miles in %d seconds\n",
         SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);
}