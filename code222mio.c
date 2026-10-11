//Abrir el archivo "arhivo2.dat" e imprimir solo los dos valores de tipo float almacenados.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    float floa1, floa2;
    FILE *arch;
   arch=fopen("archivo2.dat", "rb"); //busca el archivo
   if (arch==NULL)
    exit(1);

    fseek(arch, 8, SEEK_SET); //tiene que pasar 8 bytes, no 9 para llegar a los floats

    fread(&floa1, sizeof(float), 1, arch); //muestra lso 2 floats, salteando los 2 enteros
   printf("primer float %0.2f\n", floa1);
   fread(&floa2, sizeof(float), 1, arch);
   printf("segundo float %0.2f\n", floa2);

   fclose(arch);
   getch();
   return 0;


}
