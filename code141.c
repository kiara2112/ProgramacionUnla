//Definir dos variables enteras y almacenar valores por asignación. Definir una variable puntero a entero
//y guardar sucesivamente las direcciones de dichas dos variables y acceder a sus valores.

//Para que un programa sea muy eficiente.
//Modificar variables de tipo int, float, struct etc. en otras funciones.
//Poder requerir y liberar memoria durante la ejecución del programa (hay muchas situaciones donde no sabemos cuanto espacio reservar)

#include<stdio.h>
#include<conio.h>

int main()
{
    int valor1=10;
    int valor2=20;
    int *pe; //asteristico es que la variable es tipo puntero (puntero de variables de tipos enteros)
    pe=&valor1; //pe(variable que apunta a una dirección de memoria donde se almacena un entero.) valor1(variable entera) es incorrecto (pe=valor1) porque no son lo mismo
    printf("Lo apuntado por pe es:%i\n",*pe); //*pe imprime lo apuntado por el puntero pe (en este caso 10)
    printf("La direccion que almacena pe es:%p\n",pe); //%p imprime el puntero
    pe=&valor2; //cambiamos al valor 2
    printf("Lo apuntado por pe es:%i\n",*pe);
    printf("La direccion que almacena pe es:%p\n",pe);
    getch();
    return 0;
}
