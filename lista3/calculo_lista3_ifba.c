#include <stdio.h>

int main ()
{
    int num, soma = 0, cont = 0, media =0, maior=0, menor=0, par =0, media2 = 0, soma2, cont2;
    
    while (num != 0)
    {
       printf("Digite 0 para encerrar.\n");
       printf("Digite um numero\n");
       scanf("%d", &num);

       soma = soma + num;
       cont++;
       media = soma/cont;
       if (num>maior)
         maior = num;
       if (num>menor && menor ==0)
         menor = num;
       if(num<menor && num!=0)
         menor = num;
       if (num%2 == 0)
       {
         soma2 += par;
         par = num; 
         cont2++;
       }
    }

    printf("A soma dos numeros e': %d\n", soma);
    printf("A quantidade de numeros e': %d\n", cont - 1);
    media = soma/cont;
    printf("A media dos numeros e': %d\n", media);
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);
    media2 = soma2/cont2;
    printf("A media de numeros pares digitados foi: %d\n", media2);

    return 0;
}