//Declarar una unión con tres atributos, uno de tipo int, otro de tipo char y finalmente otro de tipo float.
//Definir una variable y guardar en distintos momentos del programa valores para dichos atributos.

#include<stdio.h>
#include<conio.h>

union dato { //es parecido a un struct, pero separa solo la ubicacion de mayor ocupa y solo dejando usarse uno a la vez
    int x;
    char letra; //los 3 ocupan el mismo espacio de memoria
    float z;
};

int main()
{
    union dato d;
    d.x=10;
    printf("Impresion del entero:%i\n",d.x);
    d.letra='A';
    printf("Impresion del caracter:%c\n",d.letra); //
    printf("Impresion del entero:%i\n",d.x); //El dato se ha modificado y no muestra 10, si no el valor numerico
    d.z=5.25;
    printf("Impresion del float:%0.2f\n",d.z);
    printf("Impresion del entero:%i\n",d.x); //El dato se ha modificado nuevamente
    getch();
    return 0;
}
