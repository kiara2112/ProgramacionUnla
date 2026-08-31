//Elaborar una función que nos retorne el perímetro de un cuadrado pasando como parámetros el valor de un lado.

#include<stdio.h>
#include<conio.h>

int returnPerimetro(lado)
{
    int perim;
    perim=lado*4;
    return (perim);

}

int main()
{
    int num;
    printf("ingresar un lado del cuadrado: ");
    scanf("%i", &num);

    printf("el perimetro del cuadrado es %i", returnPerimetro(num) );
    getch();
    return 0;

}
