#include <stdio.h>

int main ()
{
   int x, y;
   int mat[2][2];
   int mat2[2][2];

   printf("Programa para achar a transposta de uma matriz:\n");

   // carregar a matriz com dados dos usuarios

   for(x=0; x<2; x++)
   {
      for(y=0; y<2; y++)
      {
          printf("Digite dados para a mat[%d][%d] = ", x,y);
          scanf("%d", &mat[x][y]);
      }
     
   }

   // imprimir a matriz

   for(x=0; x<2; x++)
   {
      for(y=0; y<2; y++)
      {
          printf(" mat[%d][%d] = %d", x,y, mat[x][y]);
      }
       printf("\n");
   }

   // fazer a matriz transposta

   for(y=0; y<2; y++)
   {
      for(x=0; x<2; x++)
      {
        mat2[x][y] = mat[y][x];
      }   
   }

   printf("\n");

   // imprimir a transposta

   for(x=0; x<2; x++)
   {
      for(y=0; y<2; y++)
      {
          printf(" mat2[%d][%d] = %d", x,y, mat2[x][y]);
      }
       printf("\n");
   }









    return 0;
}