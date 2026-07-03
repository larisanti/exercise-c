/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar loops em strings

Notes:
- Precisa importar <string.h> para usar strlen()
- printf com %c para imprimir caractere por caractere
- strlen(str) retorna o tamanho da string (sem contar o '\0')
- Pode modificar char ao percorrer o loop

*/

#include <stdio.h>
#include <string.h>

int main() {

  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "poolloop";

  // encontar length e substituir todos as letras por *
  for (int i = 0; i < strlen(s); i++) {
    s[i] = '*';
  }

  printf("%s\n", s);

  // encontrar length e substituir metade por #
  for (int i = 0; i < strlen(p) / 2; i++) {
    p[i] = '#';
  }

  printf("%s", p);
}
