#include <stdio.h>

int main ()
{
   int codigo=0, num_parcelas=0, pagamento=0, continuar;
   int valor=0, pagar=0, desconto=0;
  
  do
  {
    printf("Digite o codigo do seu produto.:\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
     case 1200:
      valor = 5;
      valor++;
     break;

     case 1300:
      valor = 6.30;
      valor++;
     break;

     case 1400:
      valor = 4.25;
      valor++;
     break;

     case 1500:
      valor = 5.50;
      valor++;
     break;
     case 1600:
      valor = 1;
      valor++;
     break;
     case 1700:
      valor = 7;
      valor++;
     break;
     case 1800:
      valor = 3.19;
      valor++;
     break;
     case 1900:
      valor = 9.30;
      valor++;
     break;
     case 2000:
      valor = 8;80;
      valor++;
     break;
    }

    printf("Deseja continuar: 1. sim 2. nao\n");
    scanf("%d", &continuar);
  }
   while (continuar == 1);

   printf("Existem 3 possibilidades de pagamento, qual delas vc gostaria?\n ");
   printf("1.  A vista com desconto de 10%\n 2 - A prazo\n 3 - no crediario com um acrescimo de 5% \n ");
   scanf("%d", &pagamento);

  switch (pagamento)
  {
    case 1:
    {
     desconto = valor * 5/100;
     pagar = valor - desconto;
     printf("O valor a ser pago e' %d\n", pagar); break;
    }
    case 2:
    {
     printf("Qual seria o numero de parcelas?\n");
     scanf("%d", &num_parcelas);
     printf("O valor a ser pago e' %d em %d vezes.", valor, num_parcelas); break;
    }
    case 3:
    {
    pagar = valor * 1.05;
    printf("Qual seria o numero de parcelas?\n");
    scanf("%d", &num_parcelas);
    printf("Total a pagar e' %d", pagar); break;
    }
  }

    return 0;
}