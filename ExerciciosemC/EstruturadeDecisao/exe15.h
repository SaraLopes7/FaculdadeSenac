/*Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
Dicas:
Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
Triângulo Equilátero: três lados iguais;
Triângulo Isósceles: quaisquer dois lados iguais;
Triângulo Escaleno: três lados diferentes;*/

#include <stdio.h>
#define WHT "\e[0;37m"
#define RED "\e[0;31m"

int exe15(void) {
  float lado1, lado2, lado3, area;

  printf(WHT "\nInforme três valores:\n");
  printf("lado 1:\t");
    scanf("%f", &lado1);
  printf("lado 2:\t");
    scanf("%f", &lado2);
  printf("lado 3:\t");
    scanf("%f", &lado3);

if ( lado1 > (lado2+lado3) || lado2 > (lado1+lado3) || lado3 > (lado1+lado2)) {
  printf(RED "\nEsses valores não podem fazer um triângulo\n"); }

else if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1) {
  printf("Esses valores fazem um triângulo equilátero"); }  

else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1) {
 printf("Esses valores fazem um triângulo isósceles\n"); }

else {
  printf("Esses valores fazem um triângulo escaleno\n"); }
  
  return 0;
}