#include <stdio.h>

int main ()
{
    int x, y;
    int matriz [3][3];

    //inserir valores

    for (x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            printf("Digite valores para a mat[%d] e mat[%d]:\n", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    // exibir a matriz

    for (x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            printf("   mat[%d][%d] = %d", x, y, matriz[x][y]);
        }
        printf("\n");
    }

    
    // imprime a diagonal principal


    printf("Diagonal principal:");

    for(x=0; x<3; x++)
    {
      printf(" %d", matriz[x][x]);
    }

    // imprime a diagonal secundária

    for(x=3; x>=0; x--)
    {
      printf(" %d", matriz[x][x]);
    }
    
    
    
        for(y=3; y>=0; y--)
        {
            printf("%d", &matriz[y][y]);
        }
    


     //  for(x=3; x>=0; x--)
    





    return 0;
}