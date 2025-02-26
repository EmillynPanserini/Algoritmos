#include <stdio.h>

int main ()
{
   int matriz [3][3];
   int i=0, j=0;

// Usuário da entrada em valores e carrega a matriz:
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("Digite valores para mat[%d] e mat[%d]:\n", i, j);
           scanf("%d", &matriz[i][j]);
       }
   }
   // imprimir os valores da matriz:

   for(i=0; i<3;i++)
   {
       for(j=0; j<3;j++)
       {
           printf("mat [%d][%d] = %d ",i, j, matriz[i][j]);
       }
       printf("\n");
   }




    return 0;
}