//Se tienen el siguiente programa:
//Indicar que valor se imprime en cada llamada a printf.

#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    int *pe;
    pe=&f;
    for(*pe=1;*pe<=10;*pe=*pe+1) //se utiliza *pe como f, porque guarda l contenido en f
    {
        printf("%i\n",f); //se imprime del 1 al 10 el numero
    }
    getch();
    return 0;
}
