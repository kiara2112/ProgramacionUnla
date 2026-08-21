//Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.

#include<stdio.h>
#include<conio.h>

int main ()
{
    int num1, num2, num3;
    printf("ingresar numero 1: ");
    scanf("%i", &num1);
    printf("ingresar numero 2: ");
    scanf("%i", &num2);
    printf("ingresar numero 3: ");
    scanf("%i", &num3);

    if (num1>num2) //primero pregunto si el num1 es el mayor
    {
        if (num1>num3) //si es el mayor,
        {
            printf("el numero mayor es ");
            printf("%i", num1);
        }
    }
    else
    {
        if (num2>num3)
        {
            printf("el numero mayor es ");
            printf("%i", num2);
        }
        else
        {
            printf("el numero mayor es ");
            printf("%i", num3);
        }

    }

    getch ();
    return 0;

}

