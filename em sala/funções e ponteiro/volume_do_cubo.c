#include <stdio.h>
#include <stdlib.h>

 // programa para calcular o volume de uma esfera
int R;

int volume_esfera (int R)
{
   int v;
   v = 4/3* 3.14*R*R*R;

   return v;
}

int main ()
{
   int result;

   printf("Informe o valor de R:\n");
   scanf("%d", &R);
   result = volume_esfera(R);
   printf("O volume da esfera e': %d", result);

    return 0;
} 

