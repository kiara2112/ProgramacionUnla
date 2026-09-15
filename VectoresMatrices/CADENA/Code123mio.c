//Confeccionar un programa que permita :
//1-Almacenar en una matriz los datos de 5 personas.
//2-Imprimir el nombre alfabéticamente menor.

#include<stdio.h>
#include<conio.h>
#include<string.h>


void ingresar(char nombres[5][41])
{
    int f;
    for (f=0; f<5; f++)
    {
        printf("ingresar nombre: ");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41])
{
    int f;
    for (f=0; f<5; f++)
    {
        printf("imprimir nombre %s\n", nombres[f]); //muestra los nombres que ingresamos
    }
}

void menor(char nombres[5][41])
{
    int f;
    char men[41];
    strcpy(men, nombres[0] );

    for (f=0; f<5; f++)
    {

        if (strcmp(men,nombres[f])>0) //compara si el primero es mayor que el segundo
        {
            strcpy(men,nombres[f]);
        }
    }
    printf("el nombre menor alfabeticamente es %s", men); //para cadenas de numeros va %s, no %c char
}


int main()
{
    char nombres[5][41];
    ingresar(nombres);
    imprimir (nombres); //muestra todo lo que hay
    menor (nombres);
    getch();
    return 0;
}
