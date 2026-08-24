//programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000.

#include<stdio.h>
#include<conio.h>

int main()
{
    int cantidad,n,f,valor;
    cantidad=0;
    printf("Cuantos valores ingresara:"); //podemos elegir cuanto va a ser el valor maximo (esta es mejor forma que el while)
    scanf("%i",&n);
    for(f=1; f <= n ;f++) //hasta N(valor ingresado anteriormente)
    {
        printf("Ingrese el valor:");
        scanf("%i",&valor);
        if (valor >= 1000)
        {
            cantidad=cantidad+1;
        }
    }
    printf("La cantidad de valores ingresados mayores o iguales a 1000 son: ");
    printf("%i",cantidad);
    getch();
    return 0;
}
