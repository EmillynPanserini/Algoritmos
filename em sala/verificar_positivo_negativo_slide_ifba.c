#include <stdio.h>

int main ()
{
   int numero;
   printf("digite um numero inteiro:\n");
   scanf("%d", &numero);

   if (numero>0)
     printf("Ele e' positivo");
   else
     printf("Ele e' negativo");


    return 0;
}