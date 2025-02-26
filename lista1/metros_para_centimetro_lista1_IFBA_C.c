#include <stdio.h>

int main() 
{
    int valorEmMetro, valorEmMetro2, valorEmMetro3;
    float resultado, resultado2, resultado3;
    
    //Começei por: transformar em centimetros

    printf("Ola, informe um valor em metros (pode ser sua altura) e iremos converter em centimetros\n");
    scanf("%d", &valorEmMetro);
    resultado = valorEmMetro * 100; 
    printf("Isso em centimetros e = %.f\n", resultado );

     //Agora em decimetros

    printf("Agora poderia formar um valor em metros pois iremos converter em decimetros\n");
    scanf("%d", &valorEmMetro2);
    resultado2 = valorEmMetro2 * 10; 
    printf("Isso em decitimetros e = %.f\n", resultado2);

    //Terminei em milimetros

    printf("E nao paramos por ai, podemos tambem converter em milimetros\n");
    scanf("%d", &valorEmMetro3);
    resultado3 = valorEmMetro3 * 1000; 
    printf("Isso em milimetros e = %.f\n", resultado3 );
    return 0;
}