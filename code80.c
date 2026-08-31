//Cargar por teclado en dos variables de tipo string el nombre y el apellido de una persona. Definir un tercer string y guardar la concatenación del nombre y apellido.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre[31];
    char apellido[31];
    char nomape[62];
    //30 caracteres en el nombre y 30 caracteres en el apellido, luego el string que almacenará los dos datos juntos más un espacio en blanco entre el nombre y apellido debe reservar espacio para 62 caracteres
    printf("Ingrese el nombre:");
    gets(nombre);
    printf("Ingrese el apellido:");
    gets(apellido);

    strcpy(nomape,nombre); //copia la cadena y lo manda en esa para empezar, se utiliza el STRCPY porque
    strcat(nomape," "); //este une 2 cadena (concatena) el STRCAT
    strcat(nomape,apellido); //hace lo mismo en esta

    printf("%s",nomape); //lo muestra
    getch();
    return 0;

}
