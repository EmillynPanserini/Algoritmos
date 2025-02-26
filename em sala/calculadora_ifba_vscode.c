#include <stdio.h>

int main() {
    int x , y;
    float total;
    
    printf("Vamos somar valores\n");
    printf ("Digite um numero para x:");
    scanf("%d" ,&x);
    printf("Digite um numero para y:");
    scanf("%d" ,&y);
    total = x + y;
    printf("A soma desses dois números e: %d + %d = %f" ,x,y, total);

  return 0;
  }
