//Faça um Programa que leia três números e mostre o maior e o menor deles.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe7(void) {
  float numero1, numero2, numero3;
  
  printf(WHT "Informe 3 números:\t\n");
    scanf("%f", &numero1);
    scanf("%f", &numero2);
    scanf("%f", &numero3);

  if (numero1 > numero2 && numero1 > numero3) {
    printf("O maior número é: %.2f\t\n", numero1); }
  else if (numero2 > numero1 && numero2 > numero3) {
    printf("O maior número é: %.2f\t\n", numero2); }
  else {
    printf("O maior número é: %.2f\t\n", numero3); }
  if (numero1 < numero2 && numero1 < numero3) {
    printf("O menor número é: %.2f\t\n", numero1); }
  else if (numero2 < numero1 && numero2 < numero3) {
    printf("O menor número é: %.2f\t\n", numero2); }
  else {
    printf("O menor número é: %.2f\t\n", numero3); }
  
  return 0;
}