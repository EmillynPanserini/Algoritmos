#include <stdio.h>

int main ()
{
    int x, y, cont = 0;
    int mat[2][2] = {1,2,3,4};
    int mat2 [2][2] = {1,2,3,4};

    printf("Programa para verificar se duas matrizes sao iguais:\n");

    for(x=0; x<2; x++)
    {
       for(y=0; y<2; y++)
       {
          if(mat[x][y] == mat2[x][y])
           cont++;
       }
    }
    if(cont == 4)
      printf("Matrizes iguais.");
    else
      printf("Matrizes diferentes.");
   



    return 0;
}
