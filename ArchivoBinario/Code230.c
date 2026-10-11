//Se tiene el siguiente struct:
//Elaborar un programa que permita:
//1 - Crear un archivo binario llamado "productos.dat"
//2 - Carga de registros de tipo tproducto.
//3 - Listado completo de productos.
//4 - Consulta de un producto por su código.
//5 - Modificación del precio de un producto.



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct {
    int codigo;
    char descripcion[41];
    float precio;
} tproducto; //alias del struct


void continuar()
{
    printf("Presione una tecla para continuar\n\n");
    getch();
}

void crear()
{
    FILE *arch;
    arch=fopen("productos.dat","wb"); //creamos el archivo sin ingresar nada mas
    if (arch==NULL)
        exit(1);
    fclose(arch);
    continuar(); //se llama a un mensaje, para tocar cualquier tecla si se quiere seguir
}


void cargar() //podemos ingresar varios struct, pero para eso debemos de volver a este momento y ingresar los 3 parametros devuelta
{
    FILE *arch;
    arch=fopen("productos.dat","ab"); //abrimos el archivo, PARA AGREGAR
    if (arch==NULL)
        exit(1);
    tproducto producto; //una variable local de tipo tprocuto
    printf("Ingrese el codigo del producto:");
    scanf("%i",&producto.codigo);
    fflush(stdin); //limpiamos el code para ingresar una cadena de caracteres
    printf("Ingrese el nombre del producto:");
    gets(producto.descripcion);
    printf("Ingrese precio:");
    scanf("%f",&producto.precio);
    fwrite(&producto, sizeof(tproducto), 1, arch); //despues de ingresar los 3 valores, llamamos fwrite y manda todo junto, con la medida de sizeof de tproducto (struct)
    fclose(arch); //cerrramos el archiuvo
    continuar();
}

void listado()
{
    FILE *arch;
    arch=fopen("productos.dat","rb"); //leemos el archivo (en el bit 0)
    if (arch==NULL)
        exit(1);
    tproducto producto; //defimos la variable de tproducto para utilizarlo
    fread(&producto, sizeof(tproducto), 1, arch);
    while(!feof(arch)) //vemos cuantos bytes hasta que termine
    {
        printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio); //muestra y va 1 por 1
        fread(&producto, sizeof(tproducto), 1, arch);
    }
    fclose(arch);
    continuar();
}

void consulta()//consulta de un producto por su codigo
{
    FILE *arch;
    arch=fopen("productos.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Ingrese el codigo de producto a consultar:");
    int cod;
    scanf("%i", &cod); //ingresamos el codigo que necesitamos
    tproducto producto;
    int existe=0;
    fread(&producto, sizeof(tproducto), 1, arch); //inicializa
    while(!feof(arch)) // y entra a un while para que muestre todo los archivos
    {
        if (cod==producto.codigo) //si el cod que mandamos el el mismo que hay en producto codigo, lo muestra y nos saca del while con un break
        {
           printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio);
           existe=1;
           break;
        }
        fread(&producto, sizeof(tproducto), 1, arch); //va yendo 1 por 1 hasta que se termine
    }
    if (existe==0)
        printf("No existe un producto con dicho codigo\n"); //si no encuentra, nos avisa
    fclose(arch);
    continuar();
}

void modificacion()
{
    FILE *arch;
    arch=fopen("productos.dat","r+b");// debemos abrir el archivo para lectura y escritura "r+b".
    if (arch==NULL)
        exit(1);
    printf("Ingrese el codigo de producto a modificar:"); //ingresamos el codigo que vamos a modificar el precio
    int cod;
    scanf("%i", &cod);
    tproducto producto;
    int existe=0;
    fread(&producto, sizeof(tproducto), 1, arch); //empezamos leyendo fuera de while
    while(!feof(arch))
    {
        if (cod==producto.codigo) //si el code esta, ingresa dentro del cambio
        {
           printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio); //mostramos los que ya tenemos
           printf("Ingrese nuevo precio:");
           scanf("%f",&producto.precio); //ingresamos el precio
           int pos=ftell(arch)-sizeof(tproducto); //pos  ftell(arch) (la posicion actual) -sizeof(tproducto) y le restamos el tamaño del registro, ya que abajo ya habiamos avanzado y no nos encontramos donde se leyo el registro
           fseek(arch,pos,SEEK_SET);
           fwrite(&producto, sizeof(tproducto), 1, arch); //intercambiamos el precio
           printf("Se modifico el precio para dicho producto.\n");
           existe=1;
           break;
        }
        fread(&producto, sizeof(tproducto), 1, arch);
    }
    if (existe==0)
        printf("No existe un producto con dicho codigo\n");
    fclose(arch);
    continuar();
}

int main()
{
    int opcion; //menu de opciones
    do {
        printf("1 - Crear un archivo binario llamado \"productos.dat\"\n");
        printf("2 - Carga de registros de tipo tproducto\n");
        printf("3 - Listado completo de productos.\n");
        printf("4 - Consulta de un producto por su codigo.\n");
        printf("5 - Modificacion del precio de un producto. \n");
        printf("6 - Finalizar\n\n");
        printf("Ingrese su opcion:");
        scanf("%i",&opcion);
        switch (opcion) {
            case 1:crear();
                   break;
            case 2:cargar();
                   break;
            case 3:listado();
                   break;
            case 4:consulta();
                   break;
            case 5:modificacion();
                   break;
        }
    } while (opcion!=6); //si se ingresa el 6 termina
    return 0;
}
