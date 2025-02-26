#include <stdio.h>

int main()
{
    double c, f;

    printf("Voce sabe o valor de Fahrenheit para Celcius? Digite um valor em graus Fahrenheit:\n");
    scanf("%lf", &f);
    c = (f-32.0)*5.0/9;
    printf("Esse valor em celcius e':\n %lf", c);

    int c2, f2;

    printf("Digite um valor para Fahrenheit novamente:");
    scanf("%d", &f2);
    c2 = (f2-32)*5/9;
    printf("C= %d", c2);

 /* 
 Oiii prof, então eu fiz testes para ver o que dava certo e o que nao dava, 
 simplemente o codigo nao compilava ao colocar ele em parenteses, porem 
 testei para ver se o resultado se alterava ao remover, o valor continua o 
 mesmo. ;)
*/

 return 0;
}