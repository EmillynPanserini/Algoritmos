#include <stdio.h>

int main ()
{
    int x, y;
    int repetido[3][3]={0};
    int matriz [3][3] = {1, 2, 3, 5, 5, 6, 7, 7, 8};

    printf("Programa para encontrar dois elementos repetidos em uma matriz\n");

    // encontrando os elementos

    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            if(matriz[x][y]== matriz[x][y+1])
                repetido[x][y] = matriz[x][y+1];
        }
    }
   

    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
             if(repetido[x][y] != 0)
                printf("%d ", repetido[x][y]);
        }
    }
    
    

    return 0;
}