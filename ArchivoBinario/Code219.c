//Abrir el archivo binario : "archivo1.dat" y leer e imprimir el char y el float.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    arch=fopen("archivo1.dat","rb");
    if (arch==NULL)
        exit(1);
    char c;
    fread(&c, sizeof(char), 1, arch);
    printf("caracter: %c\n",c);         //A
    fseek(arch,4,SEEK_CUR); //se mostro el char, desde el byte 1 hasta el 5, por eso se utiliza seek cur (Reposicionar comenzando desde la posición actual del puntero de archivo (es lo mismo poner un 1))
    float v2;
    fread(&v2, sizeof(float), 1, arch);
    printf("float: %0.2f\n",v2);        //5.25
    fclose(arch);
    getch();
    return 0;
}
