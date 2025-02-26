#include <stdio.h>

int main ()
{
    float credito, saldo;

    printf("Digite seu saldo:\n");
    scanf("%f", &saldo);

    if (saldo >= 0 && saldo <201)
        printf("Nenhum credito\n");

    else if (saldo >= 201 && saldo <401)
    {
        credito = saldo * 0.2;
        printf("%.f, %.f", saldo, credito);
    } 
    else if (saldo >=401 && saldo < 601)
    {
        credito = saldo * 0.3;
        printf("%.f, %.f", saldo, credito);
    }
    else 
    {
        credito = saldo * 0.4;
        printf("%.f, %.f", saldo, credito);
    }



    return 0;
}

/*
(saldo >= 201 && saldo <201)
        credito = saldo * 0.2;
        printf("%.f, %.f", saldo, credito);

*/