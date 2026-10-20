


#include <stdio.h>
#include <stdlib.h>

#define TAM 12

void grabar()
{
    FILE *arch = fopen("CorteProv2.dat", "wb");
    if (arch == NULL) exit(1);

    int vecProv[TAM] = {1, 1, 1, 4, 2, 2, 2, 3, 3, 2, 4, 5};
    int vecCiu[TAM]  = {1, 1, 2, 7, 9, 3, 10, 9, 7, 11, 11, 22};
    int vecVent[TAM] = {7, 5, 4, 2, 9, 9, 1, 4, 20, 3, 14, 9};

    fwrite(vecProv, sizeof(int), TAM, arch);
    fwrite(vecCiu, sizeof(int), TAM, arch);
    fwrite(vecVent, sizeof(int), TAM, arch);

    fclose(arch);
}

void ordenar()
{
    FILE *arch = fopen("CorteProv2.dat", "rb");
    if (arch == NULL) exit(1);

    int vecProv[TAM];
    int vecCiu[TAM];
    int vecVent[TAM];

    fread(vecProv, sizeof(int), TAM, arch);
    fread(vecCiu, sizeof(int), TAM, arch);
    fread(vecVent, sizeof(int), TAM, arch);

    fclose(arch);

    int k, f, aux;

    for (k = 0; k < TAM - 1; k++)
    {
        for (f = 0; f < TAM - 1 - k; f++)
        {
            // Clave doble: Provincia (principal) + Ciudad (secundaria)
            int numAct = vecProv[f] * 1000 + vecCiu[f];
            int numSig = vecProv[f + 1] * 1000 + vecCiu[f + 1];

            if (numAct > numSig)
            { // <-- Llave de apertura obligatoria
                aux = vecCiu[f];
                vecCiu[f] = vecCiu[f + 1];
                vecCiu[f + 1] = aux;

                aux = vecProv[f];
                vecProv[f] = vecProv[f + 1];
                vecProv[f + 1] = aux;

                aux = vecVent[f];
                vecVent[f] = vecVent[f + 1];
                vecVent[f + 1] = aux;
            } // <-- Llave de cierre obligatoria
        }
    }

    // CORRECCIÓN: Guardar los vectores ordenados nuevamente en el archivo
    arch = fopen("CorteProv2.dat", "wb");
    if (arch == NULL) exit(1);

    fwrite(vecProv, sizeof(int), TAM, arch);
    fwrite(vecCiu, sizeof(int), TAM, arch);
    fwrite(vecVent, sizeof(int), TAM, arch);

    fclose(arch);
}

void corteControl()
{
    FILE *arch = fopen("CorteProv2.dat", "rb");
    if (arch == NULL) exit(1);

    int vecProv[TAM];
    int vecCiu[TAM];
    int vecVent[TAM];

    fread(vecProv, sizeof(int), TAM, arch);
    fread(vecCiu, sizeof(int), TAM, arch);
    fread(vecVent, sizeof(int), TAM, arch);

    fclose(arch);

    int x = 0;
    int totalGeneral = 0;

    while (x < TAM)
    {
        int provAux = vecProv[x];
        int subProv = 0;

        printf("PROV: %i\n", provAux);

        // Se agrega 'x < TAM' en los bucles internos para evitar salir de rango
        while (x < TAM && vecProv[x] == provAux)
        {
            int ciuAux = vecCiu[x];
            int subCiu = 0;

            printf("\n  Ciudad %i\n", ciuAux);

            while (x < TAM && vecProv[x] == provAux && vecCiu[x] == ciuAux)
            {
                printf("    Venta: %i\n", vecVent[x]);
                subCiu += vecVent[x];
                x++;
            }

            printf("  Total Ciudad %i: %i\n", ciuAux, subCiu);
            subProv += subCiu;
        }

        printf("\nTOTAL PROVINCIA %i: %i\n\n", provAux, subProv);
        totalGeneral += subProv;
    }

    printf("TOTAL GENERAL: %i\n", totalGeneral);
}

int main()
{
    grabar();
    ordenar();
    corteControl();
    getchar();
    return 0;
}
