////Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.

#include<stdio.h>
#include<conio.h>

void cargar(int vector[5])
{
    int x;
    for(x=0;x<5;x++)
    {
        printf("Ingrese elemento:");
        scanf("%i",&vector[x]);
    }
}

void ordenarMenorMayor(int vector[5])
{
    int k,f;
    for (k = 0; k < 4; k++)
    {
        for (f = 0; f < 4 - k; f++)
        {
            if (vector[f] > vector[f + 1])
            {
                int aux;
                aux = vector[f];
                vector[f] = vector[f + 1];
                vector[f + 1] = aux;
            }
        }
    }
}

void ordenarMayorMenor(int vector[5])
{
    int k,f;
    for (k = 0; k < 4; k++)
    {
        for (f = 0; f < 4 - k; f++)
        {
            if (vector[f] < vector[f + 1])
            {
                int aux;
                aux = vector[f];
                vector[f] = vector[f + 1];
                vector[f + 1] = aux;
            }
        }
    }
}

void imprimir(int vector[5])
{
    int x;
    for(x=0;x<5;x++)
    {
        printf("%i\n",vector[x]);
    }
}


int main()
{
    int vector[5];
    cargar(vector);
    ordenarMenorMayor(vector);
    printf("Ordenado de menor a mayor\n");
    imprimir(vector);
    ordenarMayorMenor(vector);
    printf("Ordenado de mayor a menor\n");
    imprimir(vector);
    getch();
    return 0;
}
