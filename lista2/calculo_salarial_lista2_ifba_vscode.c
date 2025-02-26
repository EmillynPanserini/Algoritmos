#include <stdio.h>

int main ()
{
    int saldo, credito;

    printf("Qual seu saldo medio?\n");
    scanf("%d", &saldo);

    if (saldo>= 0 && saldo<=200)
     printf("Nenhum credito vigente");
    
    else if (saldo>=201 && saldo<=400)
    {
        credito = saldo * 20/100;  
        printf("Seu saldo e': %d e seu credito e' %d", saldo, credito);
    }
    else if (saldo>=401 && saldo<=600)
    {
        credito = saldo * 30/100;
        printf("Seu saldo e': %d e seu credito e' %d", saldo, credito);
    }
    else 
    {
        credito = saldo * 40/100;
        printf("Seu saldo e': %d e seu credito e' %d", saldo, credito);
    }




    return 0;
}