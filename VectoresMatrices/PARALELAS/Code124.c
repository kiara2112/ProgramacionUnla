//Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas.
//Luego de realizar la carga por teclado de todos
//los datos imprimir los nombres de las personas mayores de edad (mayores o iguales a 18 años)

#include<stdio.h>
#include<conio.h>

void cargar(char nombres[5][41],int edades[5]) //1 matriz y 1 vector
{
    int f;
    for(f=0;f<5;f++)
    {
        printf("Ingrese nombre:"); //en la misma ubicacion que ponemos el nombre, va la edad y son paralelas
        gets(nombres[f]);
        printf("Ingrese edad:");
        scanf("%i",&edades[f]);
        fflush(stdin); //deja un buffer de teclado eñ scanf, y cuando ingrese otro producto eso va a ingresar dentro de
    }
}

void mayorEdad(char nombres[5][41],int edades[5])
{
    int f;
    printf("Personas mayores de edad.\n");
    for(f=0;f<5;f++)
    {
        if (edades[f]>=18)
        {
            printf("%s\n",nombres[f]); //muestra si son mayores de edad
        }
    }
}


int main()
{
    char nombres[5][41];
    int edades[5];
    cargar(nombres,edades);
    mayorEdad(nombres,edades);
    getch();
    return 0;
}
