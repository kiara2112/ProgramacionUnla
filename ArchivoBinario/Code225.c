//Confeccionar un programa con dos funciones:
//1 - Creación de un archivo binario llamado "archivo5.dat" y almacenar valores enteros ingresados por teclado.
//2 - Imprimir el archivo en forma completa.


//int feof([nombre lógico del archivo])
//permite luego de la ejecución de la función fread verificar si se ha llegado a fin de archivo (0 si no es fin de archivo y un valor distinto a 0 si se ha llegado al final)


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crearCargar()
{
    FILE *arch;
    arch=fopen("archivo5.dat","wb"); //Creamos el archivo
    if (arch==NULL)
        exit(1);
    int valor;
    do {
        printf("Ingrese valor entero (0 para finalizar):"); //vamos ingresando datos
        scanf("%i",&valor);
        if (valor!=0)
            fwrite(&valor, sizeof(int), 1, arch);//si es diferente a 0, para no ingresar el 0, carga el contenido de valor en el archivo
    }  while (valor!=0); //tiene que ingresar minimamente 1 vez, por eso do while
    fclose(arch);
}

void imprimir()
{
    FILE *arch;
    arch=fopen("archivo5.dat","rb"); //imprimimos
    if (arch==NULL)
        exit(1);
    printf("Todos los datos almacenados en el archivo.\n");
    int x;
    fread(&x, sizeof(int), 1, arch);//leer archivo uno a uno, pero debemos de llamarlo minimo una vez para saber cuando es el final del archivo con feof
    while(!feof(arch))//minetras no sea el fin de archivo, va mostrar cada entero que leamos (negamos el feof para que ejecute, porque devuelve 0, cuando nos de otro valor que no sea 0, el ! lo niega y nos da 0 )
    {
        printf("%i ",x);
        fread(&x, sizeof(int), 1, arch);
    }
    fclose(arch);
}


int main()
{
    crearCargar();
    imprimir();
    getch();
    return 0;
}
