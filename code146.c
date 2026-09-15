//Confeccionar una función que reciba como parámetros las direcciones de dos variables enteras y
//le cargue a lo apuntado por dichas variables dos enteros.

#include<stdio.h>
#include<conio.h>

void cargar(int *pe1,int *pe2) //modificar una variable char, int o float en una función lo que hacemos es pasar la dirección de la variable y que lo reciba un puntero.
{
    *pe1=100; //en vez de hacer un int, char o float y retornarlo, podemos pasarlo directamente con un puntero (como se hacia con un vector) y se intercambia el original
    *pe2=200;
}


int main()
{
    int x1,x2; //el puntero y la carga deben ser ambos enteros para poder mandarse
    cargar(&x1,&x2); //no podemos pasar x1 y x2 (porque se lo pasamos a un puntero) asi que le pasamos la direccion del puntero &x1
    printf("%i   %i",x1,x2);
    getch();
    return 0;
}
