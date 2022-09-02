//Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.

/*1 litro 3 metros
1 lata 18 litros
1 lata 80 reais*/  

#include <stdio.h>
#define WHT "\e[0;37m"

int exe16(void) {
  float metros, litros, lata, valorFinal;
  
  printf(WHT "Olá, me diga o tamanho(em metros) da área a ser pintada:\t\n");
    scanf("%f", &metros);
  
  litros= metros / 3;
  lata= litros / 18;
  valorFinal= lata * 80.00;
   
  printf("Você precisará de %.2f latas, que custará um total de R$ %.2f:\t\n", lata, valorFinal);
  
  return 0;
} 