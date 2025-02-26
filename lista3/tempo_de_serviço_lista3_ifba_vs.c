
#include <stdio.h>
#include <string.h>

int main ()
{
    int  tempo, i=0, maior=0, menor;
    char nome[60], nomeMenor[60], nomeMaior[60];

    for (i=0; i<=10; i++)
    {
        printf("Qual o seu nome?\n");
        scanf(" %s", &nome);
        printf("Qual seu tempo de servico?(em meses)\n");
        scanf("%d", &tempo);

  
        if (tempo>maior)
        {
          strcpy (nomeMaior, nome);
          maior = tempo;
        }
        if (tempo>menor && menor == 0)
        {
          strcpy(nomeMenor, nome);
        }
        if (tempo<menor)
        {
          strcpy (nomeMenor, nome);
          menor = tempo;
        }



    }
      printf ("O funcionario com menor tempo de servico e' %s\n", nomeMenor);
      printf ("O funcionario com maior tempo de servico e' %s", nomeMaior);


    return 0;
}