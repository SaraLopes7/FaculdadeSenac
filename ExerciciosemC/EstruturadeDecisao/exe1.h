//Faça um Programa que peça dois números e imprima o maior deles.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe1(void) {
  float num1, num2;
  
  printf(WHT "Diga o primeiro número:\t\n");
    scanf("%f", &num1);
  printf("Diga o segundo número:\t\n");
    scanf("%f", &num2);

  if (num1 > num2) {
    printf("O %.2f é o maior valor\n\n", num1);
  }
  else if (num2 > num1) {
    printf("O %.2f é o maior valor\n\n", num2);
  }
  
  return 0;
}