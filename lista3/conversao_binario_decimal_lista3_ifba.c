#include <stdio.h>


int main ()
{
   // conversao decimal para binario

   int decimal;

   printf("Digite um numero decimal\n");
   scanf("%d", &decimal);
    
    while(decimal>1)
    {
     if (decimal%2 == 0)
     {
       printf("0");
     }
     else 
       printf("1");

      decimal = decimal/2;
    }
     
     printf("1");
   
    


    return 0;
}