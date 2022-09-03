/*Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita). O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.
Desconto do IR:
Salário Bruto até 900 (inclusive) - isento
Salário Bruto até 1500 (inclusive) - desconto de 5%
Salário Bruto até 2500 (inclusive) - desconto de 10%
Salário Bruto acima de 2500 - desconto de 20% Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.
        Salário Bruto: (5 * 220)        : R$  1100,00
        (-) IR (5%)                     : R$  55,00  
        (-) INSS ( 10%)                 : R$  110,00
        FGTS (11%)                      : R$  121,00
        Total de descontos              : R$  165,00
        Salário Liquido                 : R$  935,00*/

#include <stdio.h>
#define WHT "\e[0;37m"

int exe12(void) {
  float pagamento, horas, salarioD, salario;
  float salarioB, inss, sindicato, salarioL, ir;
  float aumento1, aumento2, aumento3, aumento4;
  float newSalario1, newSalario2, newSalario3, newSalario4;
  float percentual1 = 10.0 / 100.0; //10% inss
  float percentual2 = 5.0 / 100.0; //5% ir
  float percentual3 = 3.0 / 100.0; //3% sindicato
  float percentual4 = 11.0 / 100.0; //11%  fgts
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

  aumento1 = salario * percentual1;
  aumento2 = salario * percentual2;
  aumento3 = salario * percentual3;
  aumento4 = salario * percentual4; 
  newSalario1 = aumento1 + salario; 
  newSalario2 = aumento2 + salario;
  newSalario3 = aumento3 + salario;
  newSalario4 = aumento4 + salario;
  
  if (salario <= 900) {
    printf("Seu salário era: %.2f\n", salario);
    printf("O percentual de aumento aplicado foi: %.2f\n", percentual1);
    printf("O valor do aumento foi: %.2f\n", aumento1); 
    printf("Seu novo salário, após o aumento será: %.2f", newSalario1); }
    
  else if (280 > salario <= 700) {
    printf("Seu salário era: %.2f\n", salario);
    printf("O percentual de aumento aplicado foi: %.2f\n", percentual2);
    printf("O valor do aumento foi: %.2f\n", aumento2); 
    printf("Seu novo salário, após o aumento será: %.2f", newSalario2); }
    
  else if (700 > salario <= 1500) {
    printf("Seu salário era: %.2f\n", salario);
    printf("O percentual de aumento aplicado foi: %.2f\n", percentual3);
    printf("O valor do aumento foi: %.2f\n", aumento3); 
    printf("Seu novo salário, após o aumento será: %.2f", newSalario3); }
    
  else if (salario > 1500) {
    printf("Seu salário era: %.2f\n", salario);
    printf("O percentual de aumento aplicado foi: %.2f\n", percentual4);
    printf("O valor do aumento foi: %.2f\n", aumento4); 
    printf("Seu novo salário, após o aumento será: %.2f", newSalario4); } 
  
  return 0;
}