#include <stdio.h>
#include <string.h>

int main()
{
    char string [10];
    char a[10], b[10];
    int i,  tamanho;

    printf("Programa para mudar letras maiusculas por minusculas (vice-versa):\n");

    // recebendo entrada dos usuarios:

    printf("Digite uma palavra:\n");
    scanf("%s", string);

    // descobrir o tamanho da string
    tamanho = strlen(string);

    // converter as letras

    for(i=0; i<tamanho; i++)
    {
        if((string[i] >= 'A') && (string[i] <= 'Z' ))
        {
            a[i] = string[i];
            b[i] = string[i] + 32;
        }
        else if((string[i] >= 'a') && (string[i] <= 'z'))
        {
            a[i] = string[i];
            b[i] = string[i] - 32;
        }
        else 
        {
            a[i] = string[i];
            b[i] = string[i];
        }
    }
     a[i] = '\0';
     b[i] = '\0';

    printf("%s\n", a);
    printf("%s\n", b);
  
    return 0;
}