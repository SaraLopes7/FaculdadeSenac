//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área. A = pi * raio^2

#include <stdio.h>
#define WHT "\e[0;37m"

int exe6(void) {
  float raio, area, pi=3.14;
  
  printf(WHT "Me diga o raio de um círculo que te digo a área dele\n");
  printf("\nDigite o valor do raio:\t\n");
    scanf("%f", &raio);

  area= pi*(raio*raio);

  printf("A área do círculo com o raio informado é: %.2f\t\n", area);
  
  return 0;
}