//Imprimir los números de 1 a 5 en pantalla utilizando recursividad.

#include <stdio.h>
#include<conio.h>

void imprimir(int x)
{
    if (x > 0)
    {
        imprimir(x - 1); //ahora la impresion es antes, despues de dar no vale a la main, si no que muestra del 1-5, queda almacenado en la memoria el poximo numero del - (es decir el 4), sin que se pierdan
        printf("%i ", x); //luego de llegar a 0, ejecuta el printf que se queda en estambait y ejecuta el ultimo numero que entro (el 1), va a volver en esa lineea las 5 veces(pero de ultimo a primero)
    }
}
//no sale directamente al main luego de ejecutarse
int main()
{
    imprimir(5);
    getch();
    return 0;
}
