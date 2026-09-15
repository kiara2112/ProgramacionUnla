//Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
//Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante.
//Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.

#include<stdio.h>

int main()
{
    int x, y, f, n;
    printf("ingresar cantidad de rectas: ");
    scanf("%i", &n);

    for (f=1; f<=n; f++)
    {
    printf("Ingrese coordenada x:");
    scanf("%i",&x);
    printf("Ingrese coordenada y:");
    scanf("%i",&y);

    if (x > 0 && y > 0)
    {
        printf("Se encuentra en el primer cuadrante");
    }
    else
    {
        if (x < 0 && y > 0)
        {
            printf("Se encuentra en el segundo cuadrante");
        }
        else
        {
            if (x < 0 && y < 0)
            {
                printf("Se encuentra en el tercer cuadrante");
            }
            else
            {
                printf("Se encuentra en el cuarto cuadrante");
            }
        }
    }
    printf("\n");
}
    getchar();
    return 0;
    }

