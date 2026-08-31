//Confeccionar un programa que defina dos funciones, una que permita cargar un vector de 5 elementos enteros y otra que muestre un vector de 5 elementos enteros.
//En la función main definir una variable de tipo vector y seguidamente llamar a las dos funciones.

#include<stdio.h>
#include<conio.h>

void cargar(int vec[5])
{
    int x;
    for(x=0;x<5;x++)
    {
        printf("Ingrese elemento:");
        scanf("%i",&vec[x]);
    }
}

void imprimir(int vec[5])
{
    int x;
    printf("Contenido completo del vector:");
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
