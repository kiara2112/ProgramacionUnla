//Crear una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor.

void carga (int matriz[3][4])
{
    int f, c;
    for (f=0; f<3; f++)
    {
        for (c=0; c<4; c++)
        {
            printf("ingresar valor: ");
            scanf("%i", &matriz[f][c]);
        }
    }
}

void compararMay (int matriz[3][4])
{
    int may=matriz[0][0];
    int f, c;

    for (f=0; f<3; f++)
    {
        for (c=0; c<4; c++)
        {
            if (may<matriz[f][c])
            {
                may=matriz[f][c];

            }
        }
    }
    printf("el mayor valor fue %i", may);
}

int main()
{
    int matriz[3][4];
    carga(matriz);
    compararMay(matriz);
    getchar();
    return 0;
}


