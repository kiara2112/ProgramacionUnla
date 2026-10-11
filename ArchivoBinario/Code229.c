//Confeccionar un programa con dos funciones:
//1 - Crear un vector con 10 enteros y grabar dicho vector en un archivo binario llamado "archivo7.dat"
//2 - Recuperar todos los datos del archivo creado anteriormente y almacenar los datos en un vector.

//cuando necesitamos grabar o leer un vector en una sola llamada a la función fread o fwrite indicamos en dicho tercer parámetro el tamaño del vector.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define TAM 10

void grabarVector()
{
    FILE *arch;
    arch=fopen("archivo8.dat","wb");
    if (arch==NULL)
        exit(1);
    int vec[TAM]={10,20,30,40,50,60,70,80,90,100};
    fwrite(vec, sizeof(int), TAM, arch);//a función fwrite nos facilita la grabación de un vector en forma completo, en tamaño en vez de 1 ponemos 10
    fclose(arch);
}

void recuperarVector()
{
    FILE *arch;
    arch=fopen("archivo8.dat","rb");
    if (arch==NULL)
        exit(1);
    int vec[TAM]; //lo definimos sin que sea vector, pero el contenido va 1 por 1 hasta pasar por todos los puestos
    fread(vec, sizeof(int), TAM, arch); //no ponemos antes del vec & ya que los vectores son punteros y no necesitamos especificarlo
    int f;
    for(f=0;f<TAM;f++) //llamamos al vector y vamos la posicion 1 por 1
    {
        printf("%i ",vec[f]);
    }
    fclose(arch);
}


int main()
{
    grabarVector();
    recuperarVector();
    getch();
    return 0;
}
