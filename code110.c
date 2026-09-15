//Confeccionar un programa que defina en la main un vector de 5 elementos de tipo entero. Cargar e imprimir el mayor elemento y su posción.

#include<stdio.h>
#include<conio.h>

void cargar(int vector[5])
{
    int x;
    for(x=0;x<5;x++)
    {
        printf("Ingrese elemento:");
        scanf("%i",&vector[x]);
    }
}

void mayor(int vector[5])
{
    int may=vector[0];
    int pos=0;
    int x;
    for(x=1;x<5;x++)
    {
        if (vector[x]>may)
        {
            may=vector[x];
            pos=x;
        }
    }
    printf("Mayor elemento del vector:%i\n",may);
    printf("Se encuentra en la posicion:%i",pos);
}


int main()
{
    int vector[5];
    cargar(vector);
    mayor(vector);
    getch();
    return 0;
}
