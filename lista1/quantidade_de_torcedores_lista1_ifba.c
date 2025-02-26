#include <stdio.h>

int main ()
{
    int qnt_pessoas;
    printf("Informe a quantidade de pessoas que assistiram a partida de futebol\n");
    scanf("%d", &qnt_pessoas);

    if (qnt_pessoas<1000)
    {
        printf("Publico baixo.");
    }
    else if (qnt_pessoas>=1001 && qnt_pessoas<=10000)
    {
        printf("Publico medio");
    }
    else
    {
        printf("Publico bom");
    }
    return 0;
}