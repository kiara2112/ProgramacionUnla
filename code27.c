// imprimir los números del 1 al 100 en pantalla

#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    x = 1; //señalizamos el x en 1 para que empiece en ese numero
    while (x <= 100) //mientras sea menor a 100, va a ejecutar
    {
        printf("%i",x);
        printf(" - ");
        x = x + 1; //va a sumar al x uno (no es un para, yo misma debo de sumarle)
    }
    getch();
    return 0;
}
