#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define FILA 30
#define COLUM 40

struct pais
{
    char ciudad[FILA][COLUM];
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
    char ciu[FILA];
    char ciudad[FILA][COLUM];
    int ventas[FILA];
    int inicio=x;

    printf("ingresar ciudad(FIN 00)");
    gets(ciu);

    while(strcmp(pais.ciudad, "00")!=0)
    {
        strcpy(ciudad[x], ciu);
        printf ("ingresar ventas:");
        scanf("%i", &ventas[x]);

        x++;

        fflush(stdin);

        printf("ingresar ciudad(FIN 00)");
        gets(ciu[x]);
    }


    FILE*arch;

    arch=fopen("ArchCiudad.dat","ab");

    if(arch==NULL)
    exit(1);

    fwrite(ciudad, sizeof(char),(x-inicio)*COLUM, arch);
    fwrite(ventas, sizeof(int),(x-inicio), arch);

    fclose(arch);

    return x;
}

void listCarga(int x)
{
    FILE*arch;

    arch=fopen("ArchCiudad.dat","r+b");

    if(arch==NULL)
    exit(1);


    fread(ciudad, sizeof(pais), x, arch);

    fclose(arch);

    printf("ciudad\t ventas\n");

    for (int f=0; f<x; f++)
    {
        printf("%s %i\n", pais., ventas[f]);
    }
}

void ordenVentas(int x)
{
    FILE*arch;

    arch=fopen("ArchCiudad.dat","r+b");

    if(arch==NULL)
    exit(1);

    char ciudad[FILA][COLUM];
    int ventas[FILA];
    fread(ciu, sizeof(struct pais),x, arch);

    fclose(arch);

    int aux1, f, k;
    char aux2[COLUM];

    for (f=0; f<x; f++)
    {
        fflush(stdin);
        strcat(auxCiudad[f], ciudad[f]);
        auxVentas[f]=ventas[f];
    }

    for(k=0; k<x-1; k++)
    {
        for(f=0; f<x-1; f++)
        {
           if(auxVentas[f]>auxVentas[f+1])
           {
              aux1=auxVentas[f];
              auxVentas[f]=auxVentas[f+1];
              auxVentas[f+1]=aux1;

              fflush(stdin);

              strcat(aux2,auxCiudad[f]);
              strcat(auxCiudad[f],auxCiudad[f+1]);
              strcat(auxCiudad[f+1], aux2);

           }
        }
    }

    printf("ciudad\tventas\t\n");
    for(f=0; f<x; f++)
    {
        printf("%s %i\n", auxCiudad[f], auxVentas[f]);
    }

}

void corteControl()
{






}

int precarga(int x)
{

    struct pais ciuPre[8] = {
        {"Buenos Aires", 400},
        {"Rosario", 500},
        {"Cordoba", 300},
        {"La plata", 800},
        {"Mar del plata", 150},
        {"Cordoba", 450},
        {"Buenos Aires", 750},
        {"Rosario", 100}
    };

    x=8;

    FILE*arch=fopen("archCiudad.dat", "wb");

    if(arch==NULL)
    exit(1);

    fwrite(ciuPre, sizeof(struct ciudad), x, arch);

    fclose(arch);
    return x;
}

int main ()
{
    char ciudad[FILA][COLUM];
    int ventas[FILA];
    int x=0;
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
    case 2: x=altas(x);
            break;
    case 3: listCarga(x);
            break;
    case 4: ordenVentas(x);
            break;
    case 5:
            break;
    case 6: x=precarga(x);
            break;
    }
    }while(menu!=0);

 getchar();
 return 0;
}
