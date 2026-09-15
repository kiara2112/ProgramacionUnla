//Crear una matriz de 2 filas y 5 columnas. Realizar la carga de componentes por columna
//(es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente) Imprimir luego la matriz.


#include<stdio.h>

void cargar (int matriz[2][5])
{
    int f, c;
    for(c=0; c<5; c++) //para ingresar primer columnas, debe de ser el for de afuera, asi el que va rotando es el for de dentro
    {
        for(f=0; f<2; f++)//si es fila, queda con fila=2, no cambia el numero numero
        {
            printf("ingresar valor a la matriz");
            scanf("%i", &matriz[f][c]);

        }

    }
}

void imprimir (int matriz[2][5])
{
    int f, c;
    for(f=0; f<2; f++)
    {
        for(c=0; c<5; c++)
        {
            printf("%i |",matriz[f][c]); //despues si se muestra primero fila y despues columna, aunque creo que eso para mostrar no afecta mucho. Porque su numero de al lado no cambia

        }
        printf("\n");
    }
}

int main()
{
    int matriz[2][5];
    cargar(matriz);
    imprimir(matriz);
    getchar();
    return 0;
}
