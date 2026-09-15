//Definir una matriz de 2 filas y 5 columnas. Realizar su carga e impresión.
//Intercambiar los elementos de la primera fila con la segunda y volver a imprimir la matriz.


void cargar (int matriz[2][5])
{
    int f, c;
    for (f=0; f<2; f++) //va aca primero las filas siempre que queramos que vaya primero las filas (si piden que ingresen por columnas va dentro f)
    {
        for (c=0; c<5; c++)
        {
            printf("ingresar valor: ");
            scanf("%i", &matriz[f][c]);
        }
    }
}

void imprimir (int matriz[2][5])
{
    int f, c;
    for (f=0; f<2; f++)
    {
        for (c=0; c<5; c++)
        {
            printf("|%i|", matriz[f][c]);
        }
        printf("\n"); //para que no quede todo en un mismo renglon, se separan por un \n fuera del segundo for
    }
}

void intercambiar (int matriz[2][5])
{
    int f, c, aux;

        for (c=0; c<5; c++) //van intercambiando entre los 2 valores (filas) que hay en las columnas. Como son solo 2, no necesita mas for
        {
            aux=matriz[0][c];
            matriz[0][c]=matriz[1][c]; //solo cambia el valor de c (asi va por todas las columnas), pero f sigue siendo el mismo
            matriz[1][c]=aux;
        }

}

int main()
{
    int matriz[2][5];
    cargar(matriz);
    imprimir(matriz);
    intercambiar(matriz);
    printf("-----------------------------\n"); //para dividir los intercambiados con los normales
    imprimir(matriz);
    getchar();
    return 0;
}
