//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.

#include <stdio.h>
#define WHT "\e[0;37m"

int exe14(void) {
  float peso, pesoR, excesso, multa;
  
  printf(WHT "Olá, João Papo-de-Pescador. Me diga quantos kg você pescou hoje:\t\n");
    scanf("%f", &peso);

  excesso= peso - 50;
  multa= excesso * 4.00; 

if (peso <= 50) {  
  printf("João, você pescou %.2f kg, que está dentro do limite permitido. Portanto, não pagará multa.\t\n", peso); }

if (peso > 50) {  
  printf("João, você pescou %.2f kg a mais que o permitido. Por isso, terá que pagar uma multa de: R$ %.2f\t\n", excesso, multa); }

  return 0;
} 