//Implementar un algoritmo recursivo para ordenar los elementos de un vector.

#include<stdio.h>
#include<conio.h>

#define CANTIDAD 5

void cargar(int vec[CANTIDAD])
{
    int f;
    for (f = 0; f < 5; f++)
    {
        printf("Ingrese elemento:");
        scanf("%i",&vec[f]);
    }
}
//LO QUE CAMBIA
void ordenar(int vec[CANTIDAD],int cant) //vector y cantidad de valores que debe de ordenar
{
    if (cant > 1) //cuando cant da 1-1=0 da falsa y sale de este if, no vuelve a repetir el ordenar y sale de void
    {
        int f;
        //Nos ordena un solo elemento
        for (f = 0; f < cant - 1; f++) //utilizamos solo un for (0, 1, 2, 3, menos 1)
        {
            if (vec[f] > vec[f + 1]) //como se hace normalmente en un ordenamiento, esto no cambia
            {
                int aux = vec[f];
                vec[f] = vec[f + 1];
                vec[f + 1] = aux;
            }
        }
        ordenar(vec, cant - 1); //recursiva despues devuelta el for pero con uno menos, asi que lo hace hasta que se quede sin numeros y salga de este bucle (el ordenar funciona como el otro for)
    }
}

void imprimir(int vec[CANTIDAD])
{
    int f;
    for (f = 0; f < 5; f++)
    {
        printf("%i ", vec[f]);
    }
}


int main()
{
    int vec[CANTIDAD];
    cargar(vec);
    ordenar(vec, CANTIDAD);
    imprimir(vec);
    getch();
    return 0;
}
