#include <stdio.h>

int main ()
{
   int x, y;
   int mat[3][3] = {2,3,5,7,8,9,1,4,6};
   int mat2[3][3] = {4,8,1,3,7,9,5,2,6};
   int matSoma [3][3];

   //  soma das duas matrizes

   for (x=0; x<3; x++)
   {
      for(y=0; y<3; y++)
      {
        matSoma[x][y] = mat[x][y] + mat2[x][y]; 
      }
   }
    

    // imprimir os valores de uma matriz

    for (x=0; x<3; x++)
   {
      for(y=0; y<3; y++)
      {
        printf("%d ", matSoma[x][y]);
      }
      printf("\n");
   }





    return 0;
}