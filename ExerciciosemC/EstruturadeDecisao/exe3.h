//Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

#include <stdio.h>
#define WHT "\e[0;37m"
#define RED "\e[0;31m"

int exe3(void) {
  char letra;
  
  do {
  printf(WHT "F - Feminino\nM - Masculino\nN - Não Binário\n");
  printf("De acordo com a tabela, insira a letra correspondente a seu sexo: \n");
    scanf(" %c", &letra);
  
    if (letra == 'F' || letra == 'f') {
      printf("F - Feminino\n\n"); }
    else if (letra == 'M' || letra == 'm') {
      printf("M - Masculino\n\n"); }
    else if (letra == 'N' || letra == 'n') {
      printf("N - Não Binário\n\n"); }
    else 
      printf(RED "\nCorrespondência não encontrada\n Tente novamente\n\n");
    
    }  while ( letra != 'F' && letra != 'f' && letra != 'M' && letra != 'm' && letra != 'N' && letra != 'n');
 
  return 0;
}