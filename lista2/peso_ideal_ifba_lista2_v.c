#include <stdio.h>

int main ()
{
    int sexo;
    float altura, pesoIdeal, pesoIdeal2;
    printf("Informe seu altura em metros:\n");
    scanf("%f", &altura);
    printf("informe seu sexo:\n1.Feminino.\n2.Masculino\n. ");
    scanf("%d", &sexo);

    switch (sexo)
    {
    case 1:
        pesoIdeal = 62.1*altura - 44.7;
    printf("Seu peso ideal e' %.f", pesoIdeal);break;
       
    default:
    
    pesoIdeal2 = 72.7*altura - 58;
    printf("Seu peso ideal e' %.f", pesoIdeal2);
    }

    return 0;
}