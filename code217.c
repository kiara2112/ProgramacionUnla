//Abrir el archivo binario que se creó en el concepto anterior: "archivo1.dat" y leer sus datos. Recordemos que el archivo almacena un caracter, un entero y un float en ese orden.

//LECTURA DE DATOS PRIMITIVOS
//para trabajar con los datos almacenados en un archivo, se hace una copia de los mismos en la memoria ram.
//Debemos conocer los tipos de datos almacenados en el archivo binario y el orden exacto como están guardados (chat, int y float, en ese orden)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    arch=fopen("archivo1.dat","rb"); //llamamos con el FOPEN al nombre fisico y el leemos el dato (rb)
    if (arch==NULL)
        exit(1);
    char c;
    fread(&c, sizeof(char), 1, arch); //fread lee el archivo, direccion donde se va a almacenar, el tamaño del archivo, 1 variable y el nombre logico del archivo
    printf("caracter: %c\n",c); //imprimimos el contenido de la variable c
    int v1; //guardamos el dato que se va a leer devuelta, camina 1 posicion en el b
    fread(&v1, sizeof(int), 1, arch);
    printf("entero: %i\n",v1);
    float v2;
    fread(&v2, sizeof(float), 1, arch);
    printf("float: %0.2f\n",v2);
    fclose(arch);//liberamos el archivo porque no necesitamos trabajar más o procesado por otro programa
    getch();
    return 0;
}
