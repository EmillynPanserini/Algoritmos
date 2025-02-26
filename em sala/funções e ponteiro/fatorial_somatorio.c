#include <stdio.h>

// programa para calcular fatorial e somatoria

int fatorial (int n)
{
    int i;
    int f = 1;

    for(i=1; i<=n; i++)
    {
        f =  f*i;
    }
    return f;
}
int somatorio(int x)
{
    int s=0, i;

    for(i=1; i<=x; i++)
    {
        s += i;
    }
    return s;
}


int main ()
{
    int x, num, soma=0;

    printf("Digite um numero para que seja mostrado o fatorial e somatorio:\n");
    scanf("%d", &num);

    if(num>0)
    {
       x  = fatorial (num);
       printf("O fatorial de %d = %d\n", num, x);
    }
    else 
     printf("Digite um numero maior que 0.\n");
    
    soma = somatorio(num);
    printf("O somatorio do numero e': %d", soma);

    return 0;
}