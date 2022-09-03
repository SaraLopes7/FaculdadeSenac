/*As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
+ salários até R$ 280,00 (incluindo) : aumento de 20%
+ salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
+ salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
+ salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
+ o salário antes do reajuste;
+ o percentual de aumento aplicado;
+ o valor do aumento;
+ o novo salário, após o aumento.*/

#include <stdio.h>
#define WHT "\e[0;37m"

int exe11(void) {
  float salario, aumento1, aumento2, aumento3, aumento4, newSalario1, newSalario2, newSalario3, newSalario4;
  float percentual1 = 20.0 / 100.0; //20%
  float percentual2 = 15.0 / 100.0; //15%
  float percentual3 = 10.0 / 100.0; //10%
  float percentual4 = 5.0 / 100.0;  //5%

  printf(WHT "Insira seu salário atual:\t\n");
    scanf("%f", &salario);

  aumento1 = salario * percentual1;
  aumento2 = salario * percentual2;
  aumento3 = salario * percentual3;
  aumento4 = salario * percentual4; 
  newSalario1 = aumento1 + salario; 
  newSalario2 = aumento2 + salario;
  newSalario3 = aumento3 + salario;
  newSalario4 = aumento4 + salario;
  
  if (salario <= 280) {
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