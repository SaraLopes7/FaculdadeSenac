//Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe4( ) {
  char letrinha;
  
  printf(WHT "Digite uma letra:\t\n");
    scanf(" %c", &letrinha);

  if ( letrinha == 'a' || letrinha == 'A' || letrinha == 'e' || letrinha == 'E'|| letrinha == 'i' || letrinha == 'I'|| letrinha == 'o' || letrinha == 'O'|| letrinha == 'u' || letrinha == 'U') 
    printf("\nA letra é uma vogal\n\n");
  
  else 
  printf("\nA letra é uma consoante\n\n");

  return 0;
}  