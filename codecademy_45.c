/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar ponteiros com arrays.

Notes:
- array = bloco de memória
- &arr[0] = endereço do primeiro elemento
- incrementar (ptr++) = aponta para o próximo elemento do array
- sintaxe:
  pointer += someInteger;
  pointer -= someInteger;
*/


#include<stdio.h>
#include<string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  int* ptr = &arr[9];

  for(int i = 0; i < 10; i++){
    printf("%i\n", *ptr);
    ptr--; // aponta pra um endereço anterior do array
  }

  char *ptr2 = &s[0];

  for(int i = 0; i < strlen(s); i++){
    *ptr2 = '#';
    ptr2++; // adiciona 1 byte ao endereço do ptr2
  }
  
  printf("%s\n", s);  
}