//Se tiene la siguiente declaración de registro:
//Plantear una función que reciba la dirección de un registro y mediante esta modificar los campos de la variable que le pasamos desde la main.
//Imprimir el registro definido en la main.

//DE ESTA FORMA NO SUELE UTILIZARSE (*pprod), IR AL 151. Lo demas no cambia, solo la cargaS
#include<stdio.h>
#include<conio.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto *pprod) //cargamos un puntero de tipo struct *pprod
{
    printf("Ingrese codigo:");
    scanf("%i",&(*pprod).codigo); //requiere que se ejecute primero el parentesis y luego codigo. Por eso para no tener problemas se pone dentro
    fflush(stdin);
    printf("Ingrese descripcion:");
    gets((*pprod).descripcion);
    printf("Ingrese precio:");
    scanf("%f",&(*pprod).precio);
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
    cargar(&prod); //le mandamos la direccion de prod, porque si no funcionaria
    imprimir(prod); //como no se cambian los datos, no utilizamos &
    getch();
    return 0;
}
