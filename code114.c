//Crear una matriz de 3 filas por 5 columnas con elementos de tipo int, cargar sus componentes y luego imprimirlas.

#include<stdio.h>

void cargar(int mat[3][5])
{
    int f,c;
    for(f=0;f<3;f++)
    {
        for(c=0;c<5;c++)
        {
            printf("Ingrese componente:");
            scanf("%i",&mat[f][c]);
        }
    }
}

void imprimir(int mat[3][5])
{
    int f,c;
    for(f=0;f<3;f++) //FILAS
    {
        for(c=0;c<5;c++)//COLUMNAS, va 1 por 1 mostrando
        {
            printf("%i ",mat[f][c]);
        }
        printf("\n");
    }
}


int main()
{
    int mat[3][5];
    cargar(mat);
    imprimir(mat);
    getchar();
    return 0;
}
