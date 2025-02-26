#include <stdio.h>

int main()
{

    int quantia, notas;

    printf("Digite a quantia que deseja sacar\n");
    scanf("%d",&quantia);

    if(quantia>=50)
    {
     notas = quantia/50;
     quantia = quantia%50;
     printf("%d notas de 50\n",notas);
    }
    if(quantia>=10)
    {
     notas = quantia/10;
     quantia = quantia%10;
     printf("%d notas de 10\n",notas);
    }
    if(quantia>=5)
    {
     notas = quantia/5;
     quantia = quantia%5;
     printf("%d notas de 5\n",notas);
    }
    if(quantia>=1)
    {
     notas = quantia/1;
     quantia = quantia%1;
     printf("%d notas de 1\n",notas);
    }

return 0;	
}