#include <stdio.h>

int main ()
{
    int x, y, i, soma;
    int mat[2][2]= {1,2,3,4};
    int mat2[2][2]={5,6,7,8};
    int matMult[2][2]={0};

    printf("Programa para multiplicar matrizes:\n");

    // multiplicação

    for (x=0; x<2; x++)
    {
        for (y=0; y<2; y++)
        {
            matMult[x][y]=0;
            for (i=0; i<2; i++)
            {
               soma += mat[x][i] *mat2[i][y];
            }
            matMult[x][y]= soma;
            soma=0;
        }
    }
     for (x=0; x<2; x++)
    {
        for (y=0; y<2; y++)
        {
           printf("%d ", matMult[x][y]);
        }
        printf("\n");
    }





    return 0;
}