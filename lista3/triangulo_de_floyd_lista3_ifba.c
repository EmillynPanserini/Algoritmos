#include <stdio.h>

int main ()
{
    int n;
    int i, e, m=0;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        for(e=1;e<=i;e++){
            m++;
            printf("%d ", m);
        }
        printf("\n");
    }





    return 0;
}