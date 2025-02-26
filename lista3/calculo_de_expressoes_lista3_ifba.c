#include <stdio.h>

int main ()
{
    int cima=0, prox, ant=1, atual=1, divisao, s=100;
    printf("S=100\n\n");
    printf("%d\n- +S=%d\n%d\n\n", cima, s, atual);

    for (int cima = 5; cima <=80; cima +=5)
    {
        prox = ant + atual;
        ant = atual;
        atual = prox;
        divisao = cima/prox;
        s = s+ divisao;
        printf("%d\n%d\n\n", cima, prox);
        
    }

    return 0;
}






/*
int ant = 1, atual =2,prox;
int s = 100;
for (int cima = 0; cima <=80; cima +=5);
prox = ant + atual
ant = atual;
atual = prox;
divisao = cima/prox;
s = s+ divisao;

*/