//Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].

#include <stdio.h>
#define WHT "\e[0;37m"

int exe2(void) {
  int numero;
  
  printf(WHT "Digite um número inteiro:\t\n");
    scanf("%d", &numero);
  printf("O número informado foi: %d ", numero);
  
  return 0;
} 