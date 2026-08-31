//Definir tres vectores de tipo entero. Realizar la carga de los dos primeros por teclado. Definir una única función que realice la carga de un vector y
//llamar a dicha función dos veces pasando el primer y segundo vector definido.
//Plantear otra función que reciba tres vectores y proceda a sumar elemento a elementos los dos primeros vectores y se carguen en el tercer vector.
//Imprimir los tres vectores.


#include<stdio.h>
#include<conio.h>

void cargar(int vec[5])
{
    int x;
    printf("Carga de un vector.\n");
    for(x=0;x<5;x++)
    {
        printf("Cargar elemento:");
        scanf("%i",&vec[x]);
    }
}

void generarVector(int vec1[5],int vec2[5],int vecsuma[5])
{
    int x;
    for(x=0;x<5;x++)
    {
        vecsuma[x]=vec1[x]+vec2[x];
    }
}

void imprimir(int vec[5])
{
    int x;
    printf("Impresion del vector:");
    for(x=0;x<5;x++)
    {
        printf("%i ",vec[x]);
    }
    printf("\n");
}


int main()
{
    int vector1[5];
    int vector2[5];
    int vecsuma[5];
    cargar(vector1);
    cargar(vector2);
    generarVector(vector1,vector2,vecsuma);
    imprimir(vector1);
    imprimir(vector2);
    imprimir(vecsuma);
    getch();
    return 0;
}

