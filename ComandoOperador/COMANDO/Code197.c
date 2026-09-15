//Definir e inicializar una matriz de 3x3 con valores 0. Implementar la carga por teclado de valores enteros,
//si se carga en algún momento un cero no permitir ingresar más valores.


#include<stdio.h>
#include<conio.h>

#define FILAS 3
#define COLUMNAS 3

//utilizado en casos especiales (for anidados), el break solo sirve para salir de un solo for, este sirve para salir en uno anidado y mostrar a donde va

void cargar(int mat[FILAS][COLUMNAS])
{
    int f,c;
    for(f=0;f<FILAS;f++)
    {
        for(c=0;c<COLUMNAS;c++)
        {
            printf("Ingrese elemento [%i,%i]:",f,c); //cargar valores (ubicacion)
            scanf("%i",&mat[f][c]);
            if (mat[f][c]==0) //si se carga un 0, no deben ingresar mas valores
            {
                goto salir; // saltar en forma incondicional a cualquier otra parte de la misma función.
            }
        }
    }
    return; //si no se ingreso ningun 0 y sale del for anidado, se va a ejecutar el salir, asi que antes de eso debenmos agregar un salir
    salir: printf("Con un cero se termina la carga de elementos\n");
}

void imprimir(int mat[FILAS][COLUMNAS])
{
    int f,c;
    for(f=0;f<FILAS;f++)
    {
        for(c=0;c<COLUMNAS;c++)
        {
            printf("%i ",mat[f][c]);
        }
        printf("\n");
    }
}


int main()
{
    int mat[3][3]={{0,0,0},
                   {0,0,0},
                   {0,0,0}};
    cargar(mat);
    imprimir(mat);
    getch();
    return 0;
}
