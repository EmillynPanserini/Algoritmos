#include <stdio.h>

int main () 
{
    float nota_aluno;
    char inic_nome, sexo;
    int n_mat; 

     printf ("Ola, controle de classe dos alunos, informe sua nota:\n ");
     scanf("%f", &nota_aluno);
     printf("Por favor, a letra inicial do seu nome\n");
     scanf(" %c", &inic_nome);
     printf("Responda de acordo com seu sexo 'F' para femino 'M' masculino 'O' para outro.\n");
     scanf(" %c", &sexo);
     printf("Agora informe seu numero de matricula\n");
     scanf("%d", &n_mat);
     printf("Muito bem, seus dados sao:\n%.f, %c, %c, %d",nota_aluno, inic_nome, sexo, n_mat);

return 0;
}