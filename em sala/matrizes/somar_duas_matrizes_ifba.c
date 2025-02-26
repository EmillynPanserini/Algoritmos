#include <stdio.h>

int main ()
{
    int x, y, soma;
    int mat[2][3], mat2[2][3];

    printf("Programa para somar duas matrizes:\n");

    // carregar as matrizes com valores dos usuarios

    for(x=0; x<2; x++)
    {
        for(y=0; y<3; y++)
        {
            printf("Digite valores para mat[%d][%d]: ", x, y);
            scanf("%d", &mat[x][y]);
        }
    }
    for(x=0; x<2; x++)
    {
        for(y=0; y<3; y++)
        {
            printf("Digite valores para mat[%d][%d]: ", x, y);
            scanf("%d", &mat2[x][y]);
        }
    }

    // somando as duas matrizes 

    for(x=0; x<2; x++)
    {
        for(y=0; y<3; y++)
        {
            soma += mat[x][y] + mat2[x][y];
        }
    }
    printf("A soma das matrizes e' %d", soma);




    return 0;
}