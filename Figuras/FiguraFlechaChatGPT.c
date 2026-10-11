//Figura -> segun chatGPT

#include <stdio.h>

#define Largo


int main()
{
    int i, j;

    // Arriba
    for(i=0; i<2; i++)
    {
        for(j=0; j<7+i*2; j++)
        {
            printf(" ");
        }
        printf("x\n");
    }

    // Centro: 7 x
    for(i=0; i<7; i++)
    {
        printf("x ");
    }
    printf("\n");

    // Abajo
    for(i=1; i>=0; i--)
    {
        for(j=0; j<7+i*2; j++)
        {
            printf(" ");
        }
        printf("x\n");
    }

    return 0;
}
