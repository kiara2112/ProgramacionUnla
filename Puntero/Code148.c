//Implementar una función que intercambie el contenido de dos variables enteras, utilizar punteros para solucionarlo.

#include<stdio.h>
#include<conio.h>

void intercambiar(int *pe1,int *pe2)
{
    int aux=*pe1;
    *pe1=*pe2;
    *pe2=aux;
}


int main()
{
    int x1=10;
    int x2=20;
    printf("%i  %i\n",x1,x2);
    intercambiar(&x1,&x2);
    printf("%i  %i\n",x1,x2);
    getch();
    return 0;
}
