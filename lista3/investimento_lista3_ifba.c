#include <stdio.h>

int main ()
{
   int mes =0;
   float salarioC = 1856.20, salarioJ;

   salarioJ = salarioC/3;
   while(salarioJ<salarioC)
   {
       salarioJ = salarioJ * 1.05;
       salarioC= salarioC*1.02;
       mes++;
   }
   printf("Quantidade de meses que Joao levou para ultrapassar Carlos e':%d", mes);
   



    return 0;
}