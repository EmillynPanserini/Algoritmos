#include <stdio.h>

int main ()
{
   int x, y;
   int mat[3][3] = {1,2,3,4,5,6,7,8,9};
   int matTriangular[3][3] = {1,2,3,4,5,6,7,8,9};

   printf("Programa para fazer um triangulo de zeros:\n");

   // zerar a parte de inferior da matriz

   for (x=0; x<3; x++)
   {
     for(y=0; y<3; y++)
     {
        if (x>y)
         matTriangular[x][y] = 0;
     }
   }
   // imprimir a matriz

    // zerar a parte de superior da matriz

   for (x=0; x<3; x++)
   {
     for(y=0; y<3; y++)
     {
        if (x<y)
         matTriangular[x][y] = 0;
     }
   }

   for (x=0; x<3; x++)
   {
     for(y=0; y<3; y++)
     {
        
        printf("%d ", matTriangular[x][y]);
     }
     printf("\n");
   }







    return 0;
}