#include <stdio.h>

int main ()
{
    int ini=0, final, cont=0;

    printf("Digite um numero.\n");
    scanf("%d", &ini);
    printf("Digite outro numero.\n");
    scanf("%d", &final);
     
    for(int num = ini; num<=final; num++)
    {
       for ( int i = 1; i<=num; i++)
       {
         if(num% i == 0)
           cont++;
       }
    
      if (cont==2)
      {
        printf("%d ", num);
      }
      cont = 0;
    }
    return 0;
}