//Confeccionar un programa que permita la carga de valores enteros por teclado.
//Luego de ingresar el valor mostrar un mensaje por pantalla que pida confirmar al usuario si desea cargar otro valor ingresando los caracteres 's' o 'n'.
//Mostrar al final la suma de los valores ingresados.

#include<stdio.h>
#include<conio.h>

int main()
{
    int suma=0;
    int valor;
    char continua;

    do {

        printf("Ingrese un valor entero:");
        scanf("%i",&valor);

        suma=suma+valor;

        printf("Desea cargar otro valor [s/n]:");
        scanf(" %c",&continua);

    } while(continua=='s');

    printf("La suma de todos los valores ingresados es:");
    printf("%i",suma);

    getch();
    return 0;
}
