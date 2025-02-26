#include <stdio.h>

int main()
{
    float h, r, c, qlat, area, litro;
    
    printf("Entre com o valor da Altura e do Raio\n");
    scanf("%f", &h);
    scanf("%f", &r);
    area = (3.14*r*r)+(2*3.14*r*h);
    litro = area/3;
    qlat = litro/5.;
    c = qlat*10;
    printf("O custo da pintura e' de R$:%f\n", c);
    printf("O gasto total de latas e' de:%f", qlat);

    return 0;
}
