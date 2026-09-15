//Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga).
//Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.

#include<stdio.h>
#include<conio.h>
//si toco la parte de abort no me deja despues cambiar el codigo, que chotada
int main()
{
    int suma, num;
    suma=0;
    num=0;

    do{
        printf("Ingresa numero: ");
        scanf("%i", &num);

        if (num != 9999) //es necesario un if (aunque para mi no porque con poner la suma antes del ejecutable no deberia de sumarlo), para que mientras no carguen 9999 no se sume y termine el programa
        {
            suma=suma+num;
        }

    } while (9999!=num); //al final del do while si va ; a diferencia de otras condiciones

    if (suma>0)
    {
        printf("el numero es positivo (mayor a 0)");
    }
    else
    {
        if (suma<0)
        {
            printf("el numero es negativo (menor a 0)");
        }
        else
        {
            printf("el numero es 0");
        }
    }
    getch();
    return 0;

}
