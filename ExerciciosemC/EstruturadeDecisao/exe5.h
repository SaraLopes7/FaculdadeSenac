/*Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
a - A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
b - A mensagem "Reprovado", se a média for menor do que sete;
c - A mensagem "Aprovado com Distinção", se a média for igual a dez.*/

#include <stdio.h>
#define WHT "\e[0;37m"
#define RED "\e[0;31m"

int exe5(void) {
  float N1, N2, Media;

  printf(WHT "Insira duas notas parciais\n");
    scanf("%f", &N1);
    scanf("%f", &N2);

  Media = (N1 + N2)/2; 
  
  if (Media >= 7 && Media< 10) {
    printf("\tAluno Aprovado\n"); 
     }
 
  else if (Media < 7 ) {
    printf("\tAluno Reprovado\n");  
    }
  
  else if (Media == 10) {
    printf("\tAluno Aprovado com Distinção\n");
    }
  else 
    printf(RED "\tNota Inválida\n");
     
  return 0;
}