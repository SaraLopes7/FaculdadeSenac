//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe8(void) {
  float pagamento, horas, salarioD, salario;
  
  printf(WHT "Para que eu calcule quanto você ganhou no mês de abril, me diga:\n");
  printf("\nNo seu trabalho, quanto você ganhou por hora?\t");
    scanf("%f", &pagamento);
  printf("Quantas horas você trabalhou no mês?\t");
    scanf("%f", &horas);

  //21 dias úteis
  salarioD= (horas/21) * pagamento;
  salario= salarioD * 21; 
  
  printf("Seu salário no mês de abril foi: %.2f", salario);
  
  return 0;
} 