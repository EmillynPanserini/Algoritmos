#include <stdio.h>

int main ()
{
   int x, y, soma=0;
   int matriz [3][3];

   printf("Programa para somar os elementos de uma matriz:\n");

   // carregar os elementos de uma matriz com dados fornecidos pelos usuários:

   for (x=0; x<3; x++)
   {
      for (y=0; y<3; y++)
      {
        printf("Digite os valores para a matriz: [%d][%d]: ", x,y);
        scanf("%d", &matriz[x][y]);
      }
      printf("\n");
   }

   // somar os valores

   for (x=0; x<3; x++)
   {
      for (y=0; y<3; y++)
      {
        soma += matriz[x][y];
      }
   }
   printf("A soma dos valores e' %d", soma);
   
  



  
    return 0;
}