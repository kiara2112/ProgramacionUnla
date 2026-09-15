//Ingresar por teclado un entero que represente la cantidad de elementos que debe crearse un vector.
//Crear el vector en forma dinámica, cargar e imprimir sus datos. Hacer todo en la main.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


//(memory allocate = Asignar memoria) y debemos devolverla con la funcion free (llamarla y liberarla luego)
//#include<stdlib.h> (para incluirlo)


int main()
{
    int *pe; //puntero entero para elegir la cantidad y luego dentro le ponemos la cantidad que va a ocupar
    int tam; //variable donde va ir el espacio
    //int vec[cant]; C no nos permite, para elegir la cantidad dentro de un vector, de esta forma si nos dejan
    int f;
    printf("Cuantos elementos tendra el vector:"); //cuantos espacios queremos que tenga el vector
    scanf("%i",&tam); //ingresa el entero de la cantidad

    //devuelta la funcion MALLOC (tam*sizeof(int))
    //                           40=10*4 (si es en 32 bits el copilador, nos devuelve 4 y hace la multiplicacion) pero los espacios siguen siendo 10 lugares
    pe=malloc(tam*sizeof(int));

    for(f=0;f<tam;f++) //cargamos normalmente y dentro de pe tenemos la cantidad que ocupa (ya que es un puntero)
    {
        printf("Ingrese elemento:");
        scanf("%i",&pe[f]);
    }
    printf("Contenido del vector dinamico:");
    for(f=0;f<tam;f++)
    {
        printf("%i ",pe[f]);
    }
    free(pe); //liberamos el pe (obligatorio)
    getch();
    return 0;
}
