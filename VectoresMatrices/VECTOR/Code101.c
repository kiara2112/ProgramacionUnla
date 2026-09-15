//Confeccionar un programa que defina dos funciones, una que permita cargar un vector de 5 elementos enteros y otra que muestre un vector de 5 elementos enteros.
//En la función main definir una variable de tipo vector y seguidamente llamar a las dos funciones.

#include<stdio.h>
#include<conio.h>
//a diferencia de int, char, float, etc. Vector si se edita en un void, se cambia en vector original de main
void cargar(int vec[5]) //el parametro vec no recibe una copia del vector, si no que guarda la referencia
{
    int x;
    for(x=0;x<5;x++)//asi no supera los 5 puestos
    {
        printf("Ingrese elemento:"); 
        scanf("%i",&vec[x]); //carga cada elemento en la posicion de X
    }
}
//void no puede retornar valores, pero si puede mostrar
void imprimir(int vec[5])
{
    int x;
    printf("Contenido completo del vector:"); //luego del ingreso, se va a mostrar los valores
    for(x=0;x<5;x++)
    {
        printf("%i ",vec[x]);
    }
}


int main()
{
    int vector[5];
    cargar(vector);
    imprimir(vector);
    getch();
    return 0;
}
