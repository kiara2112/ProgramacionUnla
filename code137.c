//Se tiene la siguiente declaración de registro:
//Definir un vector de 4 elementos de tipo producto. Implementar las funciones:
//Carga del vector.
//Impresión del vector.
//Mostrar el nombre del articulo con precio mayor.

#include<stdio.h>
#include<conio.h>

#define TAMANO 4

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto vec[TAMANO])
{
    int f;
    for(f=0;f<TAMANO;f++)
    {
        printf("Ingrese el codigo del producto:");
        scanf("%i",&vec[f].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion:");
        gets(vec[f].descripcion); //a diferencia de los demas, cuando se carga un vector, se carga en todos y los 3 valores que tenemos se cargan
        printf("Ingrese el precio:");
        scanf("%f",&vec[f].precio);
    }
}

void imprimir(struct producto vec[TAMANO])
{
    int f;
    for(f=0;f<TAMANO;f++)
    {
        printf("%i %s %0.2f\n", vec[f].codigo, vec[f].descripcion, vec[f].precio);
    }
}

void precioMayor(struct producto vec[TAMANO])
{
    int f;
    int pos=0;
    for(f=1;f<TAMANO;f++)
    {
        if (vec[f].precio>vec[pos].precio)
        {
            pos=f;
        }
    }
    printf("Producto mas caro: %s",vec[pos].descripcion);
}


int main()
{
    struct producto vector[TAMANO]; //cada elemento del vector, se puede cargar los 3 datos que se ingresan
    cargar(vector);
    imprimir(vector);
    precioMayor(vector);
    getch();
    return 0;
}
