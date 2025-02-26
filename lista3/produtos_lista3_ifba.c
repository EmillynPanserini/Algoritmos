#include <stdio.h>

int main ()
{
   int cont=0, cont2=0, contProduto =0;
   float id, valor=0, soma =0, media = 0,maisCaro=-1;
   float percent=0, novoValor=0, novoPercent=0; 

   while (id != 0)
   {
     contProduto++;
     printf("Digite o id do produto:\n");
     scanf("%f", &id);
     printf("Digite o valor:\n");
     scanf("%f", &valor);
     printf("Qual o percentual do aumento?\n");
     scanf("%f", &percent);
     novoPercent = valor * percent/100;
     novoValor = novoPercent + valor;
     if (novoValor>100 && percent>5)
       cont++;
     if (percent==0)
     {
       soma = soma + valor; 
       cont2++;
     }
     if(novoValor>maisCaro)
      maisCaro=novoValor;
   } 
   
   media = soma/cont2;
   if(contProduto>0)
   {
     printf("A quantidade de produtos mais caros que 100 e aumento 5 e' %d\n", cont);
   
      if(cont2>0)
      {
       printf("A media de valor dos produtos que nao sofreram aumento e' %f\n", media);
      }
      else
      {
       printf("Nao tem produtos sem aumento\n");
       printf("O valor do produto mais caro(apos o aumento) e' %f", maisCaro);
      }
   }
   else 
    printf("Nenhum produto informado");

    return 0;
}