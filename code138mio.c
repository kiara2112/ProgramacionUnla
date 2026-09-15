//Se tiene la siguiente declaración de registro:
//Definir un vector de cuatro elementos de tipo libro.
//Codificar las funciones:
//1-Carga del vector.
//2-Listado completo.
//3-Ingresar por teclado un nombre de autor y luego mostrar todos los títulos de libros que ha escrito o un mensaje si no tiene.

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define TAMANO 4

struct libro{
    int codigo;
    char titulo[40];
    char autor[40];
};

void cargar(struct libro vector[TAMANO])
{
    int f;
    for (f=0; f<TAMANO; f++) //ningresan valores
    {
        printf("Codigo del libro: ");
        scanf("%i", &vector[f]. codigo);
        fflush(stdin); //es fflush es igual al primer include (PARECIDO) JAJA
        printf("Titulo del libro: ");
        gets(vector[f].titulo);
        fflush(stdin); //la verdad no se si este es necesario al 100%, pero para que no se me rompa el programa lo pongo JAJA
        printf("Autor del libro: ");
        gets(vector[f].autor);
    }
}

void listado (struct libro vector[TAMANO])
{
   int f;
   for (f=0; f<TAMANO; f++)
   {
        printf("libro: %s, autor: %s, codigo: %i\n", vector[f].titulo, vector[f].autor, vector[f].codigo); //muestra los valores

   }
}


void autorCopia (struct libro vector[TAMANO])
{
    char autor2[40]; //ingresa una persona en otro vector
    int f;
    printf("ingresar nombre de autor: ");
    gets(autor2);
    int cant=0;
    for(f=0; f<TAMANO; f++)
    {
       if (strcmp(autor2, vector[f].autor)==0)
       {
           printf("el libro %s es de %s\n", vector[f].titulo, autor2);
           cant++; //si en todas las verificaciones no ingreso nunca al if, en el proximo if ingresa y avisa que no hay libros de este autor
       }
    }
           if(cant==0)
       {
           printf("El autor no tiene libros aqui");
       }
}

int main()
{
    struct libro vector[TAMANO];
    cargar(vector);
    listado(vector);
    autorCopia(vector);
    getch();
    return 0;

}
