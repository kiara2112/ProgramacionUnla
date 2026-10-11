
//Abrir el archivo binario que se creó en conceptos anteriores: "archivo1.dat" y leer solo los bytes donde se almacena el valor float.
//Recordemos que el archivo almacena un caracter, un entero y un float en ese orden.


//nos permite desplazar el puntero de archivo a cualquier posición previo a la lectura fseek (fseek([nombre lógico del archivo], [cantidad de bytes a desplazarse], [ubicación desde donde comenzar a desplazarse]))


//SEEK_SET Reposicionar comenzando desde el principio del archivo (es lo mismo poner un 0)
//SEEK_CUR Reposicionar comenzando desde la posición actual del puntero de archivo (es lo mismo poner un 1)
//SEEK_END Reposicionar comenzando desde el final del archivo (es lo mismo poner un 2)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    arch=fopen("archivo1.dat","rb");
    if (arch==NULL)
        exit(1);
    float v2;
    fseek(arch,5,SEEK_SET); //Desplazamos 5 bytes el puntero de archivo desde el comienzo (debemos saltear el char y el int),
    fread(&v2, sizeof(float), 1, arch); //lee los 4 bytes
    printf("float: %0.2f\n",v2);
    fclose(arch);
    getch();
    return 0;
}
