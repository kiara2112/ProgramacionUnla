//Confeccionar un programa con tres funciones:
//1 - Creación de un archivo binario llamado "archivo4.dat" y almacenar 3 enteros. Seguidamente cerrar el archivo
//2 - Abrir nuevamente el archivo pero en modo "r+b" y modificar el segundo entero almacenado en el archivo.
//3 - Finalmente abrir el archivo para lectura y mostrar todos sus datos.



//"rb" Sólo lectura. El archivo debe existir previamente. Si no existe, fopen retorna NULL.

//"wb" Sólo escritura. Si el archivo no existía, lo crea. Si existía, destruye su contenido y lo abre vacío.

//"ab" Sólo escritura, pero en modo append (o sea: añadir): Los datos que se graban, lo hacen al final. Crea el archivo si no existía, y no destruye su contenido si ya existía.

//"r+b" Permite lectura y escritura. El archivo debe existir previamente.

//"w+b" Permite escritura y lectura. Crea el archivo si no existía, pero destruye su contenido si ya existía, y lo abre vacío.

//"a+b" Permite añadir al final, en modo lectura – escritura. Crea el archivo si no existía. No destruye su contenido si ya existía.


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crear()
{
    FILE *arch;
    arch=fopen("archivo4.dat","wb");
    if (arch==NULL)
        exit(1);
    int valor1=10;
    fwrite(&valor1, sizeof(int), 1, arch);
    int valor2=20;
    fwrite(&valor2, sizeof(int), 1, arch);
    int valor3=30;
    fwrite(&valor3, sizeof(int), 1, arch);
    fclose(arch);
}

void modificar()
{
    FILE *arch;
    arch=fopen("archivo4.dat","r+b"); //abre el archivo para lectura y para escritura
    if (arch==NULL)
        exit(1);
    fseek(arch, 4, SEEK_SET); //desplazamos al segundo archivo desde el principio de archivo
    int x=100;
    fwrite(&x, sizeof(int), 1, arch);//cambiamos el segundo valor (de 20 al nuevo valor de x)
    fclose(arch);
}

void imprimir()
{
    FILE *arch;
    arch=fopen("archivo4.dat","rb");
    if (arch==NULL)
        exit(1);
    int v1, v2, v3;
    fread(&v1, sizeof(int), 1, arch);
    printf("entero: %i\n",v1);
    fread(&v2, sizeof(int), 1, arch);
    printf("entero: %i\n",v2);
    fread(&v3, sizeof(int), 1, arch);
    printf("entero: %i\n",v3);
    fclose(arch);
}

int main()
{
    crear();
    imprimir(); //mostramos los primeros 3 datos
    modificar();
    imprimir();//mostramos los 3 datos pero con el segundo modificado
    getch();
    return 0;
}
