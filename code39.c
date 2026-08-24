//Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio.

#include<stdio.h>
#include<conio.h>

int main()
{
    int suma,f,valor,promedio;
    suma=0;
    for(f=1; f <= 10;f++)
    {
        printf("Ingrese valor:");
        scanf("%i",&valor);
        suma=suma+valor;
    }
    printf("La suma es:");
    printf("%i",suma);
    printf("\n");
    promedio=suma/10;
    printf("El promedio es:");
    printf("%i",promedio);
    getch();
    return 0;
}
