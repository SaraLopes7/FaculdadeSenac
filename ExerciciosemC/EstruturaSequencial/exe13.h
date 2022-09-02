/*Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
a - Para homens: (72.7*h) - 58
b - Para mulheres: (62.1*h) - 44.7*/

#include <stdio.h>
#define WHT "\e[0;37m"
#define RED "\e[0;31m"

int exe13(void) {
  float altura, pesoH, pesoM;
  char sexo; 
  printf(WHT "Homem = 'H'\nMulher = 'M'\n");
  printf("\nVocê é homem ou mulher?:\t\n");
    scanf(" %c", &sexo);

  printf("Digite sua altura:\t\n");
    scanf("%f", &altura);

  pesoH= (72.7 * altura) - 58;
  pesoM= (62.1 * altura) - 44.7;
  
  if ( sexo == 'm' || sexo == 'M' ) {
    printf("Seu peso ideal é: %.2f \t\n", pesoM); }
  else if ( sexo == 'h' || sexo == 'H') {
    printf("Seu peso ideal é: %.2f \t\n", pesoH); }
  else
    printf(RED "Error.");
  
  return 0;
} 