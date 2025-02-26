#include <stdio.h>

int main ()
{
    int nivel, salario, horaAula;

    printf("Qual o seu nivel?\n1.Nivel 1\n2.Nivel 2.\n3.Nivel 3.\n");
    scanf("%d", &nivel);
    printf("Quantas horas ou aulas voce tem?\n");
    scanf("%d", &horaAula);

    switch (nivel)
    {
       case 1:
       {
        salario = horaAula * 12;
        printf("Seu salario e' %d", salario);break;
       }
       case 2:
       {
        salario = horaAula * 17;
        printf("Seu salario e' %d", salario);break;
       }
       case 3:
       {
        salario = horaAula * 25;
        printf("Seu salario e' %d", salario);break;
       }
       default:
        printf("Opcao invalida");


    }


    return 0;
}