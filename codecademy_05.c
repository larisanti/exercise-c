/*
Curso:
Learn C (Codecademy)

Objetivo:
- Praticar data types

Notes:
- é obrigatório definir o tipo da variávbel
- float -> 32 bits / 6 decimais (menos preciso)
- double -> 64 bits / 15 decimais (float em python)
- char: 1 símbolo -> letra ou número
*/

#include <stdio.h>

int main() {

  // Fix the missing data types
  int studentRank;
  double studentFeeTotal;
  char studentGradeLetter;

  studentRank = 1;
  studentFeeTotal = 100.56;
  studentGradeLetter = 'A';

  printf("Student's Rank in class: %dst\n", studentRank);
  printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
  printf("Student's Grade: %c\n", studentGradeLetter);
}