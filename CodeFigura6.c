//


#include<stdio.h>

int main()
{
    int f, n, j;

    printf("filas de x: ");
    scanf("%i", &n);

    // El bucle empieza en el total de filas (n) y disminuye en cada paso (f--)
    for (f = n; f >= 0; f--) //da vuelta el f>=0
    {
        // Este bucle imprime los guiones según el valor actual de f
        for (j = 0; j < f; j++)
        {
            printf("-");
        }
        printf("x\n"); //fuera del bucle muestra las x, dentro los espacios vacios
    }

    getchar();
    return 0;
}
