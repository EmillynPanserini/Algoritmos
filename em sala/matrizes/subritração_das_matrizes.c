#include <stdio.h>

int main ()
{
   int x, y;
   int mat[2][2] = {5,6,7,8};
   int mat2 [2][2] = {1,2,3,4};
   int matSub [2][2];

   printf("Programa para subtrair duas matrizes:\n");

  // subtração das matrizes
   for(x=0; x<2; x++)
   {
      for (y=0; y<2; y++)
      {
        matSub[x][y] = mat[x][y] - mat2[x][y];
      }
   }

   // imprimir os valores finais da matriz

   for(x=0; x<2; x++)
   {
      for (y=0; y<2; y++)
      {
        printf("%d ", matSub[x][y]);
      }
      printf("\n");
   }









    return 0;
}