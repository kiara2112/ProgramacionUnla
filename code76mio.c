//Permitir el ingreso de una palabra en minúsculas por teclado. Cambiar todas las vocales por un caracter de guión: '-'.

#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[24];
    printf( "ingresar palabra a intercambiar vocales en minuscula: ");
    gets(palabra);
    int x=0;
    while (palabra[x]!='\0') //minetras no sea null (ultimo caracter)
    {

        if (palabra[x]=='a' || palabra[x]=='e' || palabra[x]=='i' || palabra[x]=='o' || palabra[x]=='u') //vemos si es vocal, si lo es en la misma ubicacion intercambia la palabra a
        {
            palabra[x]='-';
        }

        x++;
    }

   printf(" La palabra sin vocales es %s", palabra);
}
