#include <stdio.h>

int main ()
{
    int a,b,c;

    printf("Informe um valor inteiro para o lado A.\n");
    scanf("%d", &a);
    printf("Informe um valor inteiro para o lado B.\n");
    scanf("%d", &b);
    printf("Informe um valor inteiro para o lado C.\n");
    scanf("%d", &c);
    
    if (a<b+c)
     printf("Valores  informados correspondem aos lados de um triangulo. ");
    else if (b<a+c)
     printf("Valores  informados correspondem aos lados de um triangulo.");
    else if (c<a+b)
     printf("Valores  informados correspondem aos lados de um triangulo.");
    else 
     printf("Nao forma um triangulo.");

    return 0;
}