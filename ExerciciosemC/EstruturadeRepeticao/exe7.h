//Faça um programa que leia 5 números e informe o maior número.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe7(void) {
  float num1, num2, num3, num4, num5; 
  
    printf(WHT "\nInforme cinco números:\n\n");
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
  
    printf("\nOs números que você digitou foram: %.2f, %.2f, %.2f, %.2f e %.2f\n", num1, num2, num3, num4, num5);

  if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) { 
    printf("E %.2f é o maior deles\n", num1); }
  else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) {
    printf("E %.2f é o maior deles\n", num2); }
  else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5) {
    printf("E %.2f é o maior deles\n", num3); }
  else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5) {
    printf("E %.2f é o maior deles\n", num4); }
  else if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4) { 
    printf("E %.2f é o maior deles\n", num5); }
  
  return 0;
}