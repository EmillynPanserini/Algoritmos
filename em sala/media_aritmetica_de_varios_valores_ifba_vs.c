#include <stdio.h>

int main ()
{
   int valor, soma=0, cont=0, media;

   do{
       printf("Diga um valor inteiro.\n");
       scanf("%d", &valor);
       soma = valor + soma;
       cont++;
   }while (valor>=0);
   
       media = soma/cont;
       printf("A media e' %d\n", media);   
    
  return 0;

}