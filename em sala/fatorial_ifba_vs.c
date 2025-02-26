#include <stdio.h>

int main ()
{
   int num, fatorial=1, m;

   printf("Escolha um numero:\n");
   scanf("%d", &num);
   
   for (m=1 ;m <= num; m++)
   {
       fatorial *= m; 
      printf("%d.", m);
   }
   
    printf ("\nFatorial desse numero e':\n %d\n", fatorial);
    
    return 0;
}