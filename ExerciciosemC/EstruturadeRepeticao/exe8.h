//Faça um programa que leia 5 números e informe a soma e a média dos números.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe8(void) {
  float num1, num2, num3, num4, num5; 
  float soma, media; 
    
    printf(WHT "\nInsira cinco números:\n\n");
    printf("Digite o primeiro:\t");
      scanf("%f", &num1);
    printf("Digite o segundo:\t");
      scanf("%f", &num2);
    printf("Digite o terceiro:\t");
      scanf("%f", &num3);
    printf("Digite o quarto:\t");
      scanf("%f", &num4);
    printf("Digite o quinto:\t");
      scanf("%f", &num5);

  soma = num1+num2+num3+num4+num5;
  media = (num1+num2+num3+num4+num5)/5; 
    
    printf("\nOs números que você digitou foram: %.2f, %.2f, %.2f, %.2f e %.2f\n", num1, num2, num3, num4, num5);
    printf("A soma deles é: %.2f\n", soma);
    printf("E a média deles é: %.2f\n", media);
  
  return 0;
}