#include<stdio.h>

int main ()
{
   int escolha;
   float km, conversaoParaMs, ms;

   while (escolha != 0)
   {
     printf("Qual voce gostaria converter de km/h para ms/h, o contrario ou encerrar\n");
     printf ("1. km/h para m/s\n2. m/s para km/h\n0. Encerrar\n");
     scanf("%d", &escolha);
     
   
   
     if(escolha == 1 )
     {
       
       printf("Digite um numero para km/h\n");
       scanf("%f", &km);
       conversaoParaMs =  km * 3.6;
       printf("O resultado e' %fm/s\n", conversaoParaMs);
     }
     
     else if (escolha ==2 )
     {
        printf("Digite um numero para m/s\n");
       scanf("%f", &ms);
       conversaoParaMs =  ms / 3.6;
       printf("O resultado e' %fkm/h\n", conversaoParaMs);
     }

   }
    
   
 


    return 0;
}