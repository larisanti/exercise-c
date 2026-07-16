/*
Curso:
Learn C (Codecademy)

Objetivos:
Definir e inicializar estruturas.

Notes:
- scope = part of a program where a name has meaning
- "A structure is used to group different types of data together"
- structure = struct
- sintax para inicializar estruturas:

    struct structType variableName = {value1, value2, value3};

*/

#include <stdio.h>

int main(void) {
  struct Person {
    char firstName[25];
    int age;
  };
}

//

int main(void) {
  struct Person {
    char firstName[25];
    
    char lastName[40];
    int age;
  };
  
  struct Person person1 = {"Ada", "Lovelace", 28};
  struct Person person2 = {"Marie", "Curie", 44};
}