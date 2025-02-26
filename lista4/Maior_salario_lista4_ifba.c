#include <stdio.h>

int main ()
{
    float salario [10], aux;
    int i, j;
    
    printf("O maior dos salarios:\n");
    // dados recebido dos usuários
    for (i=0; i<10; i++)
    {
        printf("Informe seu salario:\n");
        scanf("%f", &salario[i]);
    }
    for (i=0; i<10; i++)
    {
       for (j=0; j<10-i; j++)
       {
           if (salario[j]> salario[j+1])
            {
             aux = salario[j];
             salario[j]= salario[j+1];
             salario[j+1]=aux;
            }
       }
    }
    printf("O maior salario e' %.2f", salario[9]);

    return 0;
}