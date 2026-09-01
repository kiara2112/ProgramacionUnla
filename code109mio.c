//Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor. Hacer las dos actividades en funciones distintas.

#include<stdio.h>
#include<conio.h>

void cargar(int vector[10])
{
    int f;
    for (f=0; f<10; f++)
    {
        printf("ingresar numero: ");
        scanf("%i", &vector[f]);
    }
}

void comparar(int vector[10])
{
    int f;
    int orden=0;
    for (f=0; f<9; f++)//aca debe de ir con uno menos  hasta f<9, de lo que ocupa el vector, porque si no se sobresale y nos da mal
    {
        if(vector[f]>vector[f+1])// Si el elemento de la derecha es menor que el de la izquierda, está desordenado (lo habia puesto al revez)
        {
            orden=1;
        }
    }

    if (orden==0)//si es 0, como lo llamamos antes, esta ordenado, Si no entro dentro del if y sifnifica que no esta ordenado
    {
        printf("El vector esta ordenado de menor a mayor");
    }
    else
    {
        printf("El vector NO esta ordenado de menor a mayor");
    }

}

int main()
{
    int vector[10];//muestra todo aca como si nada
    cargar(vector);
    comparar(vector);
    getch();
    return 0;
}

