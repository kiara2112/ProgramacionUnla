//Se tiene la siguiente declaración de registro:
//Definir una variable en la función main e inicializar por asignación los tres campos.
//Plantear una función que reciba el registro y lo imprima.

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};
                                //puede ser otro nombre porque p solo copia, pero no cambia el original
void imprimir(struct producto p) //en void solo sirve para consultarlo, si cambiamos aca un valor, no se cambia en el int main como con vectores
{
    printf("Codigo del producto:%i\n",p.codigo);
    printf("Descripcion:%s\n",p.descripcion);
    printf("precio:%0.2f",p.precio);
}

int main()
{ //en vez de escribir todo podemos usar algo mas conciso
    struct producto pro; //struct producto pro={1,"naranjas",12.50}; y eliminamos los 3 renglones de abajo (en el orden que lo tenemos arriba)
    pro.codigo=1;
    strcpy(pro.descripcion,"naranjas");
    pro.precio=12.50;
    imprimir(pro);
    getch();
    return 0;
}
