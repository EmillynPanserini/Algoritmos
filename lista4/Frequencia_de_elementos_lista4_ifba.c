#include <stdio.h>

int main ()
{
   int i, x, cont=0;
   int vetor[7], freq[7];

    printf("Programa para saber a frequencia dos elementos:\n");

   // dados recebidos dos usuarios

   for(i=0;i<7;i++)
   {
       printf("Informe um numero:\n");
       scanf("%d", &vetor[i]);
   }

   //zerar freq

   for(i=0;i<7;i++)
   {
       freq[i] = 1;
   }

   // contar a frequencia do vetor

   for(i=0; i<7;i++)
   {
       cont =0;
       for(x=i+1; x<6-i; x++)
       {
           if(vetor[i] == vetor[x])
           {
               cont++;
               vetor[x] = 0;     
               freq[i]= freq[i] + cont;
           }
       }
       if(vetor[i]>0)
         printf("%d -> %d\n", vetor[i], freq[i]);
   }
   




    return 0;
}