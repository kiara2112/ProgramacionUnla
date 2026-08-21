//Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo
//(El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)

#include<stdio.h>
#include<conio.h>

int main ()
{
    float lado, perimetro; //uso float en vez de int porque el lado de un cuadrado no tiene que ser necesariamente entero

    printf ("ingrese lado del cuadrado: ");
    scanf ("%f", &lado);

    perimetro=lado*4; //y que no sea entero no me afecta en
    printf ("el perimetro del cuadrado es: ");
    printf ("%f", perimetro);

    getchar();
    return 0;
}
