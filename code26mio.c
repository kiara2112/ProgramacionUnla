//Escribir un programa en el cual: dada una lista de tres valores numéricos distintos
//se calcule e informe su rango de variación (debe mostrar el mayor y el menor de ellos)

#include<stdio.h>
#include<conio.h>

int main ()
{
    int num1, num2, num3;
    printf("Cargar numero 1: ");
    scanf("%i", &num1);
    printf("Cargar numero 2: ");
    scanf("%i", &num2);
    printf("Cargar numero 3: ");
    scanf("%i", &num3);

    if (num1>num2 && num1>num3) //primero ve si el 1 es el mayor
    {
        printf("El numero MAYOR es el primero con: ");
        printf("%i", num1);
    }
    else
    {
        if (num2>num3) //y luego si el segundo es el mayor
        {
            printf("El numero MAYOR es el segundo con: ");
            printf("%i", num2);
        }
        else
        {
            printf("El numero MAYOR es el tercero con: "); //como descarte el ultimo es el mayor
            printf("%i", num3);
        }
    }

printf("\n"); //asi el renglon no me queda todo acumulado

        if (num1<num2 && num1<num3) //la misma idea que el anterior, pero al revez
    {
        printf("El numero MENOR es el primero con: ");
        printf("%i", num1);
    }
    else
    {
        if (num2<num3)
        {
            printf("El numero MENOR es el segundo con: ");
            printf("%i", num2);
        }
        else
        {
            printf("El numero MENOR es el tercero con: ");
            printf("%i", num3);
        }
    }

    getch();
    return 0;
}
