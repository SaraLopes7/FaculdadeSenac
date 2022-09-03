/*Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
  Média de Aproveitamento  Conceito
  Entre 9.0 e 10.0        A
  Entre 7.5 e 9.0         B
  Entre 6.0 e 7.5         C
  Entre 4.0 e 6.0         D
  Entre 4.0 e zero        E
O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E*/

#include <stdio.h>
#define WHT "\e[0;37m"
#define RED "\e[0;31m"

int exe14(void) {
  float nota1, nota2, media;
  
    printf(WHT "Insira duas notas:\t\n");
      scanf("%f", &nota1);
      scanf("%f", &nota2);

  media= (nota1 + nota2)/2; 

    printf("Sua média é: %.2f\t\n", media); 

    if (media >= 9 || media <= 10) {
      printf("Você está: Aprovado\n");
      printf("Seu conceito é: A\n"); }
    
    else if (media >= 7.5 || media < 9){
      printf("Você está: Aprovado\n"); 
      printf("Seu conceito é: B\n"); }
    
    else if (media >= 6 || media < 7.5) {
      printf("Você está: Aprovado\n"); 
      printf("Seu conceito é: C\n"); }
    
    else if (media >= 4 || media < 6) {
      printf("Você está: Reprovado\n"); 
      printf("Seu conceito é: D\n"); }
    
    else if (media == 0 || media < 4) {
      printf("Você está: Reprovado\n");
      printf("Seu conceito é: E\n"); }
    else {
        printf(RED "\nMédia incorreta!\n"); }
  
  return 0;
}