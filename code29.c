//Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio.

#include<stdio.h>
#include<conio.h>

int main()
{
    int x,suma,valor,promedio;
    x=1;
    suma=0; //señalizamos con 0 porque si no habria error
    while ( x <= 10) //ingresar los 10 numeros (aunque un for seria mejor, pero bueno)
    {
        printf("Ingrese un valor:");
        scanf("%i",&valor);
        suma=suma+valor; //acumulador
        x=x+1; //contador
    }
    promedio=suma/10;//sacamos promedio y mostramos todo
    printf("La suma de los 10 valores es:");
    printf("%i",suma);
    printf("\n");
    printf("El promedio es:");
    printf("%i",promedio);
    getch();
    return 0;
}
