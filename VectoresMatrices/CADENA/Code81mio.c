//Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos string. Mostrar un mensaje "Correcto" si se ingresa como clave la cadena "abc123".

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre[30];
    char clave[31]; //NO DEBO FUCIONAR 2 CLAVES JAJA

    printf("Ingrese el nombre: ");
    gets(nombre);

    printf("codigo parte 1: ");
    gets (clave);

    if (strcmp(clave,"abc123")==0)//- Compara dos cadenas ( si son iguales es verdadero). MI FORMA(  if (strcmp(clave,'abc123')==0) parece que de esta forma no es una comilla simple, si no que compuesta
    {
        printf("las claves son iguales");
    }
    else
    {
        printf("las claves son diferentes");
    }

    getch();
    return 0;
}

