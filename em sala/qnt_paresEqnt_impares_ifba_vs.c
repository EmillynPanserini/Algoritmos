#include <stdio.h>

int main(){
   
   int num, qtd_par=0, qtd_impar=0, i;

   for (i=0; i<10;i++)
   {
     printf("Digite 10 numeros:\n");
     scanf("%d", &num);
   
     if (num%2==0)
       {
         qtd_par++;
       }
     else 
       {
         qtd_impar++;
       }
   }
   printf("----------------------------\n");
   printf("A quantidade de pares e': %d\n", qtd_par);
   printf("A quantidade de impares e': %d\n", qtd_impar);
   


    return 0;
}