//Confeccionar una función que defina dos parámetros enteros y nos retorne el mayor.

#include<stdio.h>
#include<conio.h>

int retornarMayor(int v1,int v2)
{
    int mayor;
    if (v1>v2)
    {
        mayor=v1;
    }
    else
    {
        mayor=v2;
    }
    return mayor;
}


int main()
{
    int valor1,valor2;
    printf("Ingrese el primer valor:");
    scanf("%i",&valor1);
    printf("Ingrese el segundo valor:");
    scanf("%i",&valor2);
    printf("El valor mayor es %i",retornarMayor(valor1,valor2)); // se pueden retornar directamente sin pasar en otra variable
    getch();
    return 0;
}
