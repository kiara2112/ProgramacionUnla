//Realizar un programa que imprima en pantalla los números del 1 al 100.

#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    for(f=1; f <= 100 ;f++) //si ponemos f=f+2 en lugar de f++, el valor de f será incrementado de a 2 en cada vuelta, y no de a 1. Es lo mismo que poner f=f+1
    {
        printf("%i",f);
        printf("-");
    }
    getch();
    return 0;
}
