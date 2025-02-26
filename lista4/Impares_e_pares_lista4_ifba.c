#include <stdio.h>

int main ()
{
   int vetor[5];
   int i;

   // carregar o vetor com engtradas do usuario

   for (i=0; i<5;i++)
   {
       printf("Digite um numero:\n");
       scanf("%d", &vetor[i]);
   }

   // verificar se é par ou ímpar

   printf("Os numeros pares sao:\n");

   for(i=0; i<5;i++)
   {
        if (vetor[i] %2 == 0)
          printf("%d ", vetor[i]);     
   } 
   printf("\nOs numeros impares sao:\n");

   for(i=0; i<5;i++)
   {
        if(vetor[i] %2 != 0) 
          printf("%d ", vetor[i]);          
   }

    return 0;
}