//Realizar la carga de valores enteros por teclado y sumarlos.
//Cada vez que se carga un valor pedir al operador que ingrese si quiere cargar otro valor ingresando una 's' o 'S' (minúscula o mayúscula)

#include<stdio.h>
#include<conio.h>

int main()
{
    char otro;
    int num, suma;
    suma=0;

    do{
        printf("ingresar numero entero: ");
        scanf("%i", &num);

        suma=suma+num;

        printf("Ingrese S para seguir, cualquiera para salir: ");//para salir del programa ingresar otra cosa que no sea S, como ejemplo pero podria ser cualquiera
        scanf(" %c", &otro);
    }while (otro=='s' || otro=='S');

    printf("la suma de los numeros es: ");
    printf("%i", suma);

    getch();
    return 0;
}
