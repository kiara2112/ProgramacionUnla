
#include <stdio.h>
#include <stdlib.h>

#define TAM 12

void grabar()
{
    FILE *arch;
    arch=fopen("CorteProv.dat","wb");
    if (arch==NULL)
        exit(1);

    int vecProv[TAM]={1,1,1,4,2,2,2,3,3,2,4,5};
    fwrite(vecProv, sizeof(int), TAM, arch);

    int vecCiu[TAM]={1,1,2,7,9,3,10,9,7,11,11,22};
    fwrite(vecCiu, sizeof(int), TAM, arch);

    int vecVent[TAM]={7,5,4,2,9,9,1,4,20,3,14,9};
    fwrite(vecVent, sizeof(int), TAM, arch);

    fclose(arch);
}

void ordenar()
{
    FILE*arch;
    arch=fopen("CorteProv.dat", "rb");
    if (arch==NULL)
        exit(1);

    int vecProv[TAM];
    fread(vecProv, sizeof(int), TAM, arch);

    int vecCiu[TAM];
    fread(vecCiu, sizeof(int), TAM, arch);

    int vecVent[TAM];
    fread(vecVent, sizeof(int), TAM, arch);

    fclose(arch);

    int k, f, aux;

    for(k=0; k<TAM-1; k++)
    {
        for (f=0; f<TAM-1-k; f++)
        {
            int numAct=vecProv[f]*100+vecCiu[f];
            int numSig=vecProv[f+1]*100+vecCiu[f+1];

            if(numAct>numSig)
        {
                aux=vecCiu[f];
                vecCiu[f]=vecCiu[f+1];
                vecCiu[f+1]=aux;

                aux=vecProv[f];
                vecProv[f]=vecProv[f+1];
                vecProv[f+1]=aux;

                aux=vecVent[f];
                vecVent[f]=vecVent[f+1];
                vecVent[f+1]=aux;
        }

        }
    }

    arch = fopen("CorteProv.dat", "wb");

    if (arch == NULL)
        exit(1);

    fwrite(vecProv, sizeof(int), TAM, arch);

    fwrite(vecCiu, sizeof(int), TAM, arch);

    fwrite(vecVent, sizeof(int), TAM, arch);

    fclose(arch);
}


void corteControl()
{
    FILE*arch;
    arch=fopen("CorteProv.dat", "rb");
    if (arch==NULL)
        exit(1);


    int vecProv[TAM];
    fread(vecProv, sizeof(int), TAM, arch);
    int vecCiu[TAM];
    fread(vecCiu, sizeof(int), TAM, arch);
    int vecVent[TAM];
    fread(vecVent, sizeof(int), TAM, arch);

    fclose(arch);

    int x=0;
    int totalGeneral=0;

    while (x<TAM)
    {
        int provAux = vecProv[x];
        int subProv=0;

        printf("PROV: %i\n", provAux);

        // Nivel 2: Mismas provincias
        while (x < TAM && vecProv[x] == provAux)
        {
            int ciuAux=vecCiu[x];
            int subCiu=0;

            printf("Ciudad %i\n", ciuAux);

            // Nivel 3: Misma provincia Y misma ciudad
            while (x < TAM && vecProv[x] == provAux && vecCiu[x] == ciuAux)
            {
                printf("%i\n", vecVent[x]);
                subCiu+=vecVent[x];
                x++;
            }

            printf("Total: %i\n", subCiu);
            subProv+= subCiu;
        }

        printf("\nTotal: %i\n\n", subProv);
        totalGeneral+=subProv;
    }
    printf("TOTAL GENERAL: %i\n", totalGeneral);
}


int main()
{
    grabar();
    ordenar();
    corteControl();
    getch();
    return 0;
}
