//Confeccionar un programa que permita administrar un vector de 5 enteros.
//Mostrar un menú de opciones:
//1 - Cargar el vector.
//2 - Mostrarlo
//3 - Imprimir el mayor
//4 - Imprimir el menor
//5 - Finalizar el programa
//Utilizar un switch para la selección de la opción y la llamada a la función respectiva.

#include<stdio.h>
#include<conio.h>

#define TAMANO 5

void cargar (int vector [TAMANO])
{
    int f;
    for (f=0; f<TAMANO; f++)
    {
        printf("ingresar valor al vector: ");
        scanf("%i", &vector[f]);
    }
}

void mostrar (int vector[TAMANO])
{
        int f;
    for (f=0; f<TAMANO; f++)
    {
        printf("%i-", vector[f]);
    }
printf("\n");
}

void mayor (int vector[TAMANO])
{
    int may=vector[0];
    int f;
    for (f=0; f<TAMANO; f++)
    {
        if (vector[f]>may)
        {
            may=vector[f];
        }
    }
    printf("el numero mayor es %i", may);
    printf("\n");
}

void menor (int vector[TAMANO])
{
    int men=vector[0];
    int f;
    for (f=0; f<TAMANO; f++)
    {
        if (vector[f]<men)
        {
            men=vector[f];
        }
    }
    printf("el numero menor es %i", men);
    printf("\n");
}


int main()
{
    int vector[5];
    int menu;
do{
    printf("1 - Cargar el vector\n"); //esto debe de ir dentro para que se repita la frase siempre que se vuelva a ejecutar
    printf("2 - Mostrarlo\n");
    printf("3 - Imprimir el mayor\n");
    printf("4 - Imprimir el menorr\n");
    printf("5 - Finalizar el programa\n");
    scanf("%i", &menu);
    switch(menu){ //va llevando al void de cada uno cuando lo necesite
        case 1:cargar(vector);
                break;
        case 2:mostrar(vector);
                break;
        case 3:mayor(vector);
                break;
        case 4:menor(vector);
                break;

    }
}while(menu!=5); //si es diferente, sigue dentro, si no sale
    getch();
    return 0;
}
