/*Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.
Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:
a - comprar apenas latas de 18 litros;
b - comprar apenas galões de 3,6 litros;
c - misturar latas e galões, de forma que o desperdício de tinta seja menor. Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, considere latas cheias.*/

#include <stdio.h>
#define WHT "\e[0;37m"

int exe17(void) {
  float metros, litros, lata, galao, valorFinal, valorGalao, valorLata, mistura1, mistura2;
  float percentual= 10.0 / 100.0; //10% 
  
  printf(WHT "Olá, me diga o tamanho(em metros) da área a ser pintada:\t\n");
    scanf("%f", &metros);
  
  litros= metros / 6;
  lata= litros / 18;
  galao= litros / 3.6; 
  valorLata= lata * 80.00;
  valorGalao= galao * 25.00;
  /*valorFinal= (((litros - (valorLata * 18)) / 3.6)) * percentual;
  mistura1=litros/18;
  mistura2= (metros-(mistura1 * 108))/21.6;
  valorFinal= percentual * (mistura1 + mistura2); */
  
  printf("Se você for comprar só em latas, precisará de %.2f latas, que custará um total de R$ %.2f:\t\n", lata, valorLata);
  printf("Se você for comprar só em galões, precisará de %.2f galões, que custará um total de R$ %.2f:\t\n", galao, valorGalao); 
/*  printf("Se você for comprar em galões e latas, precisará de %.2f latas e %.2f galoes, que custará um total de R$ %.2f:\t\n", mistura1, mistura2, valorFinal); */

  return 0;
} 