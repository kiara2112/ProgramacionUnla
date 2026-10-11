//Confeccionar un programa que imprima el tamaño en bytes del archivo "archivo6.dat" creado en el programa anterior.



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    arch=fopen("archivo7.dat","rb");//Para conocer el tamaño en bytes de un archivo podemos efectuar la apertura para lectura:
    if (arch==NULL)
        exit(1);
    fseek(arch,0,SEEK_END);//desmaplazamos el puntero al final
    int pos=ftell(arch);//Y finalmente llamar a la función ftell:
    printf("El tamaño del archivo \"archivo7.dat\" es de %i bytes",pos); //ve la cantidad de bytes del archivo
    fclose(arch);
    getch();
    return 0;
}
