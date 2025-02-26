#include <stdio.h>

int main ()
{
    int i=0, num2=0, soma=0;

    while(i<5)
    {
        printf("Digite um numero\n");
        scanf("%d", &num2);
        soma = soma + num2;
        i= i + 1;
       
    }
     printf("resultado da soma de todos os numeros %d\n", soma);
     
    return 0;
}