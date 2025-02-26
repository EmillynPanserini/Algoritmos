#include <stdio.h>

int main ()
{
    int x=0, y=0, soma, somaS=0;
    int mat[2][2] = {1,2,3,4};

    printf("Programa para somar a diagonal principal:\n");

    // realização da soma

    while ( x<2 && y<2)
    {
        soma += mat[x][y];
        x++;
        y++;
    }

    printf("A soma da diagonal principal e' %d\n", soma);

    // soma da diagonal secundaria

    x=1; y=0;

    while ( x>=0 && y<2)
    {
        somaS += mat[x][y];
        x--;
        y++;
    }
    printf("A soma da diagonal secundaria e' %d", somaS);





    return 0;
}