//Confeccionar un programa que permita cargar e imprimir un vector de 5 elementos de tipo float.
//Utilizar la sintaxis de punteros en los parámetros de las funciones.

//un vector es un puntero que contiene la direecion del primer valor
//podemos ingresar con cualquiera de los 2 valores (al vector o p)


#include<stdio.h>
#include<conio.h>

#define TAMANO 5

void cargar(float *p) //va a recibir un puntero el cargar
{
    int f;
    for(f=0;f<TAMANO;f++)
    {
        printf("Ingrese elemento:");
        scanf("%f",&p[f]);
    }
}

void imprimir(float *p)
{
    int f;
    for(f=0;f<TAMANO;f++)
    {
        printf("%0.2f ",p[f]);
    }
}


int main()
{
    float vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    getch();
    return 0;
}
