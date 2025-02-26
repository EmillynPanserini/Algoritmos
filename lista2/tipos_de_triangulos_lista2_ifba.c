#include <stdio.h>

int main ()
{
    int a,b,c;
    printf("informe a medida do lado a:\n");
    scanf("%d", &a);
    printf("informe a medida do lado b:\n");
    scanf("%d", &b);
    printf("informe a medida do lado c:\n");
    scanf("%d", &c);

    if (a=b)
    printf("O triangulo e' isosceles.");
    else if (a=b=c)
    printf("O triangulo e' equilatero.");
    else
    printf("O triangulo e' Escaleno.");


    return 0;
}