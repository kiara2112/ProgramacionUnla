//Desarrollar dos funciones que reciban como parámetro el valor del lado de un cuadrado.
//La primera debe calcular y mostrar la superficie y la segunda calcular y mostrar el perímetro.
//En la main llamar a las funciones pasando los valores enteros comprendidos entre 10 y 20

#include<stdio.h>
#include<conio.h>

void calcularSuperficie(int lado)
{
    int superficie=lado*lado;
    printf("La superficie de un cuadrado de lado %i es de %i\n",lado,superficie);
}

void calcularPerimetro(int lado)
{
    int perimetro=lado*4;
    printf("El perimetro de un cuadrado de lado %i es de %i\n",lado,perimetro);
}


int main()
{
    int x;
    for(x=10;x<=20;x++)//no ingresamos nosotros el valor, hace de cuadrado entre 10 a 20
    {
        calcularSuperficie(x);
        calcularPerimetro(x);
    }
    getch();
    return 0;
}
