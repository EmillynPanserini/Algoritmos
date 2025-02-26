#include <stdio.h>

int main ()
{
    int num1, num2, soma, subtracao, multi, div, escolha;
    while(escolha !=0)
    {
      printf("Gostaria de qual operacao:\n");
      printf("1. Soma\n2. Subtracao\n3. Multiplicacao\n4. divisao\n5. sair\n");
      scanf("%d", &escolha);
      printf("Escolha 2 numeros para o calculo:\n ");
      scanf("%i%i", &num1, &num2);
     
      switch(escolha)
      {
          case 1:
          {
            soma = num1 + num2;
            printf( "A soma e: %i\n", soma );
          }
          break;
          case 2:
          {
            multi = num1 * num2;
            printf( "A subtracao e: %i\n", subtracao );
          }
          break;
          case 3:
          {
            div = num1 / num2;
            printf( "A divisão e: %i \n", div );
          }
          break;
          case 4:
          {
              div = num1 / num2;
              printf( "A divisão e: %i \n", div );
          }
          break;
       }
    }

    return 0;
}