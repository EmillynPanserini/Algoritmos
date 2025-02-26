#include <stdio.h>

int main ()
{
    int prefeito, vereador;
    int cont =0, cont2 =0 , cont3 =0, cont4=0, cont5=0, cont6=0, contN=0, contSupremo=0, contSupremo2;
    int percentualB =0, percentualRo =0, percentualRa =0, percentualJu =0, percentualJe=0, percentualR=0, percentualN =0;
    char continua;

  while (prefeito >= 0) 
  {
      do
      {
         printf("O primeiro voto sera para prefeito, qual voce gostaria?\n");
         printf("1. Bonifacio\n2. Romualdo\n3. Raimundo\n000. nulo\n");
         scanf("%d", &prefeito);

         switch (prefeito)
         {
          case (1):
          {
            printf("O candidato escolhido e' Bonifacio, numero 1 e partido Sol da meia noite\n");
            printf("Digite C para confirmar ou D para corrigir\n");
            scanf(" %c", &continua);
            cont++;
          }
          break;
         case (2):
         {
            printf("O candidato escolhido e' Romualdo, numero 2 e partido: Luz natural da lampada.\n");
            printf("Digite C para confirmar ou D para corrigir\n");
            scanf(" %c", &continua);
            cont2++;
         }
         break;
         case (3):
         {
            printf("O candidato escolhido e' Raimundo, numero 3 e partido: claridade da lua\n");
            printf("Digite C para confirmar ou D para corrigir\n");
            scanf(" %c", &continua);
            cont3++;

         }
         break;
         case 000:
             {
              printf("Digite C para confirmar ou D para corrigir\n");
              scanf(" %c", &continua);
              contN++;
             }
          break;
         }
        } while (continua == 'D');

        do
        {
            printf("Muitdo bem, agora vote em uma vereadora.\n");
            printf("52. Jubiscreida\n26. Romilda\n63. Jesevalda\n000. nulo.\n");
            scanf("%d", &vereador);
    
            switch (vereador)
            {
             case 52:
             {
               printf("A candidata escolhida e' Jubiscreida, numero 52, partido: kda\n");
               printf("Digite C para confirmar ou D para corrigir\n");
               scanf(" %c", &continua);
               cont4++;
             }
             break;
             case 26:
             {
              printf("A candidata escolhida e'  Romilda, numero 26, partido: Emissario da luz\n");
              printf("Digite C para confirmar ou D para corrigir\n");
              scanf(" %c", &continua);
              cont5++;
             }
             break;
             case 63:
             {
             printf("A candidata escolhida e' Jesevalda, numero 63, partido: Emissario da escuridao\n");
             printf("Digite C para confirmar ou D para corrigir\n");
             scanf(" %c", &continua);
             cont6++;
             }
             break;
             case 000:
             {
              printf("Digite C para confirmar ou D para corrigir\n");
              scanf(" %c", &continua);
              contN++;
             }
             break;
            }
        } while (continua == 'D');
  }
   contSupremo = cont +  cont2, cont3, cont4;
   contSupremo2 = cont4 + cont5 + cont6;
   percentualB = (100*cont)/contSupremo;
   percentualRo = (100*cont2)/contSupremo;
   percentualRa = (100*cont3)/contSupremo;
   printf("O numero de votos para o Bonifacio foi %d e seu percentual foi %d\n", cont, percentualB );
   printf("O numero de votos para o Romualdo foi %d e seu percentual foi %d\n", cont2, percentualRo);
   printf("O numero de votos para o Raimundo foi %d e seu percentual foi %d\n", cont3, percentualRa);
   percentualJu = (100*cont4)/contSupremo2;
   percentualR = (100*cont5)/contSupremo2;
   percentualJe = (100*cont6)/contSupremo2;
   printf("O numero de votos para a Jubiscreida foi %d e seu percentual foi %d\n", cont4, percentualJu );
   printf("O numero de votos para a Romilda foi %d e seu percentual foi %d\n", cont5, percentualR);
   printf("O numero de votos para a Jesevalda foi %d e seu percentual foi %d\n", cont6, percentualJe);
   percentualN = (contN*100)/contSupremo + contSupremo;
   printf("O percentual de votos nulos de ambos foram %d\n", percentualN);  

   if (percentualB>percentualRo && percentualB>percentualRa)
   {
     printf("O vencedor para prefeito foi Bonifacio\n");
   }
   else if (percentualRo>percentualB && percentualR>percentualRa)
     printf("O vencedor foi Romunaldo\n");
   else 
     printf("O vencedor foi Raimundo\n");
   if (percentualJu>percentualR && percentualJu>percentualJe)
     printf("A vencedora foi Jubiscreida");
   else if (percentualR>percentualJu && percentualJu>percentualJe) 
     printf("A vencedora foi Romilda.");
   else
     printf("A vencedora foi Jesevalda");      

    return 0;
}