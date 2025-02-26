#include <stdio.h>
#include <string.h>

int main()
{
    char string[60];
    int i, cont =0;

    // programa para contar caracteres em uma string

    printf("Diga uma palavra:\n");
    scanf(" %s", string);

    // contando a quantidade de letras

    for(i=0; i<60; i++)
    {
        if(string[i] != '\0')
          cont++;
        else
         break;
    }
    printf("A quantidade de letras e: %d", cont);


    return 0;
}