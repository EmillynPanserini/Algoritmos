#include <stdio.h>

int main ()
{
    int horasT, salario, salarioB, valorHT, imposto, salarioT;
    printf("Informe o seu numero de horas trabalhadas.\n");
    scanf("%d", &horasT);
    printf("Informe seu salario:\n");
    scanf("%d", &salario);

    valorHT = salario* 10/100;
    salarioB =  horasT * valorHT;
    imposto = salario* 3/100;
    salarioT = salarioB-imposto;

    printf("Seu salario final e': %d", salarioT);

    return 0;
}