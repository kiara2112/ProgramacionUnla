//Implementar una función recursiva que reciba un parámetro de tipo entero y luego llame en forma recursiva con el valor del parámetro menos 1.

#include <stdio.h>
#include<conio.h>

void imprimir(int x)//recibe el 5 de la main
{
    printf("%i ",x);
    imprimir(x - 1); //dentro del algoritmo llamamos al imprimir y se va restando el 5-1=4 y asi sucesivamente porque cuando se ejecuta y se vuelve a llamar vuelve a repetirse hasta que el programa se pegue
}
int main()
{
    imprimir(5);
    getch();
    return 0;
}

