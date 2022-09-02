/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
a - o produto do dobro do primeiro com metade do segundo .
b - a soma do triplo do primeiro com o terceiro.
c - o terceiro elevado ao cubo.*/

#include <stdio.h>
#define WHT "\e[0;37m"

int exe11(void) {
  int inteiro1, inteiro2; 
  float real, solucao1, solucao2, solucao3;
  
  printf(WHT "Me diga dois números inteiros:\t\n");
    scanf("%d", &inteiro1);
    scanf("%d", &inteiro2);
  printf("Me diga um número real:\t\n");  
    scanf("%f", &real);

  solucao1= inteiro1 * 2 + inteiro2/ 2 ;
  solucao2= inteiro1 * 3 + real; 
  solucao3= real * real * real; 


    printf("\nO produto do dobro do primeiro com metade do segundo é: %.2f\t\n", solucao1);
    printf("A soma do triplo do primeiro com o terceiro é: %.2f\t\n", solucao2);
    printf("O terceiro elevado ao cubo é: %.2f\t\n", solucao3); 

  return 0;
} 