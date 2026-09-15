//Confeccionar un programa que permita cargar los nombres de 5 alumnos y sus notas respectivas.
//Luego ordenar las notas de mayor a menor. Imprimir las notas y los nombres de los alumnos.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombres[5][40],int notas[5]) //ingresan los valores normalmente
{
    int f;
    for(f=0;f<5;f++)
    {
        printf("Ingrese el nombre del alumno:");
        gets(nombres[f]);
        printf("Ingrese la nota del alumno:");
        scanf("%i",&notas[f]);
        fflush(stdin); //No olvidar esto para borrar
    }
}

void ordenar(char nombres[5][40],int notas[5])
{
    int k,f;
    int auxnota;
    char auxnombre[40];
    for(k=0;k<4;k++)
    {
        for(f=0;f<4-k;f++)
        {
            if (notas[f]<notas[f+1]) //comparamos solo la nota e intercambiamos los 2
            {
                auxnota=notas[f];
                notas[f]=notas[f + 1];
                notas[f+1]=auxnota;
                strcpy(auxnombre, nombres[f]);
                strcpy(nombres[f], nombres[f+1]);
                strcpy(nombres[f+1],auxnombre);
            }
        }
    }
}

void imprimir(char nombres[5][40],int notas[5])
{
    int f;
    printf("Listado de alumnos ordenados por notas en forma descendiente\n"); //mostramos ordenado
    for(f=0;f<5;f++)
    {
        printf("%s - %i\n",nombres[f],notas[f]);
    }
}


int main()
{
    char nombres[5][40];
    int notas[5];
    cargar(nombres,notas);
    ordenar(nombres,notas);
    imprimir(nombres,notas);
    getch();
    return 0;
}
