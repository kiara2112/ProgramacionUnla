//Ingresar por teclado una palabra. Mostrar luego por pantalla la cantidad de letras que tiene.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char palabra[31];
    printf("Ingrese una palabra:");
    gets(palabra);
    int cant=strlen(palabra); //sin la necesidad de usar un while para contar 1 por 1, llamamos a STRLEN para que cuente los caracteres que hay dentro del vector palabra (por eso dentro dentro de parentesis)
    printf("La palabra %s tiene %i letras",palabra,cant); //podemos poner strlen(palabra) sin usar un cant y mostrarlo directamente
    getch();
    return 0;
}
