//Confeccionar una función que calcule la superficie de un rectángulo y la retorne, la función recibe como parámetros los valores de dos de sus lados:
//int retornarSuperficie(int lado1,int lado2)
//En la función main del programa cargar los lados de dos rectángulos y luego mostrar cual de los dos tiene una superficie mayor.

#include<stdio.h>
#include<conio.h>

int retornarSuperficie(int lado1, int lado2)
{
    int superficie;
    superficie=lado1*lado2;
    return (superficie);
}

int main()
{
    int lado1, lado2, lado3, lado4, super1, super2;
    printf("ingresar un lado del PRIMER rectangulo: ");
    scanf("%i", &lado1);
    printf("ingresar un lado del PRIMER rectangulo: ");
    scanf("%i", &lado2);
    printf("ingresar un lado del SEGUNDO rectangulo: ");
    scanf("%i", &lado3);
    printf("ingresar un lado del SEGUNDO rectangulo: ");
    scanf("%i", &lado4);

    super1=retornarSuperficie(lado1,lado2);
    super2=retornarSuperficie(lado3,lado4);

    if (super1>super2)
    {
        printf ("el PRIMER rectangulo tiene mas superficie con %i", super1);
    }
    else
    {
        printf ("el SEGUNDO rectangulo tiene mas superficie con %i", super2);
    }

    getchar();
    return 0;

}
