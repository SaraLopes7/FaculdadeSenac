//Faça um Programa que peça dois números e imprima a soma.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe3(void) {
  int numero1, numero2, soma;
  
  printf(WHT "Me informe dois números inteiros:\t\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);
  
  soma = numero1+numero2;

  printf("A soma dos numeros informados é: %d \t", soma);
  
  return 0;
} 