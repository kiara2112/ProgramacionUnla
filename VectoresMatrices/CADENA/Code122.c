//Confeccionar un programa que permita :
//1-Almacenar en una matriz los datos de 5 personas.
//2-Imprimir los nombres.
//3-Ordenar alfabéticamente los nombres.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombres[5][41])
{
    int f;
    for(f=0;f<5;f++)//un solo subindice
    {
        printf("Ingrese el nombre de persona:");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41])
{
    int f;
    printf("Listado completo de nombres\n"); //mostramos el listado de nombres
    for(f=0;f<5;f++)
    {
        printf("%s\n",nombres[f]);
    }
}

void ordenar(char nombres[5][41])
{
    int k,f;
    char aux[41];
    for (k = 0; k < 4; k++)//el for anidado de afuera
    {
        for (f = 0; f < 4 - k; f++) //para que sea mas eficiente se resta
        {
            if (strcmp(nombres[f],nombres[f+1]) > 0) //el primer nombre es mayor alfabeticamente que el que esta abajo, por eso los intercambia
            {
                strcpy(aux,nombres[f]); //se usa un copy a un auxiliar, el primer nombre va al segundo
                strcpy(nombres[f],nombres[f + 1]);
                strcpy(nombres[f + 1],aux);
            }
        }
    }
}


int main()
{
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    ordenar(nombres);
    imprimir(nombres);
    getch();
    return 0;
}
