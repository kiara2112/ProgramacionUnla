//Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.

#include<stdio.h>

//HAY QUE EXPLICAR ESTE BIEN

void cargar (int vector[5])
{
    int f;
    for (f=0; f<5; f++)
    {
        printf("cargar valor a vector: ");
        scanf("%i", &vector[f]);
    }

}

void MayAMen(int vector[5])
{
    int f, j, aux;

    for (f=0; f<4; f++)
    {
        for(j=f+1; j<5; j++)//esta parte cambia a diferencia del mio con el de el. despues comparar
        {
            if(vector[f]>vector[j])
            {
                aux=vector[f];
                vector[f]=vector[j];
                vector[j]=aux;

            }

        }

    }
}

void MenAMay(int vector[5])
{
    int f, j, aux;

    for (f=0; f<4; f++)
    {
        for(j=f + 1; j<5; j++)
        {
            if(vector[f]<vector[j])
            {
                aux=vector[f];
                vector[f]=vector[j];
                vector[j]=aux;

            }

        }

    }

}


void imprimir(int vector[5])
{
    int f;
    for(f=0; f<5; f++)
    {
        printf("%i\n",vector[f]);
    }
}

int main()
{
    int vector[5];
    cargar (vector);
    printf("vector ordenado de menor a mayor:\n");
    MayAMen(vector);
    imprimir(vector);
    printf("vector ordenado de menor a mayor:\n");
    MenAMay(vector);
    imprimir(vector);
    getchar();
    return 0;
}

