//Declarar un registro que permita almacenar el codigo, descripcion y precio de un producto.
//Luego definir dos variables de dicho tipo, cargarlas e imprimir el nombre del producto que tiene mayor precio.

#include<stdio.h>
#include<conio.h>

//A un vector o matriz accedemos a sus elementos por medio de subíndices, a los elementos de un registro se los llama campos y tienen cada uno un nombre.
//puede guardar cosas que no necesariamente debe de ser del mismo tipo, pero si relacionados
struct producto { //deben de declararse
    int codigo;
    char descripcion[41];
    float precio;
}; //obligatorio el punto y coma


int main()
{
    struct producto pro1,pro2; //con el struct definimos 2 variables que tienen las carecteristicas que marcamos anteriormente
    printf("Ingrese el codigo del producto:");
    scanf("%i",&pro1.codigo); //cuando ingresamos un valor debemos marcar la variable y que se carga (DEBE DE HABER UN PUNTO, VEZ DE LA COMA)
    fflush(stdin); //demos liberar el buffer del teclado porque ingresmaos una palabra ahora
    printf("Ingrese la descripcion:");
    gets(pro1.descripcion);
    printf("Ingrese el precio:");
    scanf("%f",&pro1.precio);
    printf("Ingrese el codigo del producto:");
    scanf("%i",&pro2.codigo);
    fflush(stdin); //volvemos a ingresar pero con el pro2
    printf("Ingrese la descripcion:");
    gets(pro2.descripcion);
    printf("Ingrese el precio:");
    scanf("%f",&pro2.precio);
    if (pro1.precio>pro2.precio) //comparamos los precios, pero mostraos las descripciones
    {
        printf("El producto %s tiene un precio mayor",pro1.descripcion);
    }
    else
    {
        if (pro2.precio>pro1.precio)
        {
            printf("El producto %s tiene un precio mayor",pro2.descripcion);
        }
        else
        {
            printf("Tienen igual precio");
        }
    }
    getch();
    return 0;
}

