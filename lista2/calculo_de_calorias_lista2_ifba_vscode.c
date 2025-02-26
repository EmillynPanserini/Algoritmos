#include <stdio.h>

int main ()
{
    int prato, sobremesa, caloria=0, bebida;

    printf("Escolha seu prato:\n");
    printf("1.Vegetariano.\n 2.Peixe.\n 3. Frango.\n 4.Carne.\n");
    scanf("%d", &prato);

    printf("Escolha sua sobremesa:\n");
    printf("1.Abacaxi.\n 2.Sorvete diet.\n 3.Mouse diet.\n 4.Mouse chocolate.\n");
    scanf("%d", &sobremesa);

    printf("Escolha sua bebida:\n");
    printf("1.Cha.\n 2.Suco de laranja.\n 3.Suco de melao.\n 4.Refrigerante diet.\n");
    scanf("%d", &bebida);

    switch (prato)
    {
       case 1:
         caloria = caloria + 180; break;
       case 2:
         caloria = caloria + 230; break;
       case 3:
         caloria = caloria + 250; break;
       case 4:
         caloria = caloria + 350; break;
        default:
          printf("invalido");
          
    }
    switch (sobremesa)
    {
        case 1:
          caloria = caloria + 75; break;
        case 2:
         caloria = caloria + 110; break;
        case 3:
         caloria = caloria + 170; break;
        case 4:
         caloria = caloria + 200; break;
         default:
          printf("invalido");
          
    }
    switch (bebida)
    {
        case 1:
          caloria = caloria + 20; break;
        case 2:
         caloria = caloria + 70; break;
        case 3:
         caloria = caloria + 160; break;
        case 4:
         caloria = caloria + 65; break;
         default:
          printf("invalido");
          
    }
    
    printf("A quantidade de calorias e':\n%d", caloria); 



    return 0;
}