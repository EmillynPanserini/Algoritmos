#include <stdio.h>

int main ()
{
    int ano;
    float valorTabela, valorTaxa;

    printf("Informe o ano do seu carro.\n");
    scanf("%d", &ano);
    printf("Informe o valor de tabela do carro.\n");
    scanf("%f", &valorTabela);


    if (ano<=1990)
    {
      valorTaxa = valorTabela * 10/100;
      printf("O valor da taxa a ser pago e':R$: %.2f", valorTaxa);
    }
     
    else 
     {
       valorTaxa = valorTabela *3/100;
       printf("O valor da taxa a ser pago e': R$: %.2f", valorTaxa);

     }

    return 0;
}