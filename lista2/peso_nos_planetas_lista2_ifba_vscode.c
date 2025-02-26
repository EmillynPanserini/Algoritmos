#include <stdio.h>

int main ()
{
    int planeta;
    float  pesoTerra, pesoOutro;

    printf("Informe seu peso:\n");
    scanf("%f", &pesoTerra);
    printf("Escolha um dos planetas abaixo para saber seu peso neles:\n");
    printf("1.Mercurio.\n2.Venus.\n3.Marte.\n4.Jupiter.\n5.Saturno.\n6.Urano.\n");
    scanf("%d", &planeta);

    switch (planeta)
    {
      case 1:
       pesoOutro = pesoTerra*0.37;
       printf("Seu peso em Mercurio e': %.2f", pesoOutro);break;
      case 2:
       pesoOutro = pesoTerra*0.88;
       printf("Seu peso em Venus e'%.2f", pesoOutro);break;
      case 3:
       pesoOutro = pesoTerra*0.38;
       printf("Seu peso em Marte e'%.2f", pesoOutro);break;
      case 4:
       pesoOutro = pesoTerra*2.64;
       printf("Seu peso em Jupiter e'%.2f", pesoOutro);break;
      case 5:
       pesoOutro = pesoTerra*1.15;
       printf("Seu peso em Saturno e': %.2f", pesoOutro);break;
      case 6:
       pesoOutro = pesoTerra*1.17;
       printf("Seu peso em Urano e': %.2f", pesoOutro);break;
      default:
       printf("Informacao incorreta.");

    }


    return 0;
}