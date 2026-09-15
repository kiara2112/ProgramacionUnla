//Definir dos variables enteras y no inicializarlas.
//Definir una variable puntero a entero, hacer que apunte sucesivamente a las dos variables enteras definidas previamente y cargue sus contenidos.
//Imprimir las dos variables enteras.


#include<stdio.h>
#include<conio.h>

int main()
{
    int x1,x2;
    int *pe;
    pe=&x1;//direccion de memoria de x1
    *pe=100;//modificar lo apuntado por pe (se guarda en x1), si no tuviera * porque guardamos en pe 100, pero no se podria porque es puntero
    pe=&x2; //se guarda una direccion de memoria
    *pe=200;//lo apuntado por esa variable se guarda
    printf("Primer variable entera:%i\n",x1); //en ningun momento hicimos x1=100. Pero lo modificamos por medio del puntero
    printf("Segunda variable entera:%i\n",x2);
    getch();
    return 0;
}
