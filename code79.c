//Cargar por teclado dos nombres de personas que tengan distinta cantidad de caracteres. Almacenar en un tercer vector de caracteres
//el nombre que tenga más caracteres. Luego imprimir dicho vector.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre1[31];
    char nombre2[31];
    char nombreLargo[31];

    printf("Ingrese primer nombre:");
    gets(nombre1);
    printf("Ingrese segundo nombre:");
    gets(nombre2);

    if (strlen(nombre1)>strlen(nombre2))//(strlen) Devuelve cantidad de caracteres de la cadena. Es decir ve cual es mas largo
    {
        strcpy(nombreLargo,nombre1); //Copia una cadena en otra cadena, primero va en donde lo vamos a copiar y luego el copiado
    }
    else
    {
        strcpy(nombreLargo,nombre2);
    }

    printf("El nombre %s tiene mas caracteres",nombreLargo); //y queda guardado en el primero y lo muestra donde se ubica el %s
    getch();
    return 0;
}
