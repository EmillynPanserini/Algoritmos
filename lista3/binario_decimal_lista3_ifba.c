#include <stdio.h>
#include <math.h>

int main ()
{
    int binario, resto =0, produto =0, i =0;
    
    
    printf("Digite um numero em binario.\n");
    scanf("%d", &binario);
    for (i=0; i<=9; i++)
    {
        resto = binario%10;
        produto = produto + resto*pow(2,i);
        binario/=10;
    }
    printf("O numero convertido para decimal e': %d", produto);


    return 0;
}