#include <stdio.h>

int main(void) {

  int i, vetor[5], elem, posi;
  
  for(i=0; i<5; i++)
  {
   printf("Digite valores:\n");
   scanf("%d", &vetor[i]);
  }
  
  printf("Qual elemento deseja pesquisar no vetor?\n");
  scanf("%d", &elem);

  for(i=0; vetor[i]!=elem; i++)
  {
    posi= i;
  }
   
  printf("A posicao em que o elemento se encontra e: %d", posi);

  return 0;
}