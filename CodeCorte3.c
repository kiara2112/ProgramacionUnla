



#include <stdio.h>

int main()
{
    int ciudad, venta, ciudadAux;
    int subtotal = 0, total = 0;
    int x = 0, inicio;

    int vecCiu[100];
    int vecVent[100];

    printf("Ingresar ciudad (99 para finalizar): ");
    scanf("%i", &ciudad);

    while (ciudad != 99)
    {
        ciudadAux = ciudad;
        inicio = x;
        subtotal = 0;

        while (ciudad == ciudadAux && x < 100)
        {
            vecCiu[x] = ciudad;

            printf("Ingresar venta: ");
            scanf("%i", &venta);

            vecVent[x] = venta;
            subtotal += venta;
            x++;

            printf("Ingresar ciudad (99 para finalizar): ");
            scanf("%i", &ciudad);
        }

        printf("\nCiudad: %i\n", ciudadAux);
        printf("Ventas ingresadas:\n");

        for (int f = inicio; f < x; f++)
        {
            printf("%i\t%i\n", vecCiu[f], vecVent[f]);
        }

        printf("Total ciudad %i: %i\n\n",
               ciudadAux, subtotal);

        total += subtotal;
    }

    printf("Total final: %i\n", total);

    return 0;
}
