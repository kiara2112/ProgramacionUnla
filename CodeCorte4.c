


#include <stdio.h>

#define TAM 9

void procesarCorteControl(const int vecCiu[], const int vecVent[])
{
    int x = 0;
    int subtotal = 0;
    int total = 0;

    while (vecCiu[x] != 99)
    {
        int ciudadAux = vecCiu[x];

        printf("Ciudad %i\n", ciudadAux);

        while (vecCiu[x] == ciudadAux)
        {
            subtotal += vecVent[x];

            printf("Venta: %i\n", vecVent[x]);

            x++;
        }

        printf("Total ciudad %i: %i\n\n", ciudadAux, subtotal);

        total += subtotal;
        subtotal = 0;
    }

    printf("Total final: %i\n", total);
}

int main()
{
    // Datos cargados directamente en memoria
    int vecCiu[TAM]  = {1,  1,  1,  2,  2,  3,  4,  4, 99};
    int vecVent[TAM] = {30, 50, 3,  20, 70, 80, 90, 100, 0};

    procesarCorteControl(vecCiu, vecVent);

    return 0;
}
