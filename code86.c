//Confeccionar una aplicación que solicite la carga de dos valores enteros y muestre su suma.
//Repetir la carga de otros dos valores, sumarlos y mostrar.
//Mostrar una línea separadora después de cada vez que cargamos dos valores y mostramos su suma.


#include<stdio.h>
#include<conio.h>

void cargaSuma()
{
    int valor1,valor2,suma;
    printf("Ingrese el primer valor:");
    scanf("%i",&valor1);
    printf("Ingrese el segundo valor:");
    scanf("%i",&valor2);
    suma=valor1+valor2;
    printf("La suma de los dos valores es: %i",suma);
}

void separacion()
{
    printf("\n*******************************\n");
}


int main() //siempre empieza en la main
{
    cargaSuma();
    separacion();//lo mismo con separacion que no hace nada mas que poner una recta
    cargaSuma(); //llamar 2 veces carga suma, porque pide ingresar 4 numeros, podemos repetir el cargarSuma sin la necesidad de hacer 2 void que hagan lo mismo, si podemos repetirlo
    separacion();
    getch();
    return 0;
}
