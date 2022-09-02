/*Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.
F= C*1,8+32*/

#include <stdio.h>
#define WHT "\e[0;37m"

int exe10(void) {
  float grausF, grausC;
  
  printf(WHT "Me diga a temeperatura da sua cidade em graus celsius:\t\n");
    scanf("%f", &grausC);

  grausF= grausC*1.8+32;

  printf("A temperatura informada em graus Fahrenheit é: %.2f\n", grausF);
  
    return 0;
} 