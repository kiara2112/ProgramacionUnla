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
        if (num1>num3) //¿num1 es mayor que num2?
        {
            printf("el numero mayor es ");
            printf("%i", num1);
        }
        else
        {
            printf("el numero mayor es "); //
            printf("%i", num3);
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
            printf("el numero mayor es ");// tiene que preguntar 2 veces si num3 es mayor porque en una posibilidad no muestra
            printf("%i", num3);
        }

    }

    getch ();
    return 0;

}
//             num1 > num2?
//             /          \
//          SÍ            NO
//          ↓              ↓
//      num1 > num3?    num2 > num3?
//       /      \         /      \
//     num1     num3    num2     num3

