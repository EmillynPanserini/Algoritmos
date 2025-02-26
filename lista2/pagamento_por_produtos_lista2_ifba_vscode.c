#include <stdio.h>

int main ()
{
   int formaPagamento;
   float valorProduto, valorFinal, desconto,juros;
   printf("Informe o valor do produto.\n");
   scanf("%f", &valorProduto);
   printf("As formas de pagamento sao:\n1.A vista em dinheiro ou cheque.\n2.A vista no cartao de credito.\n3.Em duas vezes.\n4.Em tres vezes.\n");
   printf("informe a forma de pagamento.\n");
   scanf("%d", &formaPagamento);

   switch (formaPagamento)
   {
     case 1:
      desconto = valorProduto*0.01;
      valorFinal = valorProduto-desconto;
      printf("O novo valor do produto a ser pago e': %.2f", valorFinal);break;
     case 2:
      desconto = valorProduto*0.15;
      valorFinal = valorProduto-desconto;
      printf("O novo valor do produto a ser pago e': %.2f", valorFinal);break;
     case 3:
      printf("Valor que esta na etiqueta sem juros.");break;
     case 4:
      juros = valorProduto*0.01;
      valorFinal = valorProduto+juros;
      printf("O novo valor do produto a ser pago e': %.2f", valorFinal);break;
     default:
      printf("Forma invalida.");break;

   }


    return 0;
}