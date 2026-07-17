/*
Curso:
Learn C (Codecademy)

Objetivo:
Praticar aritmética de ponteiros.

Notes:
- apenas adição e subtração com inteiros
- não somar pointer com pointer
- não pode multiplicar pq o endereço do pointer já é grande, ficaria maior ainda
- não pode dividir pois faz o ponteiro apontar pra um endereço que não é int
- segmentation fault: erro depois de incrementar/decrementar ponteiro
^ trava o programa se ultrapassar a memória alocada
^ endereço inválido, não tem a ver com o cálculo matemático
- é uma operação arriscada e não existe em python
^ desenvolvedor não tem acesso direto à memória
*/

#include<stdio.h>

int main() {
  double* ptr1;

  ptr1 += 5;

  ptr1 -= 4;
   
}

