#include <stdio.h>

int main ()
{
    float x,y,z, triplo, quadrado, diferenca,terceiroEprimeiro;
    printf("Digite um numero:\n");
    scanf("%f", &x);
    printf("Digite outro numero:\n");
    scanf("%f", &y);
    printf("Digite mais um numero:\n");
    scanf("%f", &z);

    if (x>0)
    {
        triplo=x*3;
        printf("O triplo de x e' %.f", triplo);
    }
    else if (x<0)
    {
        quadrado = x*x;
        printf("O quadrado de x e' %.f", quadrado);
    }
    else if (y>10 && y<100)
     printf("Numero esta entre 10 e 100. Intervalo permitido.");
 
    else if (z<y)
    {
      diferenca =  y-z;
      printf("A diferenca entre %.f - %.f = %.f", y,z,diferenca);
    }
    else
    {
        terceiroEprimeiro=z+x;
        printf("A soma do terceiro e do primeiro e' %.f", terceiroEprimeiro);
    }
    return 0;
}