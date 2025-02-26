#include <stdio.h>

int main ()
{
    int x,y, cubo, resultado;    
    float z;

    printf("Entre com o valor de X\n");
    scanf("%d", &x);
    cubo = x*x*x;
    printf("%d ao cubo =%d\n",x,cubo);
    printf("Entre com o valor de Y\n");
    scanf("%d", &y);
    printf("O resultado de X+Y = %d + %d = %d", x,y, resultado);
    z = x/y;
    printf("%.f\n",z);
    z = (int)z;
    printf("%.f\n",z);
    z = z + 1;
    x =(int) (y+z) %2;
    printf("%d",x); 


    return 0;
}
    