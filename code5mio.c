//Escribir un programa en el cual se ingresen cuatro números,
//calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto

#include<stdio.h>
#include<conio.h>

int main ()
{
    int num1, num2, num3, num4, suma, producto;

    printf ("ingresa el primer numero: ");
    scanf ("%i", &num1);
    printf ("ingresa el segundo numero: ");
    scanf ("%i", &num2);
    printf ("ingresa el tercer numero: ");
    scanf ("%i", &num3);
    printf ("ingresa el cuarto numero: ");
    scanf ("%i", &num4);

    suma=num1+num2;
    producto=num3*num4;

    printf ("la suma del numero 1 y 2 es: ");
    printf ("%i",suma);
    printf ("\n");
    printf ("el prodcuto del numero 3 y 4 es: ");
    printf ("%i", producto);

    getchar();
    return 0;
}
