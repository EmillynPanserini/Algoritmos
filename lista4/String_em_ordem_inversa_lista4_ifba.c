#include <stdio.h>
#include <string.h>


int main ()
{
    int i;
    char string [30];

    printf("Impressao de string na ordem inversa:\n");
    
    printf("Digite uma sequencia de letras:\n");
    scanf(" %[^\n]", string);

    // colocar a palavra na ordem inversa

    for (i= strlen(string); i>=0; i--)
    {
        printf("%c", string[i]);
    }


    return 0;
}