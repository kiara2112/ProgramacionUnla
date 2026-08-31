//Confeccionar dos funciones:
//1-Permita ingresar por teclado una palabra en un vector de caracteres que llega como parámetro.
//2-Retornar la cantidad de vocales que tiene la palabra.

#include<stdio.h>
#include<conio.h>

void cargar(char palabra[40])
{
    printf("Ingrese una palabra:");
    gets(palabra);
}

int cantidadDeVocales(char palabra[40])
{
    int cant=0;
    int x=0;
    while(palabra[x]!='\0')
    {
        if (palabra[x]=='a' || palabra[x]=='e' || palabra[x]=='i' || palabra[x]=='o' || palabra[x]=='u' ||
            palabra[x]=='A' || palabra[x]=='E' || palabra[x]=='I' || palabra[x]=='O' || palabra[x]=='U')
        {
            cant++;
        }
        x++;
    }
    return cant;
}


int main()
{
    char pal[40];
    cargar(pal);
    printf("La cantidad de vocales que tiene la palabra: %s es de %i",pal, cantidadDeVocales(pal));
    getch();
    return 0;
}
