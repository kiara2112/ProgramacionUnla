//Confeccionar un programa que solicite el ingreso de un entero por teclado
//y luego grabe en un archivo los números comprendidos entre 1 y el número ingresado de uno en uno.
//Ej. Si se ingresa un 10 luego se graban en el archivo 1,2,3,4,5,6,7,8,9,10 (nombre del archivo: "archivo5.dat")
//Imprimir luego el contenido del archivo


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void carga()
{
    int valorMax;
    FILE *arch;
    arch=fopen("archivo6.dat","wb");
    if (arch==NULL)
        exit(1);

    printf("Ingrese final de valor"); //ingresa el maximo que queremos que llegue el numero
    scanf("%i",&valorMax);

    for(int f=1; f<=valorMax; f++) //del 1 hasta el numero maximo inclusive
    {
        fwrite(&f, sizeof(int), 1, arch); //va cargando dentro del archivo el numero de f, hasta que termine el for
    }
   fclose(arch);
}

void imprimir()
{
    int valorMax;
    FILE*arch;
    arch=fopen("archivo6.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("todos valores de archivo\n");
    int x;
    fread(&x, sizeof(int), 1, arch);
    while(!feof(arch)) //mostramos valores, hasta que termine
    {
        printf("%i ", x);
        fread(&x, sizeof(int), 1, arch);
    }

    fclose(arch);
}



int main()
{
    carga();
    imprimir();
    getch();
    return 0;

}
