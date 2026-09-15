//Ingresar por teclado un valor entero comprendido entre 1 y 5. Mostrar en castellano el valor ingresado o
//un mensaje indicando que se cargó un valor fuera de rango.



#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    printf("Ingrese un valor entre 1 y 5:");
    scanf("%i",&valor);
    if (valor==1)
    {
        printf("Uno");
    }
    else
    {
        if (valor==2)
        {
            printf("Dos");
        }
        else
        {
            if (valor==3)
            {
                printf("Tres");
            }
            else
            {
                if (valor==4)
                {
                    printf("Cuatro");
                }
                else
                {
                    if (valor==5)
                    {
                        printf("Cinco");
                    }
                    else
                    {
                        printf("El valor esta fuera de rango");
                    }
                }
            }
        }
    }
    getch();
    return 0;
}
