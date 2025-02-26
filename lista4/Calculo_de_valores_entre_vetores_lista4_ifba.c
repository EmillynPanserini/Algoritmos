#include <stdio.h>

int main ()
{
    int X[5], Y[5];
    int i;
    int soma, diferenca, produto, divisao;

    printf("Calculo de valores entre vetores:\n");
    // leitura de dados
    for(i=0; i<5; i++)
    {
        printf("Digite numeros para serem armazenados:\n");
        scanf("%d", &X[i]);
    }
    printf("\n<------------------------------------------------------->\n");
    for(i=0; i<5; i++)
    {
        printf("Digite outros numeros para serem armazenados:\n");
        scanf("%d", &Y[i]);
    }
   // operações com os dados
   printf("\nOperacoes dos vetores (soma, diferenca, produto e divisao):\n");
   for(i=0; i<5; i++)
   {
       soma = X[i] + Y[i];
       printf("X[%d] + Y[%d] = %d\n", i, i, soma);
       printf("\n                                                          \n");

       diferenca = X[i] - Y[i];
       printf("X[%d] - Y[%d] = %d\n", i, i, diferenca);
       printf("\n                                                          \n");

       produto = X[i] * Y[i];
       printf("X[%d] * Y[%d] = %d\n", i, i, produto);
       printf("\n                                                          \n");

       divisao=  X[i] / Y[i];
       printf("X[%d] / Y[%d] = %d\n", i, i, divisao);
       printf("\n                                                          \n");

   }

    return 0;
}