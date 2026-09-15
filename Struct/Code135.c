
//Se tiene la siguiente declaración de registro:
//Plantear dos funciones una que cargue un registro de tipo producto y otra que lo imprima.
//En la función main definir dos variables de tipo producto llamar a las funciones anteriores.

#include<stdio.h>
#include<conio.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};
 //para cargar se usa un struct (en vez de int, void, etc)

struct producto cargar() //este retorna los 3 valores, pero no define dentro
{
    struct producto pro; //se debe de empezar un valor que vamos a ingresar los datos (en struct)
    printf("Ingrese el codigo de producto:");
    scanf("%i",&pro.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion:");
    gets(pro.descripcion);
    printf("Ingrese el precio:");
    scanf("%f",&pro.precio);
    return pro;
};

void imprimir(struct producto pro)
{
    printf("Datos del producto.\n");
    printf("Codigo del producto:%i\n",pro.codigo);
    printf("Descripcion:%s\n",pro.descripcion);
    printf("precio:%0.2f\n",pro.precio);
}

int main()
{
    struct producto pro1,pro2;
    pro1=cargar(); //el valor de cargar() ingresa al pro1 que retornamos. Pero no va ningun valor dentro de () (supongo que como no ingresamos ningun valor, si no que nos viene un valor)
    pro2=cargar();
    imprimir(pro1);
    imprimir(pro2);
    getch();
    return 0;
}
