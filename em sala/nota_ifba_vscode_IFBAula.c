#include <stdio.h>

int main () 
{
    float nota, nota2, nota3, ma, me;

    printf("Informe sua primeira nota:\n");
    scanf("%f", &nota);
    printf("Informe sua segunda nota:\n");
    scanf("%f", &nota2);
    printf("Informe sua terceira nota:\n");
    scanf("%f", &nota3);
    printf("Informe sua media de exercicios.\n");
    scanf("%f", &me);

    ma = (nota+nota2*2+nota3*3+me)/7;

    if(ma>=90) 
       printf("Parabens voce tirou A, foi aprovado!");
      
    else if (ma>=75 && ma<90)
       printf("Parabens voce tirou B, foi aprovado!");
    else if (ma>=60 && ma<75)
       printf("Parabens voce tirou C, foi aprovado!");
    else if (ma>=40 && ma < 60)
       printf("Infelizmente voce tirou D, foi reprovado!");
    else
       printf("Infelizmente voce tirou E, foi reprovado!");
      

return 0;
}