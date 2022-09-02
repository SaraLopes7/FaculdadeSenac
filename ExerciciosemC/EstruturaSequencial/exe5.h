//Faça um Programa que converta metros para centímetros.

#include <stdio.h>
#define WHT "\e[0;37m"

// 1 metro = 100 centimetros
int exe5(void) {
  float metros, centimetros;

  printf(WHT "Me diga um valor em metros que eu o tranformo em centímentros para você\n");
  printf("\nInsira o valor:\t\n");
    scanf("%f", &metros);

  centimetros= metros*100;

  printf("O valor informado em centímetros é: %.2f\n", centimetros);
  
  return 0;
}