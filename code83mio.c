//Ingresar por teclado dos nombres de personas y luego mostrarlas primero el que tiene más caracteres y luego el que tiene menos.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre1[50];
    char nombre2[50];

    printf("ingresa el PRIMERO nombre: ");
    gets (nombre1);
    printf("ingresa el SEGUNDO nombre: ");
    gets (nombre2);

    if (strlen(nombre1)> strlen(nombre2))
    {
        printf ("el nombre %s tiene MAS caracteres", nombre1);
        printf("\n");
        printf ("el nombre %s tiene MENOS caracteres", nombre2);
    }
    else
    {
        printf ("el nombre %s tiene MAS caracteres", nombre2);
        printf("\n");
        printf ("el nombre %s tiene MENOS caracteres", nombre1);
    }

    getch();
    return 0;
}

