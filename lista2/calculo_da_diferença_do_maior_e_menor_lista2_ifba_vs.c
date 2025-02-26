#include <stdio.h>

int main ()
{
    int a, b, c;

    printf("Informe um numero inteiro.\n");
    scanf("%d", &a);
    printf("Informe outro numero inteiro.\n");
    scanf("%d", &b);

    if (a>b)
    {
     c = a - b;
     printf("A diferenca e' %d - %d = %d", a,b,c);
    }
    else
    {
     c = b - a;
     printf("A diferenca e' %d - %d = %d", b,a,c);
    }
    return 0;
}