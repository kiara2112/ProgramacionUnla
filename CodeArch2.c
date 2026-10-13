

#include <stdio.h>
#include <stdlib.h>

#define TAM 9

void grabar()
{
    FILE *arch;
    arch = fopen("CorteArch.dat", "wb");

    if (arch == NULL)
        exit(1);

    int vecCiu[TAM] = {1,1,1,2,2,3,4,4,99};
    int vecVent[TAM] = {30,50,3,20,70,80,90,100,0};

    fwrite(vecCiu, sizeof(int), TAM, arch);
    fwrite(vecVent, sizeof(int), TAM, arch);

    fclose(arch);
}

void recuperarVector()
{
    FILE *arch;
    arch = fopen("CorteArch.dat", "rb");

    if (arch == NULL)
        exit(1);

    int vecCiu[TAM];
    int vecVent[TAM];

    fread(vecCiu, sizeof(int), TAM, arch);
    fread(vecVent, sizeof(int), TAM, arch);

    fclose(arch);

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

        printf("Total ciudad %i: %i\n\n",
               ciudadAux, subtotal);

        total += subtotal;
        subtotal = 0;
    }

    printf("Total final: %i\n", total);
}

int main()
{
    grabar();
    recuperarVector();

    return 0;
}
