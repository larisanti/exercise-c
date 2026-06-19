/*
Curso:
Learn C (Codecademy)

Objetivo:
- Introdução ao compilador

Notes:
- compilador -> converte o código para executável
^ esse é um executável que o computador entende
- gcc -> compilador do c
^ GNU Compiler Collection
- compilar -> gcc arquivo.c -o executavel
- executar -> ./executavel
*/

#include <stdio.h>

int main() {
  // output a line
  printf("Hello World!\n");
}

// executado via bash:
// gcc helloWorld.c -o helloWorld
// ./helloWorld
