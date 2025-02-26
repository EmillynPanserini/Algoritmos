#include <stdio.h> 

int main ()
{
   int vetor[20];
   int i, x;
   
   // entrada do usuário para carregar o vetor
   for(i=0; i<20; i++)
   {
       printf("Digite um valor:\n");
       scanf("%d", &vetor[i]);
   }

   // Verificação se há ou não o elemento 54
   for(i=0; i<20; i++)
   {
       if(vetor[i] == 54)
       {
         x = i;
         printf("Elemento 54 esperado, econtrado no vetor[%d]\n", x);
       }
       else 
         printf("O elemento esperado nao encontrado\n");
   }
  
    return 0;
}