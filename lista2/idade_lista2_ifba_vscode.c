#include <stdio.h>

int main ()
{
    int nascimento, ano, idade, futuro, meses, dias;

    printf("Informe seu ano de nascimento.\n");
    scanf("%d", &nascimento);
    printf("Em que ano nos estamos?\n");
    scanf("%d", &ano);

    idade = ano-nascimento;
    printf("Sua idade e' %d\n", idade);
    
    futuro = 2028-nascimento;
    printf("Em 2028 voce tera: %d\n", futuro);

    meses = idade * 12;
    printf("Sua idade em meses e' %d\n", meses);

    dias = idade *365;
    printf("Sua idade em dias e' %d", dias);

    return 0;
}