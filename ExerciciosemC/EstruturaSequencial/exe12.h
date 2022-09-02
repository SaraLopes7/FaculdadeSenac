//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include <stdio.h>
#define WHT "\e[0;37m"

int exe12(void) {
  float altura, peso;
  
  printf(WHT "Digite sua altura:\t\n");
    scanf("%f", &altura);

  peso= (72.7 * altura) - 58;
  
  printf("Seu peso ideal é: %.2f \t\n", peso);
  
  return 0;
}