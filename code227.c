//Confeccionar un programa con dos funciones:
//1 - Creación de un archivo binario llamado "archivo6.dat" y grabar 3 enteros, después de grabar cada dato imprimir la posición del puntero de archivo.
//2 - Imprimir el archivo en forma completa, mostrar además la posición del puntero de archivo después de leer.

//tfell: retorna un valor entero que representa la posición exacta en bytes en la que se encuentra actualmente ubicado el puntero del archivo

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crear()
{
    FILE *arch;
    arch=fopen("archivo7.dat","wb");
    if (arch==NULL)
        exit(1);
    int valor1=10;
    fwrite(&valor1, sizeof(int), 1, arch);
    int pos=ftell(arch);//int ftell([nombre lógico del archivo]),  podemos desplazar el puntero de archivo a cualquier byte del mismo(
    printf("Posicion del puntero de archivo luego grabar un entero:%i\n", pos);
    int valor2=20;
    fwrite(&valor2, sizeof(int), 1, arch);
    pos=ftell(arch);
    printf("Posicion del puntero de archivo luego grabar un entero:%i\n", pos);
    int valor3=30;
    fwrite(&valor3, sizeof(int), 1, arch);
    pos=ftell(arch);
    printf("Posicion del puntero de archivo luego grabar un entero:%i\n", pos);
    fclose(arch);
}

void imprimir()
{
    FILE *arch;
    arch=fopen("archivo7.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Todos los datos almacenados en el archivo.\n");
    int x;
    int pos;
    fread(&x, sizeof(int), 1, arch);
    while(!feof(arch))
    {
        pos=ftell(arch);//el puntero de archivo avanza tantos bytes como el tamaño del tipo de dato que pasamos
        printf("dato leido %i y posicion del puntero de archivo %i\n",x,pos);
        fread(&x, sizeof(int), 1, arch);
    }
    fclose(arch);
}

int main()
{
    crear();
    imprimir();
    getch();
    return 0;
}
