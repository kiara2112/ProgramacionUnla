//Ingresar el nombre de 5 productos en una matriz de caracteres y sus respectivos precios en un vector paralelo de tipo float.
//Mostrar cuantos productos tienen un precio mayor al primer producto ingresado (se debe contar)

#include<stdio.h>
#include<conio.h>

void ingresar (char nombres[5][41], float precio[5])
{
    int f;
    for (f=0; f<5; f++)
    {
        printf("ingresar producto: ");
        gets(nombres[f]);
        printf("precio del producto: ");
        scanf("%f", &precio[f]);
        fflush(stdin); //limpiar el scanf para que no afecte el gets

    }
}

void mostrar (char nombres[5][41], float precio[5])
{
    int f;
    for (f=0; f<5; f++)
    {
        printf("producto: %s precio: %0.2f\n", nombres[f],precio[f] );

    }
}




void caro(char nombres[5][41], float precio[5])
{
    int f;
    float priPrecio=precio[0];
    int contar=0;
    for (f=1; f<5; f++) //puse un f=1 para que no compare el primero con el primero y lo sume
    {
        if (priPrecio<precio[f])
        {
           contar++;
        }
    }
    printf("la cantidad de productos mas caros que el primero son %i", contar);
}

int main()
{
    char nombres[5][41];
    float precio[5];
    ingresar(nombres,precio);
    mostrar(nombres, precio);
    caro(nombres,precio);
    getch();
    return 0;

}

