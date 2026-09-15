//Plantear una función que reciba la dirección de un registro y mediante esta modificar los campos de la variable que le pasamos desde la main.
//Imprimir el registro definido en la main.

#include<stdio.h>
#include<conio.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto *pprod)
{
    printf("Ingrese codigo:");
    scanf("%i",&pprod->codigo); //en vez de utilizar los parentesis (*pprod), se utiliza el operador flecha
    fflush(stdin);
    printf("Ingrese descripcion:");
    gets(pprod->descripcion);//nombre del puntero, flecha y ubicacion (sin el punto)
    printf("Ingrese precio:");
    scanf("%f",&pprod->precio);
}

void imprimir(struct producto prod)
{
    printf("Codigo:%i\n",prod.codigo);
    printf("Descripcion:%s\n",prod.descripcion);
    printf("Precio:%0.2f",prod.precio);
}


int main()
{
    struct producto prod;
    cargar(&prod);
    imprimir(prod);
    getch();
    return 0;
}
