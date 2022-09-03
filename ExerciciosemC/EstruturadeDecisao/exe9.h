//Faça um Programa que leia três números e mostre-os em ordem decrescente.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe9(void) {
  float numero1, numero2, numero3; 
  
  printf(WHT "Insira 3 números:\t\n");
    scanf("%f", &numero1);
    scanf("%f", &numero2);
    scanf("%f", &numero3);
  
  if (numero1 >= numero2 && numero1 >= numero3 && numero2 >= numero3) {
    printf("A ordem decrescente é %.2f, %.2f e %.2f", numero1, numero2, numero3); }
  else if (numero1 >= numero2 && numero1 >=numero3 && numero3 >= numero2) {
    printf("A ordem decrescente é %.2f, %.2f e %.2f", numero1, numero3, numero2); }
  else if (numero2 >= numero1 && numero2 >= numero3 && numero1 >= numero3) { 
    printf("A ordem decrescente é %.2f, %.2f e %.2f", numero2, numero1, numero3); }
  else if (numero2 >= numero1 && numero2 >= numero3 && numero3 >= numero1) {
    printf("A ordem decrescente é %.2f, %.2f e %.2f", numero2, numero3, numero1); }
  else if (numero3 >= numero1 && numero3 >= numero2 && numero1 >= numero2) {
    printf("A ordem decrescente é %.2f, %.2f e %.2f", numero3, numero1, numero2); }
  else if (numero3 >= numero1 && numero3 >= numero2 && numero2 >= numero1) {
    printf("A ordem decrescente é %.2f, %.2f e %.2f", numero3, numero2, numero1); }

  return 0;
}