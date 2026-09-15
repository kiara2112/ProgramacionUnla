//Se tiene la siguiente declaración de registro:
//Definir un puntero de tipo producto y luego mediante la función malloc crear un registro en la pila dinámica.
//Cargar el registro, imprimirlo y finalmente liberar el espacio reservado mediante la función free.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

// Para trabajar con memoria dinámica en C es obligatorio utilizar punteros

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};


int main()
{
    struct producto *prod;

    prod=malloc(sizeof(struct producto)); //nos va a devolver cuantos bytes va a usar (esas cosa hacia en void, pero aca lo hace dentro de int main)

    prod->codigo=1;
    strcpy(prod->descripcion,"papas");
    prod->precio=10.50;

    printf("Codigo del articulo:%i\n",prod->codigo);
    printf("Descripcion:%s\n",prod->descripcion);
    printf("Precio:%0.2f",prod->precio);

    free(prod);

    getch();
    return 0;
}
