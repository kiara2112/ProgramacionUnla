//Ingresar por teclado un valor entero comprendido entre 1 y 5. Mostrar en castellano el valor ingresado o
//un mensaje indicando que se cargó un valor fuera de rango.

//remplaza a un conjunto de IF aninados

#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    printf("Ingrese un valor entre 1 y 5:");
    scanf("%i",&valor);
    switch (valor) { //el valor que ingresa
        case 1:printf("Uno"); //muestra el texto
               break; //sale del switch
        case 2:printf("Dos");
               break;
        case 3:printf("Tres"); //esto funciona con igualdad, a diferencia de los if que podemos hacer menor o mayor dentro del case, en este solo busca que sea igual
               break;
        case 4:printf("Cuatro");
               break;
        case 5:printf("Cinco");
               break;
        default: //si no entro en ninguno de los casos, ejecuta esta linea
            printf("El valor esta fuera de rango");
    }
    getch();
    return 0;
}



