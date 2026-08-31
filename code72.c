//Ingresar por teclado una palabra en minúsculas. Mostrar por pantalla la cantidad de vocales que tienen dicha palabra.

#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[30];
    printf("Ingrese una palabra en minusculas:");
    gets(palabra); //gets a diferencia de vector
    int cant=0;
    int x=0;
    while (palabra[x]!='\0')//al terminar la palabra, gets agrega al final \0, si es diferente eso, el programa va a comparar todas las letras
    {
        if (palabra[x]=='a' || palabra[x]=='e' || palabra[x]=='i' || palabra[x]=='o' || palabra[x]=='u') //compara todas las vocales
        {
            cant++;
        }
        x++;
    }
    printf("La cantidad de vocales que tiene la palabra %s es %i",palabra,cant);
    getch();
    return 0;
}
