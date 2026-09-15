//mplementar una función recursiva que imprima en forma descendente de 5 a 1 de uno en uno.

#include <stdio.h>
#include<conio.h>

void imprimir(int x)
{
    if (x > 0) //para cortarlo, utilizamos un if hasta que sea menor y se corte
    {
        printf("%i ", x);
        imprimir(x - 1);
    }
}

int main()
{
    imprimir(5);
    getch();
    return 0;
}
