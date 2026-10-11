//Crear un archivo binario y almacenar un caracter, un entero y un float. Identificar en el disco duro el archivo creado y cual es su tamaño en bytes.

//guardar en memoria secundaria(archivo)
//se ubican uno a continuacion de otro
//0 a adelante



#include<stdio.h>//administra archivos binarios, FILE
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch; //un puntero de tipo FILE (Dentro de este archivo se encuentra)
    arch=fopen("archivo1.dat","wb"); //llamamos al nombre fisico y llamamos al Fopen
    if (arch==NULL) //si no se pudo crear el archivo, termina el programa y nos return 1 (asi nos damos cuenta de esto)
        exit(1);

    char letra='A';
    fwrite(&letra, sizeof(char), 1, arch); //fwrite, pasamos la direccion a grabar el archivo(&letra), la cantidad de bits (sizeof(char)recupera el tamaño solo), guardamos solo 1 variable (mostramos con 1, sin es un vector este cambiaria), nombre logico del archivo (arch)
    int valor1=12;
    fwrite(&valor1, sizeof(int), 1, arch); //se graba a continuacion este
    float valor2=5.25;
    fwrite(&valor2, sizeof(float), 1, arch);
    //char (1 byte), un int (4 bytes) y un float (4 bytes) el archivo DAT muestra 9 bitys al final
    fclose(arch); //liberamos el archivo porque no necesitamos trabajar más o procesado por otro programa

    printf("Se creo un archivo binario que almacena un char, un int y un float.");

    getch();
    return 0;
}
