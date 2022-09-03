/*Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.*/

#include <stdio.h>
#define WHT "\e[0;37m"
#define RED "\e[0;31m"

int exe13(void) {
  int dia;
  
    printf(WHT "Escolha um número de 1 a 7 correspondente a um dia na semana:\t\n");
      scanf(" %d", &dia);

  if ( dia == 1 )  {
    printf("Esse número corresponde a Domingo.\t\n"); }
  else if ( dia == 2 ) {
    printf("Esse número corresponde a Segunda-feira.\n"); }
  else if ( dia == 3 ) {
    printf("Esse número corresponde a Terça-feira.\n"); }
  else if ( dia == 4 ) {
    printf("Esse número corresponde a Quarta-feira.\n"); }
  else if ( dia == 5 ) {
    printf("Esse número corresponde a Quinta-feira.\n"); }
  else if ( dia == 6 ) {
    printf("Esse número corresponde a Sexta-feira.\n"); }
  else if ( dia == 7 ) {
    printf("Esse número corresponde a Sábado-feira.\n"); }
  else {
    printf(RED "Esse número não está entre as opções.\n");
  }
  
  return 0;
}