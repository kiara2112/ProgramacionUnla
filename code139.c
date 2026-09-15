//Se tienen las siguientes declaraciones de registros:
//Definir un vector de 3 elementos de tipo producto, realizar su carga e impresión.

#include<stdio.h>
#include<conio.h>

#define TAMANO 3

struct fecha {
    int dd;
    int mm;
    int aa;
};

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento; //fechavencimiento es de tipo registro struct fecha
};

void cargar(struct producto vec[TAMANO])
{
    int f;
    for(f=0;f<TAMANO;f++)
    {
        printf("Ingrese codigo del producto:");
        scanf("%i",&vec[f].codigo);
        fflush(stdin);
        printf("Ingrese descripcion:");
        gets(vec[f].descripcion);
        printf("Ingrese precio:");
        scanf("%f",&vec[f].precio);
        printf("Fecha de vencimiento.\n");
        printf("Dia:");
        scanf("%i",&vec[f].fechavencimiento.dd); //nombre del vector, el campo de struct producto y su subdivision de fecha del dia
        printf("Mes:");
        scanf("%i",&vec[f].fechavencimiento.mm);
        printf("Año:");
        scanf("%i",&vec[f].fechavencimiento.aa);
    }
}

void imprimir(struct producto vec[TAMANO])
{
    int f;
    for(f=0;f<TAMANO;f++)
    {
        printf("%i %s %0.2f %i/%i/%i\n",vec[f].codigo, vec[f].descripcion, vec[f].precio,
               vec[f].fechavencimiento.dd, vec[f].fechavencimiento.mm, vec[f].fechavencimiento.aa);
    }
}


int main()
{
    struct producto vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    getch();
    return 0;
}
