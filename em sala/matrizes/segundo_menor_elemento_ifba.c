#include <stdio.h>

int main ()
{
   int x, y;
   int matriz [3][3] = {1,9,5,7,8,6,3,2,4};
   int segundo= matriz[0][1], menor= matriz[0][0];

    for(x=0; x<3; x++)
   {
      for (y=0; y<3; y++)
      {
         if (matriz[x][y]< menor)
            menor = matriz[x][y];                        
      }
   }

   // descobrir o segundo maior elemento
   for(x=0; x<3; x++)
   {
      for (y=0; y<3; y++)
      {
         if (matriz[x][y] < segundo && matriz[x][y] > menor)
           segundo = matriz[x][y];                 
      }
   }
   printf("O segundo menor numero da matriz e': %d", segundo);




    return 0;
}