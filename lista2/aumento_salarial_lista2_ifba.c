#include <stdio.h>

int main ()
{
    int codigo;
    float salario, novo_salario, diferenca, resultado;

    printf("Informe seu salario:\n");
    scanf("%f", &salario);
    printf("informe seu codigo:\n");
    scanf("%d", &codigo);

    if(codigo == 310)
    {
       resultado = salario*0.05;
       novo_salario = resultado+salario;
       diferenca = novo_salario - salario; 
       printf("Seu salario e':\n %.f", novo_salario);
       printf("A diferenca do seu antigo para o atual e' %f - %f = %f", novo_salario, salario, diferenca);
    }
    else if (codigo == 456)
    {
       resultado = salario*0.075;
       novo_salario = resultado + salario;
       diferenca = novo_salario - salario; 
       printf("Seu salario e':\n %.f\n", novo_salario);
       printf("A diferenca do seu antigo para o atual e' %.2f - %.2f = %.2f", novo_salario, salario, diferenca);
    }
    else if (codigo == 885)
    {
       resultado = salario*0.1;
       novo_salario = resultado + salario;
       diferenca = novo_salario - salario; 
       printf("Seu salario e':\n %.f\n", novo_salario);
       printf("A diferenca do seu antigo para o atual e' %.2f - %.2f = %.2f", novo_salario, salario, diferenca);
    }
    else
    {
        resultado = salario*0.15;
        novo_salario = resultado + salario;
        diferenca = novo_salario - salario; 
        printf("Seu salario e':\n %.f\n", novo_salario);
        printf("A diferenca do seu antigo para o atual e' %.2f - %.2f = %.2f", novo_salario, salario, diferenca);
    }


        return 0;
}

/* salario * 0.15 = x
   x + salario = salario atual
*/
  