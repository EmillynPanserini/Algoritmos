#include <stdio.h>
#include <string.h>

int main(void) {

  /* strings. Codifique, compile e execute um programa que receba uma string s, um caracter c e devolve o índice da primeira posição de s, que é igual a c.
  */

  int x;
  char string[5];
  char c;

  printf("Digite uma palavra:\n");
  scanf("%s", string[5]);


 printf("Escolha o caracter a ser procurado: \n");
 scanf(" %c", c);

 for(x=0; x<5; x++)
 {
    if(c==string[x])
    {
      printf("%s", c);
    }
 
   else 
    printf("Letra nao encontrada\n");
 } 
  

  return 0;
}