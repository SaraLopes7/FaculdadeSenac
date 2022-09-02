//Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

#include <stdio.h>
#define WHT "\e[0;37m"

int exe18(void) {
  float tamanho, velocidade, tempo, minuto;
  
  printf(WHT "Informe o tamanho do arquivo para download (em MB):\t\n");
    scanf("%f", &tamanho);
  printf("Informe a velocidade da sua internet (em Mbps):\t\n");
    scanf("%f", &velocidade);

  tempo= tamanho/velocidade;
  minuto= tempo/60.00;

  printf("O tempo aproximado para download do arquivo usando este link e de: %.2f minutos", minuto);
  
  return 0;
} 