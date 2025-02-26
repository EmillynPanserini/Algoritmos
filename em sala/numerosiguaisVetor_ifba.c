#include <stdio.h>

int main ()
{
 //conta o total de numeros elementos duplicados
 // contar o total de numeros unicos

 int num[5], i=0, j=0, cont=0, contAtual=0;
 
 for(i=0; i<5; i++)
       {
         printf("Digite um numero\n");
         scanf("%d", &num[i]); 
       }

 for(i=0;i<5;i++)
 {
   contAtual = cont; 
   for(j=i+1; j<5;j++)
   {
         if (num[i]==num[j])
          cont++;
   }
   if(cont==contAtual)
     printf("O elemento %d e' unico\n", num[i]);
 }
 
 
  printf("A quantidade de duplicados e' %d\n", cont);


    return 0;
}