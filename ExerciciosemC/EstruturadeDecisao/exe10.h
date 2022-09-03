//Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

#include <stdio.h>
#define WHT "\e[0;37m"
#define RED "\e[0;31m"

int exe10(void) {
  char Turno;  
 
  printf(WHT "M-matutino\nV-Vespertino\nN- Noturno\nDigite seu turno:\n");
     scanf(" %c", &Turno);
  
  if ( Turno == 'M' ||  Turno == 'm') {
    printf("\tBom Dia");
  }
  else if ( Turno == 'V' ||  Turno == 'v') {
    printf("\tBoa Tarde");
  }
  else if ( Turno == 'N' ||  Turno == 'n') {
    printf("\tBoa Noite");
  }
  else {
    printf(RED "\tSinal Inválido");
  }
  
  return 0;
}