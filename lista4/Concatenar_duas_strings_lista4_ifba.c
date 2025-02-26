#include <stdio.h>

int main ()
{
   char string1[30]= "Eu amo", string2[]= " chocolate"  ;
   int i, tam =0;

   // descobrir o tamanho da string

   while(string1[tam])
   {
       tam++;
   }

   //concatenação de strings

   for (i = 0; i <30; i++ )
   {
       string1[i+tam] = string2[i];
   }

   printf("%s", string1);

    return 0;
}