//Desarrollar un programa para administrar un vector de 5 enteros.
//En la función de carga e impresión utilizar la sintaxis de punteros para acceder a sus elementos (no utilizar la sintaxis de subíndice)

#include<stdio.h>
#include<conio.h>

#define TAMANO 5

void cargar(int *pe)
{
    int f;
    for(f=0;f<TAMANO;f++)
    {
        printf("Ingrese elemento:");
        scanf("%i",&*pe);//le mandamos la ubicacion de lo aumentado por el puntero
        pe++; //si no aumentamos el pe, siempre va a mostrar o ingresar en la misma ubicacion de empezamos teniendo pe
    }
}

void imprimir(int *pe)
{
    int f;
    for(f=0;f<TAMANO;f++)
    {
        printf("%i ",*pe);//va mostrando la ubicacion de pe (el vector) y va aumentando, en vez de sumar la ubicacion del vector, aumentamos
        pe++; //va aumentando por medio del puntero y no del f
    }
}


int main()
{
    int vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    getch();
    return 0;
}
