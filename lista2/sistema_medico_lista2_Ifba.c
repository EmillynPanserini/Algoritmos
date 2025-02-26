#include <stdio.h>

int main ()
{
    int idade;
    float peso;

    printf("Informe sua idade:\n");
    scanf("%d", &idade);
    printf("Informe seu peso:\n");
    scanf("%f", &peso);

    if (idade>=12 && peso>=60)
    { 
         printf("Tome 1000mg/1ml, ou seja, 20 gotas.");
    }  
    else if (idade < 12 && peso >= 5 && peso <= 9)
    {
         printf("Tome 125mg/0.125ml, ou seja, 3 gotas.");
    }
    else if(idade<12 && peso>= 9.1 && peso <= 16)
    {
        printf("Tome 250mg/0.250, ou seja, 5 gotas.");
    }
     else if (idade<12 && peso>=16.1 && peso<=24)
    {
        printf("Tome 350mg/0.350, ou seja, 7 gotas");
    }    
    else if (idade<12 && peso>=24.1 && peso<=30)
    {
        printf("Tome 500mg/0.500, ou seja, 10 gotas");
    }
     else if (idade<12 && peso>30)
    {
        printf("Tome 500mg/0.500, ou seja, 10 gotas");
    }
    else 
    {
        printf("Tome 750mg/0.750ml, ou seja, 15 gotas.");
    }
    return 0;
}