//Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,x;
    printf("Ingrese el valor final:");
    scanf("%i",&n);
    x=1;
    while (x <= n) //como no sabemos desde el principio hasta cuanto es, usamos el while para que los valores menores a N se muestren
    {
        printf("%i",x);
        printf(" - ");
        x = x + 1;
    }
    getch();
    return 0;
}
