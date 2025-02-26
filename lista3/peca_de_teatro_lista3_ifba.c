#include <stdio.h>
#include <string.h>

int main ()
{
    int idade=0, opiniao, i, media=0, somaid=0, percent, somaO, cont=0, idadeMaisVelha=0;
    char nome [60];
    char  nomeOld [60];

    for (i=1; i<=200;i++)
    {
     printf("Qual a sua idade?\n");
     scanf("%d", &idade);
     somaid = somaid + idade;
     printf("Qual o seu nome?\n");
     scanf("%s", nome);
     printf("De 0 a 10, qual sua opiniao em relacao a peca?\n");
     scanf("%d", &opiniao);
     if(opiniao == 10)
     cont++;
     if (opiniao<=5)
     somaO++;
     if (idade>idadeMaisVelha)
     { 
        idadeMaisVelha =  idade;
        strcpy (nomeOld, nome);
     }
    }
     printf("A quantidade de 10 foi %d\n", cont);
     media = somaid/200;
     printf("A media da idade das pessoas e' %d\n", media);
     percent = (somaO* 100)/200;
     printf("A percentagem de pessoas que responderam 5 ou menos para opniao e' %d\n", percent);
     printf("A pessoa mais velha e' %s", nomeOld);

    

    return 0;
}
