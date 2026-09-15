//Realizar la carga de enteros por teclado y sumarlos, finalizar cuando se ingrese un valor cero o se hayan cargado 10 valores.

#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    int f;
    int suma=0;
    for(f=0;f<10;f++) //el break lo podemos utilizar en cualquiera de las tres estructuras repetitivas que hay en C.
    {
        printf("Ingrese valor:");
        scanf("%i",&valor);
        if (valor==0)
        {
            break; //break sale de la estructura repetitiva que la contiene, si esta anidado sale solo del primer
        }
        suma+=valor;
    }
    printf("La suma de los valores ingresados es:%i",suma);
    getch();
    return 0;
}
