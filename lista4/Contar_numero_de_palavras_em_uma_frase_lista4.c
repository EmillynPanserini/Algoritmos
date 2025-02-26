#include <stdio.h>
#include <string.h>

int main ()
{
    int i=0, cont = 0, cont2 =1;
    char string [60];

    printf("Insira uma string:\n");
    scanf(" %[^\n]", string);

    
    for(i=0; i<60 && string[i] != '\0';i++)
    {
        if(string[i]==' ')
         cont2++;
    }
    printf("A quantidade de palavras e' %d", cont2);


    return 0;
}