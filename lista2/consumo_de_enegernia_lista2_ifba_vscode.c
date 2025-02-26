#include <stdio.h>

int main ()
{
    float consumo, valorPago,valorPago2,valorPago3,valorPago4;
    printf("Informe o valor de consumo de energia em kwh do mes:\n");
    scanf("%f", &consumo);

    if (consumo<=199)
    {
      valorPago = consumo*1.202;
      printf("O valor a ser pago e': %.2f", valorPago);
    }
    else if (consumo>199 && consumo<=400)
    {
      valorPago3= consumo*1.504;
      printf("O valor a ser pago e': %.2f", valorPago3);
    }
    else if (consumo>400 && consumo<=600)
    {
        valorPago4= consumo*1.806;
        printf("O valor a ser pago e': %.2f", valorPago4);
    }
    else 
    {
      valorPago2 = consumo*2;
      printf("O valor a ser pago e': %.f", valorPago2);
    }
    return 0;
}