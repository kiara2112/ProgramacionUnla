//Cargar un vector de 5 enteros y luego imprimirlo.

#include<stdio.h>
#include<conio.h>

#define CANTIDAD 5

void cargar(int vec[CANTIDAD])
{
    int f;
    for(f=0;f<CANTIDAD;f++)
    {
        printf("Ingrese componente:");
        scanf("%i",&vec[f]);
    }
}

void imprimir(const int vec[CANTIDAD]) //para que no borremos sin querer los datos dentro de una variable, le podemos poner un const (consulta). Es mas para ayuda (aunque no cambia no tenerlo)
{
    int f;
    for(f=0;f<CANTIDAD;f++)
    {
        printf("%i ",vec[f]);
    }
}


int main()
{
    int vec[CANTIDAD];
    cargar(vec);
    imprimir(vec);
    getch();
    return 0;
}

