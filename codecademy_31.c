/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar concatenação de strings

Notes:
- strcat(dst, src) -> acrescenta src no fim de dst
- altera a string destino diretamente, não cria 3a string
- buffer overflow -> erro se tentar colocar texto maior que espaço reservado

*/

#include <stdio.h>
#include <string.h>

int main() {

  char s1[14] = "London";
  char s2[] = " Bridge";

  char n[20] = "New";
  char y[] = " York";
  char c[] = " City";

  // Code for checkpoint 1 goes here
  strcat(s1, s2);

  printf("%s\n", s1);

  // Code for checkpoint 2 goes here
  strcat(n, y);
  strcat(n, c);

  printf("%s", n);
}