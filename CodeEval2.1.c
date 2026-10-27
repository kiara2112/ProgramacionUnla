#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILA 30
#define COLUM 40

struct pais //hago un struct para que los datos del pais y de las ventas siempre se encuentren juntos y no tengamos problemas con el archivo
{
    char ciudad[COLUM];
    int ventas;
};

void borrarArch() //usamos un WB "write binary" (Si el archivo no existe, se crea desde cero. Si ya existe, su contenido previo se borra por completo)
{
    FILE* arch;

    arch=fopen("ArchCiudad.dat", "wb");

    if (arch==NULL)
        exit(1);

    fclose(arch);
}

void altas() //ingresa datos
{
    struct pais ciu;
    FILE*arch;

    arch=fopen("ArchCiudad.dat", "ab");

    if (arch == NULL)
        exit(1);

    printf("Ingresar ciudad (FIN 00): ");
    fflush(stdin);
    gets(ciu.ciudad);

    while (strcmp(ciu.ciudad, "00") != 0)
    {
        printf("Ingresar ventas: ");
        scanf("%i", &ciu.ventas);

        fwrite(&ciu, sizeof(struct pais), 1, arch);

        fflush(stdin);
        printf("Ingresar ciudad (FIN 00): ");
        gets(ciu.ciudad);
    }

    fclose(arch);
}

void listCarga()
{
    FILE* arch;

    arch = fopen("ArchCiudad.dat", "rb");

    if (arch == NULL)
        exit(1);

    struct pais ciu[FILA];
    int x = 0;

    while (fread(&ciu[x], sizeof(struct pais), 1, arch) == 1)//ve el largo de los datos dentro cuando abre
    {
        x++;
    }

    fclose(arch);

    printf("ciudad\t ventas\n");

    for (int f = 0; f < x; f++)
    {
        printf("%s\t %i\t\n", ciu[f].ciudad, ciu[f].ventas);
    }
}

void ordenVentas()
{
    FILE* arch;

    arch = fopen("ArchCiudad.dat", "rb");

    if (arch == NULL)
        exit(1);

    struct pais ciu[FILA];
    int x = 0;

    while (fread(&ciu[x], sizeof(struct pais), 1, arch) == 1)//esto es lo que ve el largo de mi codigo
    {
        x++;
    }

    fclose(arch);

    int f, k;
    struct pais aux;

    for (k = 0; k < x - 1; k++)
    {
        for (f = 0; f < x - 1; f++)
        {
            if (ciu[f].ventas > ciu[f + 1].ventas)
            {
                aux = ciu[f];
                ciu[f] = ciu[f + 1];
                ciu[f + 1] = aux;
            }
        }
    }

    printf("ciudad\tventas\t\n");
    for (f = 0; f < x; f++)
    {
        printf("%s\t %i\n", ciu[f].ciudad, ciu[f].ventas);
    }
}

void corteControl()
{
    int subtotal = 0;
    int total = 0;
    int i=0;
    int k, f;
    struct pais aux;

    FILE* arch;

    arch=fopen("ArchCiudad.dat", "rb");

    if (arch == NULL)
        exit(1);

    struct pais ciu[FILA];
    int x = 0;

    while (fread(&ciu[x], sizeof(struct pais), 1, arch) == 1)//esto es lo que ve el largo de mi codigo
    {
        x++;
    }

    fclose(arch);

    for (k = 0; k < x - 1; k++)
    {
        for (f = 0; f < x - 1; f++)
        {
            if (strcmp(ciu[f].ciudad, ciu[f + 1].ciudad) > 0)
            {
                aux = ciu[f];
                ciu[f] = ciu[f + 1];
                ciu[f + 1] = aux;
            }
        }
    }

    while (x>i)
    {
        char ciudadAux[COLUM];
        strcpy(ciudadAux, ciu[i].ciudad);

        printf("Ciudad %s\n", ciudadAux);

        while (strcmp(ciu[i].ciudad, ciudadAux) == 0)
        {
            subtotal += ciu[i].ventas;

            printf("%i\n", ciu[i].ventas);

            i++;
        }

        printf("Total ciudad %s: %i\n\n", ciudadAux, subtotal);

        total += subtotal;
        subtotal = 0;
    }

    printf("Total final: %i\n", total);
}



void precarga()
{
    struct pais ciuPre[8] = {
        {"AA", 400},
        {"AA", 500},
        {"CC", 300},
        {"DD", 800},
        {"BB", 150},
        {"CC", 450},
        {"DD", 750},
        {"AA", 100}
    };

    FILE* arch = fopen("ArchCiudad.dat", "wb");

    if (arch == NULL)
        exit(1);

    fwrite(ciuPre, sizeof(struct pais), 8, arch);

    fclose(arch);
}

int main ()
{
    int menu;

    do {
        printf("1-Borrar Archivo\n");
        printf("2-Altas (ingreso de datos)\n");
        printf("3-Lista de como se cargo\n");
        printf("4-Lista ordenado por ventas\n");
        printf("5-Lista con corte de control por ciudad\n");
        printf("6-Precarga\n");
        printf("0-FIN\n");

        scanf("%i", &menu);

        switch (menu) {
            case 1: borrarArch();
                    break;
            case 2: altas();
                    break;
            case 3: listCarga();
                    break;
            case 4: ordenVentas();
                    break;
            case 5: corteControl();
                    break;
            case 6: precarga();
                    break;
        }
    } while (menu != 0);

    getchar();
    return 0;
}
