#include <stdio.h>

int main ()
{
   int i;
   int posicao=0, cont =0, valor;
   int vetor[10];


   printf("Programa para inserir valores no vetor em ordem crescente:\n");
   
   
    do
    {
        // usuario diz qual o valor que deseja
        printf("Informe os valores em ordem crescente:\n");
        scanf("%d", &valor);

        //buscar o maior elemento

        while(vetor[posicao]<valor && vetor[posicao] != 0)
        {
            posicao++;
        }
        // desloca os elementos para frente
        for(i= cont; i>=posicao; i--)
        {
            vetor[i+1] = vetor[i];
        }
        cont++;
        vetor[posicao] = valor;

        //exibir ao usuario
        for(i= 0; i<cont; i++)
         printf("Numeros dos vetores: %d \n", vetor[i]);
    }while(valor != -1 && cont < 10);
   
  


    return 0;
}