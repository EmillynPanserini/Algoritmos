#include <stdio.h>

int main ()
{
   int numero;
   printf("digite um numero inteiro:\n");
   scanf("%d", &numero);

   if (2*numero+1)
     printf("Ele e' impar");
   else
     printf("Ele e' par");


    return 0;
}