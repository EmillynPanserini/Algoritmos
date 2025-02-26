#include<stdio.h>

int main() {

int numero, maior = 0, num1, cont = 0, menor;

printf("Digite quantos numeros serao lidos: ");

scanf("%d", &numero);

for (int i = 0; i < numero; i++) {

 printf("Digite o numero: ");
 scanf("%d", &num1);
 if (num1>maior)
 {
  maior = num1;
  cont++;
 }
 if(num1>menor && menor == 0)
  menor = num1;
 if(num1<menor)
  menor = num1; 

}



printf("O maior numero e' %d e foi lido %d", maior, cont);

return 0;

}