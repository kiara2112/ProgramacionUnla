//Confeccionar un programa que permita ingresar en una matriz de tipo char los nombres de artículos para la venta. Hacer luego una función que imprima los nombres de dichos artículos.

#include<stdio.h>
#include<conio.h>

void cargar(char articulos[3][31])//31 porque el null ocupa el ultimo puesto (igual que con vectores
{
    int f;
    for(f=0;f<3;f++)
    {
        printf("Ingrese el nombre del articulo:"); //van ingresando por filas, las columnas no importan porque no se ingresan las letras individualmente, si no con un gets
        gets(articulos[f]);
    }
}

void imprimir(char articulos[3][31])
{
    int f;
    printf("Listado completo de articulos\n"); //muestra igual que antes
    for(f=0;f<3;f++)
    {
        printf("%s\n",articulos[f]);
    }
}


int main()
{
    char articulos[3][31];
    cargar(articulos);
    imprimir(articulos);
    getch();
    return 0;
}
