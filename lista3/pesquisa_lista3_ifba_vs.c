#include<stdio.h>

int main()
{
    int idade, sexo,corCabelo;
    float loiras=0,morenas=0;
    float mulheres,mulherT,mulherL,mulherM;

do{
      printf("Qual seu sexo ?\n1- Feminino\n2-Masculino\n");
      scanf("%d",&sexo);
      if(sexo== 1)
           mulheres=100; 	
      printf("Qual a cor de seu cabelo?\n1-Loiras\n2-Castanhos\n3-Pretos\n");
      scanf("%d",&corCabelo);
      switch(corCabelo){
      	case 1:
      	  if(sexo==1)
          {
        	loiras++; 
      	  }
        break;
      	case 2:
          if(sexo==1)
          {
      	    morenas++;
      	  }
        
        break;
      	case 3:
      	if(sexo==1)
          {
      	   morenas++; 
       	  }
      	break;      
      }
      printf("Digite sua idade\n");
      scanf("%d",&idade);
     
      if(idade>=18 && idade<=35){
           mulherT= mulheres/(loiras+morenas);
           mulherL = mulherT*loiras;
           mulherM = mulherT*morenas;
      }

}while(idade !=-1);
printf("Porcentagem de Mulheres entre 18 e 35 loiras e': %f\n",mulherL);
printf("Porcentagem de Mulheres entre 18 e 35 morenas e': %f\n",mulherM);
return 0;	
}