//Se tienen el siguiente programa:
//Indicar que valor se imprime en cada llamada a printf.

#include<stdio.h>
#include<conio.h>

int main()
{
    char c1='A';
    char c2='B';
    char *pc;
    pc=&c1;
    printf("%c\n",c1); //se imprime: A (porque ponemos el contenido de c1 que ya tenia)
    *pc='a';
    printf("%c\n",c1); //se imprime: a (porque cambiamnos el contenido de c1 por medio de *pc)
    c1='Z';
    printf("%c\n",*pc); //se imprime: Z (porque cambiamos el contenido de c1 por medio de c1='Z' y mostramos el contenido que apunta *pc)
    pc=&c2;
    printf("%c\n",*pc); //se imprime: B (lo mismo que en la primera impresion sucede)
    getch();
    return 0;
}

