//Se desea guardar los sueldos de 5 operarios.
//Desarrollar dos funciones una donde se los ingrese por teclado y otra función donde se los imprima.
//Definir una macro para indicar el tamaño del vector.

// nombre que será reemplazado por un cierto valor en todos los lugares del programa donde se haga referencia a dicho nombre.
//no usar muchas macros


#define TAMANO 5 //#define [nombre de la macro]  [valor de la macro]
#include<stdio.h>
#include<conio.h>

#define FINPROGRAMA "Gracias por utilizar nuestro programa" //se hace en mayuscula (pero puede ser minuscula)
void cargar(float sueldos[TAMANO])
{
    int f;
    for(f=0;f<TAMANO;f++)
    {
        printf("Ingrese sueldo:");
        scanf("%f",&sueldos[f]);
    }
}

void imprimir(float sueldos[TAMANO])
{
    int f;
    printf("Listado de sueldos de empleados.\n");
    for(f=0;f<TAMANO;f++)
    {
        printf("%0.2f\n",sueldos[f]);
    }
}


int main()
{
    float sueldos[TAMANO]; //cuando se compila, siempre que se use la palabra tamano, se vam cambiar por el 5 que se encuentra al lado arriba
    cargar(sueldos);
    imprimir(sueldos);
    printf(FINPROGRAMA);
    getch();
    return 0;
}
