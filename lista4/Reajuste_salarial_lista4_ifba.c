#include <stdio.h>

int main ()
{
    float salario[5], aumento = 0.1;
    int i;

    printf("Reajuste salarial:\n");

    // entrada de valores do vetor do usuario
    for (i=0; i<5; i++)
    {
        printf("Informe seu salario:\n");
        scanf("%f", &salario[i]);
    }

    // reajuste de salarios menores que 1000
    for (i=0; i<5; i++)
    {
        if (salario[i] < 1000)
        {
            salario[i] = salario[i] + (salario[i] *aumento);
        }
    }
    

    // lista atualizada de salarios

    printf("A lista de salarios e':\n");
    for(i=0; i<5; i++) 
    {
        printf("%.2f, ", salario[i]);
    }

    return 0;
}