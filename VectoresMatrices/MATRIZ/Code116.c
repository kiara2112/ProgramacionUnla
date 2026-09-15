//Crear y cargar una matriz de 3 filas por 4 columnas. Imprimir la primer fila. Imprimir la última fila e imprimir la primer columna.

#include<stdio.h>


void cargar(int mat[3][4])
{
    int f,c;
    for(f=0;f<3;f++)
    {
        for(c=0;c<4;c++)
        {
            printf("Ingrese elemento:");
            scanf("%i",&mat[f][c]);
        }
    }
}

void primerFila(int mat[3][4])
{
    int c;
    printf("Primer fila de la matriz:");
    for(c=0;c<4;c++)
    {
        printf("%i ",mat[0][c]);
    }
    printf("\n");
}

void ultimaFila(int mat[3][4])
{
    int c;
    printf("Ultima fila de la matriz:");
    for(c=0;c<4;c++)
    {
        printf("%i ",mat[2][c]);
    }
    printf("\n");
}

void primerColumna(int mat[3][4])
{
    int f;
    printf("Primer columna:");
    for(f=0;f<3;f++)
    {
        printf("%i ",mat[f][0]);
    }
}

void imprimir(int mat[3][4])
{
    int f,c;
    printf("Matriz completa\n");
    for(f=0;f<3;f++)
    {
        for(c=0;c<4;c++)
        {
            printf("%i ",mat[f][c]);
        }
        printf("\n");
    }
}


int main()
{
    int mat[3][4];
    cargar(mat);
    imprimir(mat);
    primerFila(mat);
    ultimaFila(mat);
    primerColumna(mat);
    getchar();
    return 0;
}
