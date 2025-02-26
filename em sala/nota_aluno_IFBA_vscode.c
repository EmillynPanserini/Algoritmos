#include <stdio.h>

int main ()
{
    float x;
    printf("Me informe sua nota de prova:\n");
    scanf("%f", &x);
    
    if (x>=7)
    {
        printf("Parabens voce foi aprovado.");
    }
    else 
    {
        if (x>=4)
         printf("Voce tem direito a recuperacao.");
        else
         printf("Tente novamente no proximo semestre, reprovado.");
        
    }
        






    return 0;
}