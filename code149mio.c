//Confeccionar un programa que permita cargar un vector de 5 enteros y obtenga el mayor y el menor.
//Implementar dos funciones:
//1-Carga del vector
//2-Otra función que reciba el vector y retorne el mayor y menor elemento del vector por medio de dos parámetros de tipo puntero:
//void mayorMenor(int vec[TAMANO],int *pmayor,int *pmenor)

#define TAMANO 5

#include<stdio.h>
#include<conio.h>

void mayorMenor(int vec[TAMANO],int *pmayor,int *pmenor)
{
    int f;
    *pmayor=vec[0]; //marcamos el primer valor del vector dentro del puntero para mandarlo al mayor y menor
    *pmenor=vec[0];
    for (f=1; f<TAMANO; f++)
    {
        if(*pmayor<vec[f])
        {
            *pmayor=vec[f]; //si el valor es real, cambia el valor del puntero y lo manda al mayor que tenemos en int
        }

         if(*pmenor>vec[f])
        {
            *pmenor=vec[f];
        }

    }

}
//imprimir y cargar no cambia, es igual que siempre
void imprimir(int vec[TAMANO])
{
    int f;
    printf("Vector completo.\n");
    for(f=0;f<TAMANO;f++)
    {
        printf("%i ",vec[f]);
    }
    printf("\n");
}

void cargar (int vec[TAMANO])
{
    int f;
    for (f=0; f<TAMANO; f++)
    {
        printf("cargar valor al vector: ");
        scanf("%i", &vec[f]);
    }

}

int main()
{
    int vector[TAMANO];
    int mayor, menor;
    cargar(vector);
    imprimir(vector);
    mayorMenor(vector,&mayor,&menor); //mandamos al void la direccion del valor que queremos que agarre el puntero, no mandamos el puntero señalizado en este momento
    printf("el menor valor es %i y el mayor %i", menor, mayor); //mostramos el menor y el mayor(no el puntero, aunque se podria, pero es mejor asi porque ya lo definimos dentro de este int)
    getchar();
    return 0;

}
