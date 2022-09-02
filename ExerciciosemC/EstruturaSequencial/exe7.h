//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe7(void) {
  float aresta, area, area2;
  
  printf(WHT "Me diga o valor de uma aresta do quadrado para que eu calcule sua área e te diga o dobro dela\n");
  printf("\nInsira o valor da aresta:\t");
    scanf("%f", &aresta);

  area= aresta*aresta;
  area2= area*2;

  printf("A area do quadrado é: %.2f\n", area);
  printf("E o dobro dela é: %.2f\n", area2);
  
  return 0;
} 