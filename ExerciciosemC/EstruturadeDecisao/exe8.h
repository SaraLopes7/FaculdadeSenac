//Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe8(void) {
  float produto1, produto2, produto3;
  
  printf(WHT "Informe o valor do 1° produto:\n");
    scanf("%f", &produto1);
  printf("Informe o valor do 2° produto:\n");
    scanf("%f", &produto2);
  printf("Informe o valor do 3° produto:\n"); 
    scanf("%f", &produto3);

  if (produto1 < produto2 && produto1 < produto3) {
    printf("O produto mais barato é o 1°, que custa: %.2f\t\n", produto1); }
  else if (produto2 < produto1 && produto2 < produto3) {
    printf("O produto mais barato é o 2°, que custa: %.2f\t\n", produto2); }
  else {
    printf("O produto mais barato é o 3°, que custa: %.2f\t\n", produto3); }
    
  return 0;
}