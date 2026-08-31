//Escribir un programa que solicite la carga de números por teclado, obtener su promedio. Finalizar la carga de valores cuando se ingrese el valor 0.

#include<stdio.h>
#include<conio.h>

int main()
{
    int suma,cant,valor,promedio;
    suma=0;
    cant=0;
    do {
        printf("Ingrese un valor (0 para finalizar):");
        scanf("%i",&valor);
        if (valor !=0 )
        {
            suma=suma+valor;
            cant++;
        }
    } while (valor != 0);
    if (cant!=0)
    {
        promedio=suma/cant;
        printf("El promedio de los valores ingresados es:");
        printf("%i",promedio);
    }
    else
    {
        printf("No se ingresaron valores.");
    }
    getch();
    return 0;
}
