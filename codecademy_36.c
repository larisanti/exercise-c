/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar função com pointer em C

Notes:
- "a pointer is a variable that holds the memory address to another variable"
   ^ o endereço fala onde a variável original está na memória
- Por padrão, funções em C fazem uma cópia do argumento -> passagem por valor.
- Para alterar a variável original:
1. receber um endereço (ponteiro) usando *
  void func(int* a)
2. alterar o valor que está dentro daquele endereço usando *
  *a = 20;
3. enviar a localização da variável usando &
  func(&variavel);
*/

#include <stdio.h>

// Write your code below
void incrementAge(int* agePointer) {
  *agePointer += 1;
}

int main(void) {
  int age = 30;
  incrementAge(&age);
  printf("%d\n", age);
}