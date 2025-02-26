#include <stdio.h>

int main ()
{

   int numero;

   printf("Digite um numero inteiro de 1 a 10:\n");
   scanf("%d", &numero);

   switch ( numero )
   {
      case 1:
          printf("O numero digitado e' um.\n"); break;
      case 2:
          printf("O numero digitado e' dois.\n"); break;
      case 3:
          printf("O numero digitado e' tres.\n"); break;
      case 4:
          printf("O numero digitado e' quatro.\n"); break;
      case 5:
          printf("O numero digitado e' cinco.\n"); break;
      case 6:
          printf("O numero digitado e' seis.\n"); break;
      case 7:
          printf("O numero digitado e' sete.\n"); break;
      case 8:
          printf("O numero digitado e' oito.\n"); break;
      case 9 :
          printf("O numero digitado e' nove.\n"); break; 
      case 10:
          printf("O numero digitado e' dez.\n"); break;
      default :
          printf("Numero nao desejado\n");





   }
    return 0;
}