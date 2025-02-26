#include <stdio.h>
#include <string.h>

int main ()
{
   int aux, i, j, num[6];

   // receber dados do usuário
   for (i=0; i<6; i++)
   {
       printf("Digite os valores dos vetores:\n");
       scanf("%d", &num[i]);
   }
  //ordenar os vetores
   for (i=0; i<5; i++)
   {
      for(j=0; j<5-i; j++)
      {
         if(num[j]> num[j+1])
         {
             aux = num[j];
             num[j]= num[j+1];
             num[j+1]=aux;
         }
      }
          
   }
 //imprimir
   for (i=0; i<6; i++)
   {
   printf("%d ", num[i]);
   }

    return 0;
}