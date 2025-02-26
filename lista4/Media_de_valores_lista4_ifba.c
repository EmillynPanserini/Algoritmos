#include <stdio.h>

int main ()
{
   // defini o valor de n como 50
   float vetor[50], soma, media;
   int i;

   printf("Media aritmetica:\n");

   //recebendo dados do usuário
   for (i=0; i<50; i++)
   {
       printf("Insira um valor:\n");
       scanf("%f", &vetor[i]);
       soma += vetor[i];
   }

   // fazendo o calculo da media

   for(i=0; i<50; i++)
   {
       media = soma/50;
   }
   printf("A media dos valores %.2f", media);
   
    return 0;
}