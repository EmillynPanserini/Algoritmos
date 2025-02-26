#include <stdio.h>

int main ()
{
    int x, y, z;

    printf("Digite um numero inteiro para x\n");
    scanf("%d", &x);
    printf("Digite um numero inteiro para y\n");
    scanf("%d", &y);
    printf("Digite um numero inteiro para z\n");
    scanf("%d", &z);

    if (x<y && y<z)
       printf("%d, %d, %d", x,y,z);
    else if (x<y && z<y)
       printf("%d, %d, %d", x,z,y);
    else if (y<x && x<z)
       printf("%d, %d, %d", y,x,z);
    else if (y<z && z<x)
       printf("%d, %d, %d", y,z,x);
    else if (z<x && x<y)
       printf("%d, %d, %d", z,x,y);
    else 
       printf("%d, %d, %d", z,y,x);


    return 0;
}