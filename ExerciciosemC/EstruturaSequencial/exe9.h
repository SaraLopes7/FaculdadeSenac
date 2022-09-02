//Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius. C =(F-32)/ 1,8.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe9(void) {
  float grausF, grausC;
  
  printf(WHT "Me diga a temeperatura da sua cidade em graus Fahrenheit:\t\n");
    scanf("%f", &grausF);

  grausC= (grausF-32)/1.8;

  printf("A temperatura informada em graus celsius é: %.2f\n", grausC);
  
  return 0;
} 