#include <stdio.h>

int main ()
{
    int a, b, c,z;

    printf("Informe um valor inteiro para A.\n");
    scanf("%d", &a);
    printf("Informe um valor inteiro para B.\n");
    scanf("%d", &b);
    printf("Informe um valor inteiro para C.\n");
    scanf("%d", &c);
     
    
    if (a+b<c)
      printf("%d + %d e' menor que %d", a,b,c);
    else
      printf("%d + %d e' maior que %d", a, b, c);


    return 0;
}