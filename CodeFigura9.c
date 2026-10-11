//flecha hacia la derecha
//    x
//   x
//  x
// x
//  x
//   x
//    x

#include<stdio.h>
int main()
{
    int f, n, j;

    n=6;

    // El bucle empieza en el total de filas (n) y disminuye en cada paso (f--)
    for (f=n; f>=1; f--) //da vuelta el f>=1
    {
        // Este bucle imprime los guiones según el valor actual de f
        for (j=1; j < f; j++)
        {
            printf(" ");
        }
        printf("x\n"); //fuera del bucle muestra las x, dentro los espacios vacios
    }

    for (f=2; f<=n; f++)
    {
        for (j=1; j<f; j++)
        {

            printf(" ");

        }
            printf("x\n"); //y imprima una cruz, si quisieramos que sea relleno


    }

    getchar();
    return 0;
}
