//Cargar dos valores por teclado. Guardar en otra variable el mayor valor ingresado y mostrarlo.

//Este operador hace más compacta ciertas algoritmos en las que interviene una estructura condicional if.
//es como un if chiquito

#include<stdio.h>
#include<conio.h>

int main()
{
    int v1,v2;
    int may;
    printf("Ingrese primer valor:");
    scanf("%i",&v1);
    printf("Ingrese segundo valor:");
    scanf("%i",&v2);
    may=(v1>v2)?v1:v2; //condición ? valor si cierto : valor si falso
    printf("El valor mayor es:%i",may);
    getch();
    return 0;
}
