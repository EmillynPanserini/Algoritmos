#include <stdio.h>

int main()

{
    int vetor[5], i, soma=0, media =0;

    for( i = 0; i<5; i++)
    {
        printf("Digite 5 vetores\n");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    for(i=0; i<5; i++)
    {
        printf("Vetor [%d]= %d\n", i, vetor[i]);
    }
    printf("A soma dos vetores e' %d\n", soma);
    media = soma/5;
    printf("A media dos vetores e' %d\n", media);

    // ordem inversa de um vetor 
    
    for(i=4;i>=0;i--)
    {
        printf("Vetor[%d]=%d\n",i, vetor[i] );
    }
    for(i= 0; i<5; i++)
    {
         vetor[i] = vetor[i];
        printf(" %d\n", vetor[i]);
    }
    
    


    return 0;
}