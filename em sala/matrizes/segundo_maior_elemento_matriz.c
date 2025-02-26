#include <stdio.h>

int main ()
{
   int x, y, maior=0, segundo=0;
   int matriz[3][3];

   printf("Programa para encontrar o segundo numero maior:\n");

   // carregar a matriz com valores dos usuários

   for(x=0; x<3; x++)
   {
      for (y=0; y<3; y++)
      {
          printf("Digite valores para matriz[%d][%d] = \n", x, y);
          scanf("%d", &matriz[x][y]);
      }
   }
   
   // descobrir o maior elemento

   for(x=0; x<3; x++)
   {
      for (y=0; y<3; y++)
      {
         if (matriz[x][y]> maior)
            maior = matriz[x][y];                        
      }
   }

   // descobrir o segundo maior elemento
   for(x=0; x<3; x++)
   {
      for (y=0; y<3; y++)
      {
         if (matriz[x][y] > segundo && matriz[x][y] < maior)
           segundo = matriz[x][y];                 
      }
   }
   printf("O segundo maior numero da matriz e': %d", segundo);





    return 0;
}