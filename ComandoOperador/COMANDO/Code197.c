//Ingresar valores por teclado y sumarlos. Finalizar al ingresar el cero.

#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    int suma=0;
    while(1) //infinito (cualquier valor que no sea 0, siempre va a dar verdadero y va a ejecutar)
    {
        printf("Ingrese un valor (0 para finalizar):");
        scanf("%i",&valor);
        if (valor==0) //si el valor es 0, sale de la estructura de if
        {
            break;//while, for y para el do while funciona el break, va salir de eso y va pasar el printf de abajo
        }
        suma+=valor; //cuando salga del if, va a sumar los valores y si es 0, va salir
    }
    printf("La suma de los valores ingresados es:%i",suma);
    getch();
    return 0;
}
