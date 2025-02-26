#include <stdio.h>

int main() {
    // Algoritmo para o calculo da Media Final

    float P1, P2, P3, MF;

    printf("Entre com o valor das Parciais P1, P2, P3\n");
    scanf("%f", &P1);
    scanf("%f", &P2);
    scanf("%f", &P3);
    MF = (P1 + P2 + P3)/3.0;
    printf("A Media Final e': %.f", MF);
    // valor arredondado caso tenha decimais.
    return 0;
}