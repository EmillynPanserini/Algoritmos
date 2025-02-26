#include <stdio.h>

int main ()
{
    int c2, f2;

    printf("Digite um valor para Fahrenheit novamente:");
    scanf("%d", &f2);
    c2 = (f2-32)*5/9;
    printf("C= %d", c2);

    return 0;
}