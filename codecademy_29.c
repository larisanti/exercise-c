/*
Curso:
Learn C (Codecademy)

Objetivos:
Criar e iniciar strings

Notes:
- Não é um tipo nativo
- Strings são arrays de char terminado com '\0'
^ precisa terminar com '\0' pra memória saber o final da string
- Aspas simples pra único char
- Aspas duplas pra strings
- Pode alterar letra/char sem precisar criar nova string -> mutável
- Precisa definir o tamanho

*/

#include <stdio.h>

int main() {
  // initialized array of chars
  char comp[] = {'C', 'o', 'm', 'p', 'u', 't', 'e', 'r', '\0'};
  // string literals
  char compCode[] = {"Computer Code"};
  // Checkpoint 3 code goes here
  printf("%s", comp);
  printf("%s\n", compCode);
}
