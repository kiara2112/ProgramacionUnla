//cargar un vector de 5 elementos enteros. Imprimir el menor y un mensaje si se repite dentro del vector.

#include<stdio.h>

//NO DA EL MENOR, FIJATE QUE ES (solucionado)

void cargar(int vector[5])
{
    int f;
    for (f=0; f<5; f++)
    {
        printf("cargar valores al vector: ");
        scanf("%i", &vector[f]);
    }
}

int menor(int vector[5])
{
    int menor=vector[0];
    int pos=0;
    int f;
    for (f=0; f<5; f++)
    {
        if(vector[f]<menor)
        {
           menor=vector[f];
           pos=f;
        }
    }
    return(menor);
}

void repite(int vector[5], int men)
{

    int f;
    int repe=1;
    for (f=0; f<5; f++)
    {
        if (men==vector[f]) //compara
        {
            repe=0;
        }
    }

    if (repe==1)
    {
        printf("no se repiten los valores");

    }
    else
    {
        printf("se repiten los valores");
    }

}




int main()
{
    int vector[5];
    int men;
    cargar(vector);
    men=menor(vector);
    printf("el valor menor del vector es %i\n", men);
    repite(vector, men);
    getchar();
    return 0;
}
