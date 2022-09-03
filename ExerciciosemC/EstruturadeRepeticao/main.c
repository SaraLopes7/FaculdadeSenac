//https://wiki.python.org.br/EstruturaDeRepeticao 

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
/*#include "exe14.h"
#include "exe15.h"
#include "exe16.h"
#include "exe17.h"
#include "exe18.h"
#include "exe19.h"
#include "exe20.h"
#include "exe21.h"
#include "exe22.h"
#include "exe23.h"
#include "exe24.h"
#include "exe25.h"
#include "exe26.h"
#include "exe27.h"
#include "exe28.h"
#include "exe29.h"
#include "exe30.h"
#include "exe31.h"
#include "exe32.h"
#include "exe33.h"
#include "exe34.h"
#include "exe35.h"
#include "exe36.h"
#include "exe37.h"
#include "exe38.h"
#include "exe39.h"
#include "exe40.h"
#include "exe41.h"
#include "exe42.h"
#include "exe43.h"
#include "exe44.h"
#include "exe45.h"
#include "exe46.h"
#include "exe47.h"
#include "exe48.h"
#include "exe49.h"
#include "exe50.h"
#include "exe51.h" */

int main(void) {
  int select; 
  
  printf(BLU "\tOlá, bem vindo a minha terceira lista de Atvidades\n Selecione o Código do exercício que você deseja rodar:\n");
  printf(WHT "\nExercício 1 \nExercício 2 \nExercício 3 \nExercício 4 \nExercício 5 \nExercício 6 \nExercício 7 \nExercício 8 \nExercício 9 \nExercício 10 \nExercício 11 \nExercício 12 \nExercício 13 \nExercício 14 \nExercício 15 \nExercício 16 \nExercício 17 \nExercício 18 \nExercício 19 \nExercício 20 \nExercício 21 \nExercício 22 \nExercício 23 \nExercício 24 \nExercício 25 \nExercício 26 \nExercício 27\nExercício 28 \nExercício 29 \nExercício 30 \nExercício 31 \nExercício 32 \nExercício 33 \nExercício 34 \nExercício 35 \nExercício 36 \nExercício 37 \nExercício 38 \nExercício 39 \nExercício 40 \nExercício 41 \nExercício 42 \nExercício 43 \nExercício 44 \nExercício 45 \nExercício 46 \nExercício 47 \nExercício 48 \nExercício 49 \nExercício 50 \nExercício 51 \n");
  printf(BLU "\nDigite um número de 1 a 51 para escolher o exercício:\t");
  scanf("%i", &select);
  
  while (select>28 || select<1) {
    printf(RED "\nError. Este número não está entre as opções\nSelecione um número de 1 a 51: ");
    scanf("%i", &select); } 
      
  switch (select){
    case 1:
    printf(MAG "\nExercício 1 \n\n");
    exe1();
    break;

    case 2:
    printf(MAG "\nExercício 2 \n\n");
    exe2();
    break;

    case 3:
    printf(MAG "\nExercício 3 \n\n");
    exe3();
    break;

    case 4:
    printf(MAG "\nExercício 4 \n\n");
    exe4();
    break;

    case 5:
    printf(MAG "\nExercício 5 \n\n");
    exe5();
    break;

    case 6:
    printf(MAG "\nExercício 6 \n\n");
    exe6();
    break;

    case 7:
    printf(MAG "\nExercício 7 \n\n");
    exe7();
    break;

    case 8:
    printf(MAG "\nExercício 8 \n\n");
    exe8();
    break;

    case 9:
    printf(MAG "\nExercício 9 \n\n");
    exe9();
    break;

    case 10:
    printf(MAG "\nExercício 10 \n\n");
    exe10();
    break;

    case 11:
    printf(MAG "\nExercício 11 \n\n");
    exe11();
    break;

    case 12:
    printf(MAG "\nExercício 12 \n\n");
    exe12();
    break;

    case 13:
    printf(MAG "\nExercício 13 \n\n");
    exe13();
    break;
/*
    case 14:
    printf(MAG "\nExercício 14 \n\n");
    exe14();
    break;

    case 15:
    printf(MAG "\nExercício 15 \n\n");
    exe15();
    break;

    case 16:
    printf(MAG "\nExercício 16 \n\n");
    exe16();
    break;

    case 17:
    printf(MAG "\nExercício 17 \n\n");
    exe17();
    break;

    case 18:
    printf(MAG "\nExercício 18 \n\n");
    exe18();
    break;

    case 19:
    printf(MAG "\nExercício 19 \n\n");
    exe19();
    break;

    case 20:
    printf(MAG "\nExercício 20 \n\n");
    exe20();
    break;

    case 21:
    printf(MAG "\nExercício 21 \n\n");
    exe21();
    break;

    case 22:
    printf(MAG "\nExercício 22 \n\n");
    exe22();
    break;

    case 23:
    printf(MAG "\nExercício 23 \n\n");
    exe23();
    break;

    case 24:
    printf(MAG "\nExercício 24 \n\n");
    exe24();
    break;

    case 25:
    printf(MAG "\nExercício 25 \n\n");
    exe25();
    break;

    case 26:
    printf(MAG "\nExercício 26 \n\n");
    exe26();
    break;

    case 27:
    printf(MAG "\nExercício 27 \n\n");
    exe27();
    break;

    case 28:
    printf(MAG "\nExercício 28 \n\n");
    exe28();
    break; 
    
    case 29:
    printf(MAG "\nExercício 29 \n\n");
    exe29();
    break;

    case 30:
    printf(MAG "\nExercício 30 \n\n");
    exe30();
    break;

    case 31:
    printf(MAG "\nExercício 31 \n\n");
    exe31();
    break;

    case 32:
    printf(MAG "\nExercício 32 \n\n");
    exe32();
    break;

    case 33:
    printf(MAG "\nExercício 33 \n\n");
    exe33();
    break;

    case 34:
    printf(MAG "\nExercício 34 \n\n");
    exe34();
    break;

    case 36:
    printf(MAG "\nExercício 36 \n\n");
    exe36();
    break;

    case 37:
    printf(MAG "\nExercício 37 \n\n");
    exe37();
    break;

    case 38:
    printf(MAG "\nExercício 38 \n\n");
    exe38();
    break;

    case 39:
    printf(MAG "\nExercício 39 \n\n");
    exe39();
    break;

    case 40:
    printf(MAG "\nExercício 40 \n\n");
    exe40();
    break;

    case 41:
    printf(MAG "\nExercício 41 \n\n");
    exe41();
    break;

    case 42:
    printf(MAG "\nExercício 42 \n\n");
    exe42();
    break;

    case 43:
    printf(MAG "\nExercício 43 \n\n");
    exe43();
    break;

    case 44:
    printf(MAG "\nExercício 44 \n\n");
    exe44();
    break;

    case 45:
    printf(MAG "\nExercício 45 \n\n");
    exe45();
    break;

    case 46:
    printf(MAG "\nExercício 46 \n\n");
    exe46();
    break;

    case 47:
    printf(MAG "\nExercício 47 \n\n");
    exe47();
    break;

    case 48:
    printf(MAG "\nExercício 48 \n\n");
    exe48();
    break;

    case 49:
    printf(MAG "\nExercício 49 \n\n");
    exe49();
    break;

    case 50:
    printf(MAG "\nExercício 50 \n\n");
    exe50();
    break;

    case 51:
    printf(MAG "\nExercício 51 \n\n");
    exe51();
    break; */
    } 
    
 return 0;
}