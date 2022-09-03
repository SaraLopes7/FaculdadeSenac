// https://wiki.python.org.br/ExerciciosFuncoes 

#include <stdio.h>
#define RED "\e[0;31m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define WHT "\e[0;37m"

#include "exe1.h"
#include "exe2.h"
#include "exe3.h"
#include "exe4.h"
#include "exe5.h"
#include "exe6.h"
#include "exe7.h"
#include "exe8.h"
#include "exe9.h"
#include "exe10.h"
#include "exe11.h"
#include "exe12.h"
#include "exe13.h"
#include "exe14.h"


int main(void) {
  int select; 
  
  printf(MAG "\tOlá, bem vindo a minha quinta lista de Atvidades\n Selecione o Código do exercício que você deseja rodar:\n");
  printf(WHT "\nExercício 1 \nExercício 2 \nExercício 3 \nExercício 4 \nExercício 5 \nExercício 6 \nExercício 7 \nExercício 8 \nExercício 9 \nExercício 10 \nExercício 11 \nExercício 12 \nExercício 13 \nExercício 14 \n");
  printf(MAG "\nDigite um número de 1 a 28 para escolher o exercício:\t");
  scanf("%i", &select);
  
  while (select>28 || select<1) {
    printf(RED "\nError. Este número não está entre as opções\nSelecione um número de 1 a 28: ");
    scanf("%i", &select); } 
      
  switch (select){
    case 1:
    printf(BLU "\nExercício 1 \n\n");
    exe1();
    break;

    case 2:
    printf(BLU "\nExercício 2 \n\n");
    exe2();
    break;

    case 3:
    printf(BLU "\nExercício 3 \n\n");
    exe3();
    break;

    case 4:
    printf(BLU "\nExercício 4 \n\n");
    exe4();
    break;

    case 5:
    printf(BLU "\nExercício 5 \n\n");
    exe5();
    break;

    case 6:
    printf(BLU "\nExercício 6 \n\n");
    exe6();
    break;

    case 7:
    printf(BLU "\nExercício 7 \n\n");
    exe7();
    break;

    case 8:
    printf(BLU "\nExercício 8 \n\n");
    exe8();
    break;

    case 9:
    printf(BLU "\nExercício 9 \n\n");
    exe9();
    break;

    case 10:
    printf(BLU "\nExercício 10 \n\n");
    exe10();
    break;

    case 11:
    printf(BLU "\nExercício 11 \n\n");
    exe11();
    break;

    case 12:
    printf(BLU "\nExercício 12 \n\n");
    exe12();
    break; 

    case 13:
    printf(BLU "\nExercício 13 \n\n");
    exe13();
    break;

    case 14:
    printf(BLU "\nExercício 14 \n\n");
    exe14();
    break;
    }
    
 return 0;
}