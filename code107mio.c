//Desarrollar un programa que permita administrar un vector de 8 elementos tipo entero. Se deben codificar las siguientes funciones:
//1-Carga del vector.
//2-Retornar el valor acumulado de todos los elementos del vector.
//3-Retornar el valor acumulado de los elementos del vector que sean mayores a 36.
//4-Retornar la cantidad de componentes con valores mayores a 50.

#include<stdio.h>
#include<conio.h>

void cargar(int vector[8]) //Carga del vector.
{
    int f;
    for (f=0; f<8; f++)
    {
        printf("ingresar valores del tipo entero: ");
        scanf("%i", &vector[f]);
    }
}

int sumar(int vector[8])//valor acumulado de todos los elementos del vector.
{
    int f;
    int suma=0;
    for (f=0; f<8; f++)
    {
        suma=suma+vector[f];
    }
    return(suma);
}

int sumaMayores36(int vector[8])//alor acumulado de los elementos del vector que sean mayores a 36.
{
    int sumaMay36=0;
    int f;
    for (f=0; f<8; f++)
    {
        if (vector[f]>36)
        {
             sumaMay36=sumaMay36+vector[f];
        }
    }
    return(sumaMay36);
}

int cantidadMayores50(int vector[8])//componentes con valores mayores a 50.
{
    int contar50=0;
    int f;
    for (f=0; f<8; f++)
    {
        if (vector[f]>50)
        {
             contar50++;
        }
    }
    return(contar50);
}

int main()
{
    int vector[8];
    cargar(vector);
    printf("valor acumulado de todos los elementos:%i\n", sumar(vector));
    printf("valor acumulado de los elementos del vector que sean mayores a 36: %i\n", sumaMayores36(vector));
    printf("cantidad de componentes con valores mayores a 50: %i", cantidadMayores50(vector));
    getch();
    return 0;
}
