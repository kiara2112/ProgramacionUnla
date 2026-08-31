//Confeccionar un programa que muestre una presentación en pantalla del programa. Solicite la carga de dos valores y nos muestre la suma.
//Mostrar finalmente un mensaje de despedida del programa. Implementar estas actividades en tres funciones.

#include<stdio.h>
#include<conio.h> //console

void presentacion() //que dato va a devolver (VOID), no va a devolver ningun dato. Toda función tiene un nombre que no puede tener espacios en blanco (pre sentacion no), no puede empezar por un numero
{
    printf("Programa que permite cargar dos valores por teclado.\n");
    printf("Efectua la suma de los valores\n");
    printf("Muestra el resultado de la suma\n");
    printf("*******************************\n"); //al final para que no se superpongan ponemos \n
    //return n No requiere que tenga la palabra clave return como hemos dispuesto siempre en la función main)
}

void cargaSuma()//
{
    int valor1,valor2,suma; //estas variables solo existen en cargar sumar, no se pueden utilizar en finalizacion o presentacion
    printf("Ingrese el primer valor:");
    scanf("%i",&valor1);
    printf("Ingrese el segundo valor:");
    scanf("%i",&valor2);
    suma=valor1+valor2;
    printf("La suma de los dos valores es: %i",suma);
}

void finalizacion()
{
    printf("\n*******************************\n");
    printf("Gracias por utilizar este programa");
}


int main()//en cualquier ejercicio va a ser necesario un main, aunque usamos void, necesimos un main para juntar todo
{
    presentacion(); //va a llamar la presentacion que cargamos antes, si no lo ponemos aca no se llaman
    cargaSuma();
    finalizacion();//tienen que estar organizados bien
    getch(); //el returno y el getch van al final
    return 0;
}
