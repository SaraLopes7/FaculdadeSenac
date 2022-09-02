/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
a - salário bruto.
b - quanto pagou ao INSS.
c - quanto pagou ao sindicato.
d - o salário líquido.
e - calcule os descontos e o salário líquido, conforme a tabela abaixo:
+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.*/

#include <stdio.h>
#define WHT "\e[0;37m"

int exe15(void) {
  float pagamento, horas, salarioD;
  float salarioB, inss, sindicato, salarioL, ir;
  float percentual1 = 8.0 / 100.0; //8%
  float percentual2 = 11.0 / 100.0; //11%
  float percentual3 = 5.0 / 100.0; //5%
    
  printf(WHT "Para que eu calcule quanto você ganhou no mês de maio, me diga:\n");
  printf("\nNo seu trabalho, quanto você ganhou por hora?\t");
    scanf("%f", &pagamento);
  printf("Quantas horas você trabalhou no mês?\t");
    scanf("%f", &horas);

  //22 dias úteis
  salarioD= (horas/22) * pagamento;
  salarioB= salarioD * 22;
  ir=  salarioB * percentual2;
  inss=  salarioB * percentual1;
  sindicato=  salarioB * percentual3;
  salarioL= salarioB - ir - inss - sindicato;
    
  printf("Seu salário bruto no mês de maio foi: %.2f\n", salarioB);
  printf("Você pagou %.2f ao INSS\n", inss);
  printf("Você pagou %.2f ao Sindicato\n", sindicato);
  printf("Seu salário liquído no mês de maio foi: %.2f\n", salarioL);

  return 0;
}