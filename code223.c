//Confeccionar un programa con tres funciones:
//1 - Creación de un archivo binario llamado "archivo3.dat" y almacenar 3 enteros. Seguidamente cerrar el archivo
//2 - Abrir nuevamente el archivo pero en modo de añadir y almacenar 1 float.
//3 - Finalmente abrir el archivo para lectura y mostrar todos sus datos.


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crear() //creamos el archivo
{
    FILE *arch;
    arch=fopen("archivo3.dat","wb");//Write Binary (escribir binario)
    if (arch==NULL)
        exit(1);
    int valor1=10;
    fwrite(&valor1, sizeof(int), 1, arch); //cargamos los valores en orden
    int valor2=20;
    fwrite(&valor2, sizeof(int), 1, arch);
    int valor3=30;
    fwrite(&valor3, sizeof(int), 1, arch);
    fclose(arch); //cerramos el archivo
}

void agregar() //abrimos devuelta el archivo
{
    FILE *arch;
    arch=fopen("archivo3.dat","ab");  //append binary (Añadir (o anexar) binario)
    if (arch==NULL) //si no se pudo abrir, termina la ejecucion del programa
        exit(1);
    float f1=5.45;
    fwrite(&f1, sizeof(float), 1, arch);
    fclose(arch);
}

void imprimir()
{
    FILE *arch; //en cada void debemos
    arch=fopen("archivo3.dat","rb");// Read Binary (leer binario)
    if (arch==NULL)
        exit(1);
    int v1, v2, v3;
    fread(&v1, sizeof(int), 1, arch);
    printf("entero: %i\n",v1);
    fread(&v2, sizeof(int), 1, arch);
    printf("entero: %i\n",v2);
    fread(&v3, sizeof(int), 1, arch);
    printf("entero: %i\n",v3);
    float f1;
    fread(&f1, sizeof(float), 1, arch);
    printf("float: %0.2f\n",f1);
    fclose(arch);
}

int main()
{
    crear();
    agregar();
    imprimir();
    getch();
    return 0;
}
