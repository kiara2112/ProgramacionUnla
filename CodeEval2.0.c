
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define FILA 30
#define COLUM 40

struct pais
{
    char ciudad[COLUM];
    int ventas;
};

void borrarArch()
{
    FILE*arch;

    arch=fopen("ArchCiudad.dat","wb");

    if(arch==NULL)
    exit(1);

    fclose(arch);
}


int altas(int x)
{
    struct pais ciu;
    FILE *arch;

    arch=fopen("ArchCiudad.dat", "ab");

    if(arch==NULL)
        exit(1);

    fread(&x, sizeof(int),1, arch);

    printf("Ingresar ciudad (FIN 00): ");
    fflush(stdin);
    gets(ciu.ciudad);

    while(strcmp(ciu.ciudad, "00") != 0 && x < FILA)
    {
        printf("Ingresar ventas: ");
        scanf("%i", &ciu.ventas);

        fwrite(&ciu, sizeof(struct pais), 1, arch);

        x++;

        fflush(stdin);
        printf("Ingresar ciudad (FIN 00): ");
        gets(ciu.ciudad);
    }
    fwrite(&x, sizeof(int), 1, arch);
    fclose(arch);

    return x;
}

void listCarga(int x)
{
    FILE*arch;

    arch=fopen("ArchCiudad.dat","r+b");

    if(arch==NULL)
    exit(1);

    struct pais ciu[COLUM];
    fread(ciu, sizeof(struct pais), x, arch);
    fread(&x, sizeof(int),1, arch);

    fclose(arch);

    printf("ciudad\t ventas\n");

    for (int f=0; f<x; f++)
    {
        printf("%s\t %i\t\n", ciu[f].ciudad, ciu[f].ventas);
    }
}

void ordenVentas(int x)
{
    FILE*arch;

    arch=fopen("ArchCiudad.dat","r+b");

    if(arch==NULL)
    exit(1);

    struct pais ciu[COLUM];
    fread(ciu, sizeof(struct pais),x, arch);
    fread(&x, sizeof(int),1, arch);

    fclose(arch);

    int f, k;
    struct pais aux;


    for(k=0; k<x-1; k++)
    {
        for(f=0; f<x-1; f++)
        {
           if(ciu[f].ventas>ciu[f+1].ventas)
           {

                aux = ciu[f];
                ciu[f] = ciu[f+1];
                ciu[f+1] = aux;
           }
        }
    }

    printf("ciudad\tventas\t\n");
    for(f=0; f<x; f++)
    {
        printf("%s %i\n", ciu[f].ciudad, ciu[f].ventas);
    }

}

int precarga(int x)
{

    struct pais ciuPre[8] = {
        {"AA", 400},
        {"BB", 500},
        {"CC", 300},
        {"DD", 800},
        {"BB", 150},
        {"CC", 450},
        {"DD", 750},
        {"AA", 100}
    };

    x=8;

    FILE*arch=fopen("ArchCiudad.dat", "wb");

    if(arch==NULL)
    exit(1);

    fwrite(ciuPre, sizeof(struct pais), 8, arch);
    fwrite(&x, sizeof(int), 1, arch);

    fclose(arch);
    return x;
}

int main ()
{
    int menu;

    do{
    printf("1-Borrar Archivo\n");
    printf("2-Altas (ingreso de datos)\n");
    printf("3-Lista de como se cargo\n");
    printf("4-Lista ordenado por ventas\n");
    printf("5-Lista con corte de control por ciudad\n");
    printf("6-Precarga\n");
    printf("0-FIN\n");

    scanf("%i", &menu);

    switch(menu){
    case 1: borrarArch();
            break;
    case 2: altas();
            break;
    case 3: listCarga();
            break;
    case 4: ordenVentas();
            break;
    case 5:
            break;
    case 6: precarga();
            break;
    }
    }while(menu!=0);

 getchar();
 return 0;
}

