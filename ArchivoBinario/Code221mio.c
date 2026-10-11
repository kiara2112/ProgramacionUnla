//Abrir el archivo "arhivo2.dat" creado en el programa anterior y proceder a su lectura e impresión.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
   FILE *arch;
   arch=fopen("archivo2.dat", "rb");
   if (arch==NULL)
    exit(1);

   int ente1, ente2;
   float floa1, floa2;

   fread(&ente1, sizeof(int), 1, arch); //primero busca el primer entero que hay dentro del archivo
   printf("primer entero %i\n", ente1); //y luego lo muestra desde ente1

   fread(&ente2, sizeof(int), 1, arch);
   printf("segundo entero %i\n", ente2);

    fread(&floa1, sizeof(float), 1, arch);
   printf("primer float %0.2f\n", floa1);

   fread(&floa2, sizeof(float), 1, arch);
   printf("segundo float %0.2f\n", floa2);

   fclose(arch);
   getch();
   return 0;

}
