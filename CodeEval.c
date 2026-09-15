#include<stdio.h>
#include<conio.h>


int cargar(int pro[20], int loc[20], int uni[20], int matriz[20][20])
{
    int x=0;
    int produ, local, unidad;

    printf("ingresar Producto: ");
    scanf("%i", &produ);
    pro[x]=produ;

while (pro[x]!=0)
{
    printf("ingresar Local: ");
    scanf("%i", &local);
    printf("ingresar Unidad");
    scanf("%i", &unidad);

    loc[x]=local;
    uni[x]=unidad;

    matriz[produ][local]=matriz[produ][local]+unidad;
    x++;

    printf("ingresar Producto: ");
    scanf("%i", &produ);
    pro[x]=produ;

}
printf ("%i", x);
    return x;
}

void imprimirOrden(int pro[20], int loc[20], int uni[20], int x)
{
   for (int f=0; f<x; f++)
   {
        printf("El local %i, Producto %i, unidad %i\n", loc[f], pro[f], uni[f]);
   }
}

void organizar (int vector[20], int uni[20], int x)
{
    int f, k;
    int aux, auxVect;
    for (f=0; f<x-1; f++)
    {
        for (k=0; k<x-1-f; k++)
    {
        if (vector[f]>vector[f+1])
        {

            aux=uni[f];
            uni[f]=uni[f+1];
            uni[f+1]=aux;

            auxVect=vector[f];
            vector[f]=vector[f+1];
            vector[f+1]=auxVect;

        }
    }
    }
    printf ("organizado\n");

    for (f=0; f<x; f++)
   {
        printf("%i tuvo una unidad de %i\n", vector[f], uni[f]);
   }
    }


void mostrarMatriz(int matriz[20][20], int x)
{

    for (int f=0; f<4; f++)
    {
        for (int c=0; c<4; c++)
        {

            printf("| %i |", matriz[f][c]);
        }

        printf("\n");
    }
}

int main()
{
    int pro[20];
    int loc[20];
    int uni[20];
    int x;
    int matriz[20][20];

    for (int f = 0; f < 20; f++)
    {
        for (int c = 0; c < 20; c++)
        {
            matriz[f][c] = 0;
        }
    }
    x=cargar(pro,loc,uni, matriz);
    imprimirOrden(pro, loc, uni, x);
    printf("por local:\n");
    organizar(loc, uni, x);
    printf("por producto:\n");
    organizar(pro, uni, x);
    mostrarMatriz(matriz, x);
    getch();
    return 0;
}




