#include <stdio.h>

int main ()
{
    int a,b,c;

    printf("Digite um valor para A:\n");
    scanf("%d", &a);
    printf("Digite um valor para B:\n");
    scanf("%d", &b);

    if (a==b)
    {
     c = a+b;
     printf("A soma deles e': %d", c);
    }
    else
    {
     c=a*b;
     printf("A multiplicacao e': %d", c);
    }

return 0;

}
