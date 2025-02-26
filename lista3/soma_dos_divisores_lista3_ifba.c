#include <stdio.h>

#include <stdio.h>

int main()
{
  int num;
  int soma=1;

  printf("Digite um numero inteiro\n");
  scanf("%d",&num);
  printf("O numero informado foi %d\n",num);

  
  for (int i=2 ; i <= (num/2+1) ; i++ ) {
    if ( num % i == 0 ) {
      printf("%d - ",i);
      soma += i;
    }
  }
  printf("A soma dos divisores de %d (exceto ele mesmo) e %d\n",num,soma);
  return 0;
}