/*
Curso:
Learn C (Codecademy)

Objetivo:

Notes:
- pointer = "point" to the variable (endereço em hex)
- resultado (nil) se não aponta para uma variável (vazio) 
- bloco de bytes é reservado na memória quando a variável é declarada
  ^ pointer é o endereço do PRIMEIRO desses bytes
- pointer pode ser criado pra:
   - qualquer tipo primitivo (int, char, double)
   - struct
   - outro pointer
- sintaxe:
   dataType* nameOfPointer;
   dataType *nameOfPointer;
*/

#include<stdio.h>

int main() {
  double dblVar; // 1 cria variavel
  double* dblPtr = &dblVar; // 2 cria pointer
  printf("%p", dblPtr); // %p diz pro print que é o type é pointer  
}