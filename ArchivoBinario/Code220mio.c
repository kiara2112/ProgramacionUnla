//Crear un archivo llamado "archivo2.dat". Solicitar la carga de dos enteros y dos float por teclado. Almacenar en el archivo primero los dos enteros y seguidamente los dos float.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int ente1, ente2; //definimos donde vamos a guardar en primer lugar la informacion
    float floa1, floa2;
    FILE *arch;
    arch=fopen("archivo2.dat", "wb"); //creamos el archivo2.dat
    if (arch==NULL) //si no se crea, se cierra
        exit(1);

    printf("ingresar entero: ");
    scanf("%i", &ente1);
    fwrite(&ente1, sizeof(int), 1, arch);

    printf("ingresar entero: ");
    scanf("%i", &ente2);
    fwrite(&ente2, sizeof(int), 1, arch);

    printf("ingresar Float: ");
    scanf("%f", &floa1); //ingresa el float y lo mandamos al archivo despues
    fwrite(&floa1, sizeof(float), 1, arch);

    printf("ingresar float: ");
    scanf("%f", &floa2);
    fwrite(&floa2, sizeof(float), 1, arch);

    fclose(arch);

    printf("se creo el archivo con 2 enteros y 2 floats");
    getch();
    return 0;
}
