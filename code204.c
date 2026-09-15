//Crear y cargar un vector de 10 elementos con valores aleatorios entre 1 y 100.
//Ingresar por teclado un entero y mostrar un mensaje si el número esta dentro del vector.

#include<stdio.h>
#include<conio.h>
#include <time.h>
#include <stdlib.h>

// tipo de dato que creamos asociando un conjunto de enteros con un conjunto de literales.
//enum operaciones {SUMA, RESTA, MULTIPLICACION, DIVISION};
//enum operaciones {SUMA=0, RESTA=1, MULTIPLICACION=2, DIVISION=3}; el compilador por si sola le pone un numero (o podemos hacerlo nosotros)
//enum operaciones {SUMA=1, RESTA, MULTIPLICACION, DIVISION}; si queremos que empiece con 1, los demas por si sola se regulan para que sea 2-3-4
//enum operaciones {SUMA=1, RESTA=20, MULTIPLICACION=50, DIVISION=200} podemos agregarle el valor que queramos a cada uno

//palabra clave enum y nombre del tipo de datos, entre llavge todo lo que puede llevar)

#define CANTIDAD 10

 //definir una variable de tipo enumeración
// enum operaciones op;
//int op; //si guardo 0=suma, 1=resta, 2=multiplicacion y 3=division op=2;

enum texiste {NO, SI};//no=0 si=1

void cargar(int vec[CANTIDAD])
{
    int f;
    srand(time(NULL)); //configura e inicializa la semilla generadora basándose en la hora del sistema para que los números cambien en cada ejecución
    for(f=0;f<CANTIDAD;f++)
        vec[f]=rand()%100 + 1; //La función `rand()` genera un entero aleatorio[1]. Al aplicarle el operador resto `% 100`, el resultado siempre estará acotado entre `0` y `99`. y el +1 hace que sea del 1-100
}

void imprimir(int vec[CANTIDAD])
{
    int f;
    for(f=0;f<CANTIDAD;f++)
        printf("%i ",vec[f]);
    printf("\n\n");
}

void consulta(int vec[CANTIDAD])
{
    int f;
    int valor;
    printf("Ingrese el valor a buscar dentro del vector:");
    scanf("%i",&valor);

    enum texiste existe=NO; //le elegimos un valor (es decir no esta este numer)

    for(f=0;f<CANTIDAD;f++)
        if (valor==vec[f]) //si el numero se encuentra
            existe=SI; //cambia a si
    if (existe==SI)//(existe) como es 1, seria verdadero e iria a al primer if
        printf("El valor ingresado esta dentro del vector");
    else
        printf("El valor ingresado no esta dentro del vector");
}


int main()
{
    int vec[CANTIDAD];
    cargar(vec);
    imprimir(vec);
    consulta(vec);
    getch();
    return 0;
}
