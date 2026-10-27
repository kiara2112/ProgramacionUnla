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

    arch=fopen("ArchCiudad.dat", "ab"); //no modifica los datos anteriormente ingresados

    if (arch == NULL)
        exit(1);

    printf("Ingresar ciudad (FIN 00): "); //esta fuera, porque si ingresa y pongo 00, no ingresa al while y no me pide nada
    scanf(" %s", ciu.ciudad); //en vez de usar gets, usa scanf %s y un espacio antes del % para hacer como si fuera el fflush

    while (strcmp(ciu.ciudad, "00") != 0) //si la ciudad es 00, da de resultado un 0, es decir que es verdadero y termina el programa
    {
        printf("Ingresar ventas: "); //ingresa ventas normalmente
        scanf("%i", &ciu.ventas);

        fwrite(&ciu, sizeof(struct pais), 1, arch); //lo carga al archivo

        printf("Ingresar ciudad (FIN 00):"); //vuelve a preguntar
        scanf(" %s",ciu.ciudad);
    }

    fclose(arch); //cierra el archivo
}

void listCarga()
{
    FILE* arch;

    arch = fopen("ArchCiudad.dat", "rb"); //abre el archivo en lectura

    if (arch==NULL)
        exit(1);

    struct pais ciu[FILA]; //usa un struct
    int x = 0;

    while (fread(&ciu[x], sizeof(struct pais), 1, arch) == 1)//ve el largo de los datos dentro cuando abre, para poder mostrar la lista de carga correctamente sin desbordarse
    {
        x++; //va sumando hasta que sea falso
    }

    fclose(arch);
    if (x!=0)
    printf("ciudad\t ventas\n"); //muestra ventas y ciudad como fue ingresado

    for (int f=0; f<x; f++)
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

    struct pais ciu[FILA];//ingresa fila
    int x = 0;

    while (fread(&ciu[x], sizeof(struct pais), 1, arch) == 1)//esto es lo que ve el largo de mi codigo
    {
        x++;
    }

    fclose(arch);

    int f, k;
    struct pais aux; //utiliza un struct auxiliar con otro nombre, pero con los mismos datos (ciudad y ventas)

    for (k=0; k<x-1; k++)
    {
        for (f=0; f<x-1-k; f++)
        {
            if (ciu[f].ventas > ciu[f + 1].ventas) //ve si las ventas son mayores que el siguiente
            {
                aux = ciu[f];
                ciu[f] = ciu[f + 1]; //intercambian los struct
                ciu[f + 1] = aux;
            }
        }
    }
    if (x!=0)
    printf("ciudad\tventas\t\n");
    for (f = 0; f < x; f++)
    {
        printf("%s\t %i\n", ciu[f].ciudad, ciu[f].ventas); //muestra
    }
}

void corteControl()
{
    int subtotal = 0; //utiliza auxiliares para contar
    int total = 0; //el total de todo el programa
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
            if (strcmp(ciu[f].ciudad, ciu[f + 1].ciudad) > 0) //ordena por ciudad, (en este caso de menor a mayor, pero no temdria que ser necesario)
            {
                aux = ciu[f];
                ciu[f] = ciu[f + 1];
                ciu[f + 1] = aux;
            }
        }
    }

    while (x>i) //como ya me fije anteriormente los datos ingresados, hasta que x sea mayor que i (el que va sumando dentro) va a ejecutarse
    {
        char ciudadAux[COLUM]; //usamos una ciudad auxiliar y lo guardamos dentro
        strcpy(ciudadAux, ciu[i].ciudad);

        printf("Ciudad %s\n", ciudadAux);

        while (strcmp(ciu[i].ciudad, ciudadAux) == 0) //si son iguales, seguir ejecutando
        {
            subtotal += ciu[i].ventas;

            printf("\t  %i\n", ciu[i].ventas); // tiene que haber 2 espacios antes del % y una tabulacion de abajo

            i++;
        }
        printf("Subtotal: %i\n", subtotal);

        total += subtotal; //subtotal se suma al total y se reinicia
        subtotal = 0;
    }
    if (x!=0)
    printf("Total final: %i\n", total); //total de todas las ventas
}



void precarga()
{
    struct pais ciuPre[8] = { //ingresna los datos como bloques de cada uno
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

        scanf("%i", &menu); //MENU DECIDE QUE HACEMOS

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
