#include <stdio.h>

int main ()
{
    int x, i, userL, sup, inf;
    int matriz [3][4];

    //inserir valores

    for (i=0; i<3; i++)
    {
        for(x=0; x<4; x++)
        {
            printf("Digite valores para a mat[%d] e mat[%d]:\n", i, x);
            scanf("%d", &matriz[i][x]);
        }
    }

    // exibir a matriz

    for (i=0; i<3; i++)
    {
        for(x=0; x<4; x++)
        {
            printf("  mat[%d][%d] = %d", i, x, matriz[i][x]);
        }
        printf("\n");
    }

    // exibir canto superior esquerdo e canto inferior direito

    sup = matriz[0][0];
    printf("O canto superior e' %d\n", sup);
    
    inf = matriz[2][3];
    printf("O canto inferior e' %d\n", inf);
    


    // usuario escolhe a linha
    printf("Escolha a linha que deseja ser imprimida:\n");
    scanf("%d", &userL);



    
  for(i=userL; i<=userL; i++)
    {
        for(x=0; x<4; x++)
        {
            printf("%d \n", matriz[i][x]);
        }
    }
    
    // imprime a diagonal principal

    
        for(i=0; i<3; i++)
        {
            printf(" %d", matriz[i][i]);
        }
       
    





    return 0;
}