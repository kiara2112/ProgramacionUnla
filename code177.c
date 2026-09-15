//Otro problema típico que se presenta para analizar la recursividad es el obtener el factorial de un número.
//Recordar que el factorial de un número es el resultado que se obtiene de multiplicar dicho número por el anterior y así sucesivamente hasta llegar a uno.
//Ej. el factorial de 4 es 4 * 3 * 2 * 1 es decir 24.

#include <stdio.h>
#include<conio.h>

int factorial(int fact)
{
    if (fact>0) { //siempre van a estra dentro de condicionales
        int valor = fact * factorial(fact - 1); //fact (el 4 que ingreso del main) * retornando el factorial-1
        return valor; //como no se ejecuta, se va guardando el espacio de valor de rriba, hasta que el if sea falso y se ecumule toda esas cuentas
    }    //despues se devuelve el valor cuando se termine
    else
        return 1; //retorna un 1 y en valor se guarda un 1 y retorna el factorial dando 1*2=2 2*3=6 6*4=24 (se pierde los anteriores y se manda el valor al proximo para que se multiplique por el que se encontraba guardado) hasta dar el resultado de como empezamos y returna ese valor (el 24)
}

int main()
{
    printf("El factorial de 4 es %i", factorial(4));//le pasamos el 4 al int
    getch();
    return 0;
}
