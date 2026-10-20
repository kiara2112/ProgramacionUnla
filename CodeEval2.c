#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#DEFINE FILA 30
#DEFINE COLUM 40


void borrarArch()
{
    FILE*arch;

    arch=fopen("ArchCiudad.dat","wb");

    if(arch==NULL)
    exit(1);

    fclose(arch);
}

int altas(char ciudad[FILA][COLUM], int ventas[FILA], int x)
{
    char ciu[40];

    printf("ingresar ciudad(FIN 00)");
    gets(ciu[x]);

    while(strcmp(ciu, "00")!=0)
    {
        strcpy(ciudad[x], ciu);
        printf ("ingresar ventas:");
        scanf("i", &ventas[x]);

        x++;

        printf("ingresar ciudad(FIN 00)");
        gets(ciu[x]);
    }


    FILE*arch;

    arch=fopen(ArchCiudad.dat,"ab")

    if(arch==NULL)
    exit(1);

    fwrite(ciudad[x], sizeof(int),x, arch);
    fwrite(&ventas[x], sizeof(int),x, arch);

    fclose(arch);

    return x;
}

void listCarga(char ciudad[FILA][COLUM], int ventas[FILA], int x)
{

    printf("ciudad\t ventas\n")

    for (f=0; f<x; f++)
    {
        printf("%s %i", ciudad[f], ventas[f])
    }

    fclose(arch);
}

void ordenVentas(int x)
{









}

void corteControl()
{






}

int precarga()
{

    char ciuPre[8]={"Buenos Aires",
                 "Rosario",
                 "Cordoba",
                 "La plata",
                 "Mar del plata",
                 "Cordoba",
                 "Buenos Aires",
                 "Rosario"}

    int ventasPre[8] = {400, 500, 300, 800, 150, 450, 750, 100};

    x=8;

    FILE*arch=fopen(archCiudad.dat, "wb")

    if(arch==NULL)
    exit(1);

    fwrite(&ciudad, sizeof(int),x, arch);
    fwrite(&ventas, sizeof(int),x, arch);
}

int main ()
{
    ciudad[FILA][COLUM];
    ventas[FILA];
    x=0;

    do{
    printf("1-Borrar Archivo\n");
    printf("2-Altas (ingreso de datos)\n");
    printf("3-Lista de como se cargo\n");
    printf("4-Lista ordenado por ventas\n");
    printf("5-Lista con corte de control por ciudad\n");
    printf("6-Precarga");
    printf("0-FIN");

    switch(menu){
    case 1: borrarArch();
            break;

    case 2: x=(ciudad, ventas, x);
            break;

    case 3: listCarga(ciudad, ventas, x);
            break;

    case 4: break;
    case 5: break;

    case 6: x=precarga(ciudad)
            break;

    }

    }while(menu==0);

 getchar();
 return 0;

}

