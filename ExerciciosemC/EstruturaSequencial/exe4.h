//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe4(void) {
  float nota1, nota2, nota3, nota4, media;
  
  printf(WHT "Para que eu possa calcular sua média\n"); 
  printf("\nMe diga a sua primeira nota:\t\n");
    scanf("%f", &nota1); 
  printf("Me diga a sua segunda nota:\t\n");
    scanf("%f", &nota2); 
  printf("Me diga a sua terceira nota:\t\n");
    scanf("%f", &nota3); 
  printf("Me diga a sua quarta nota:\t\n");
    scanf("%f", &nota4); 

  media= (nota1+nota2+nota3+nota4)/4;

  printf("A média das suas notas foi:\t%.2f", media);
  
  return 0;
} 