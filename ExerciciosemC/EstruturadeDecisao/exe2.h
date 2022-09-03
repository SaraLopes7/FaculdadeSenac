//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe2(void) {
  float valor;
  
  printf(WHT "Insira um número:\t\n");
    scanf("%f", &valor);

  if ( valor > 0) {
    printf("O número %.2f é positivo\n\n", valor);
  }
  else if ( valor < 0) {
    printf("O número %.2f é negativo\n\n", valor);
  }
  else if (valor == 0) {
    printf("O número 0 é neutro\n\n");
  }
  
  return 0;
}