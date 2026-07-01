/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar arrays e entender como os dados são armazenados na memória.

Notes:
- diferente de python, não precisa importar numpy ou o módulo array pra usar
arrays
- listas em python consomem + memória e são mais lentas que arrays em C
- array -> agrupa variáveis do mesmo tipo em blocos contínuos de memória
- variáveis normais podem ser salvas em locais espalhados na RAM
- os itens do array são sempre salvos colados uns nos outros
- é útil quando precisar acessar variávies juntas, ex coordenadas
- array não inicializado: sem valor inicial, devo declarar o tamanho para
reservar memória
- array inicializado: com valor inicial, tamanho é opcional, compilador deduz o
tamanho
- array tem tamanho fixo até o final do programa

*/

// array não inicializado (tamanho deve ser declarado)
int age[4];

// se não especificar o tamanho, o compilador deduz pela quantidade de itens
int age[] = {5, 65, 12, 38};

// exercise
#include <stdio.h>

int main() {

  // Checkpoint 1 code goes here.
  double q[5];
  // Checkpoint 2 code goes here.
  int evens[] = {2, 4, 6, 8, 10};
}