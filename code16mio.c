//Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras.
//Mostrar un mensaje de error si el número de cifras es mayor.

#include<stdio.h>
#include<conio.h>

int main ()
{
    int num;
    printf("Ingresa numero: ");
    scanf("%i", &num);

    if (num<10)
    {
        printf("Tiene 1 cifra");
    }
    else
    {
        if (num<100)
        {
            printf("tiene 2 cifras");
        }
        else
        {
            if (num<1000)
            {
                printf("tiene 3 cifras");
            }
            else
            {
                printf("error (cifra mayor)");
            }
        }
    }
    getch();
    return 0;
}
