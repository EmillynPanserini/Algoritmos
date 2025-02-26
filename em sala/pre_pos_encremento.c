#include <stdio.h>

int main()
{
    int cont = 5, x=0;
    x=++cont;
    printf("x=%d, Cont=%d\n", x, cont);

    x=cont++;
    printf("x=%d, Cont=%d\n", x, cont);
    const double PI =  3.1415;



    return 0;
}