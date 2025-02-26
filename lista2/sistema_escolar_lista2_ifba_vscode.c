#include <stdio.h>

int main()
{
    float freq, nota;

    printf("Informe sua porcentagem de frequencia nas aulas. Ex:85\n");
    scanf("%f", &freq);
    printf("Informe sua nota.\n");
    scanf("%f", &nota);

    if (freq <= 75)
       printf("Reprovado");

    else if (freq>75 && freq<=100 && nota<=3)
       printf("Reprovado.");
    
    else if (freq>75 && freq<=100 && nota>=3 && nota<=7)
       printf("Exame");
    else
       printf("Aprovado");

    return 0;
}