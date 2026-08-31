//Ingresar por teclado dos nombres de personas y luego mostrarlas ordenados alfabéticamente.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
    char nombre1[30];
    char nombre2[30];

    printf("ingresar primer nombre: ");
    gets(nombre1);
    printf("ingresar segundo nombre: ");
    gets(nombre2);

    if (strcmp(nombre1,nombre2)<0)//compara si nombre 1 alfabeticamente es menor a nombre2, si da menos de 0, significa que es real y ejecuta
    {
        printf("%s - %s ", nombre1, nombre2);
    }
    else
    {
        printf("%s - %s ", nombre2, nombre1);
    }
    getch();
    return 0;
}
