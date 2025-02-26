#include <stdio.h>

int main ()
{
    int i, idade, imc=0,sexo, feminino=0, masculino, imcO=0;
    float peso=0, altura=0,  totalF=0, totalM=0, totalO=0;
    
   
    

    for (i=0; i<21; i++)
    {
     
      printf("\nDigite seu peso:\n");
      scanf("%f", &peso);
      printf("Digite seu sexo '1' para feminino e '2' para masculino:\n");
      scanf("  %d", &sexo);
      printf("Digite sua altura:\n");
      scanf("%f", &altura);
      printf("Digite sua idade:\n");
      scanf("  %d", &idade);

      imc = peso/ (altura * altura); 
      
     switch (sexo)
     {
      case 1:
        if (imc<=27)
        {
          feminino++;
          printf("Seu IMC e': %d\n", imc);
          printf("Peso normal");
        }
      break;

      case 2: 
        if (imc<=25)
        masculino++;
          printf("Peso normal.\n");
      break;

      default:
        imcO++;
      
     }
    }

    totalF = (100 * feminino)/ 20;
    totalM= (100 * masculino)/20;
    totalO= (100*imcO++);
 
    
    printf("\nA porcentagem de mulheres com peso ideal na empresa e' %.f mulheres e o de homens e' %.f\n", totalF, totalM);
    printf("Porcentagem de obesos na empresa: %f", totalO);

    return 0;
}