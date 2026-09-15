//Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor

#include<stdio.h>
#include<conio.h>

int main()
{
    float vector[10];
    int f;
    int orden=0;
    for (f=0; f<10; f++)
    {
        printf("ingresar valor: ");
        scanf("%i", &vector[f]);
    }

    for(f=0; f<9; f++)//aca debe de ir con uno menos  hasta f<9, de lo que ocupa el vector, porque si no se sobresale y nos da mal
    {
        if (vector[f+1]<vector[f])//ve la posicion que se encuentra f y la proxima, y las compara si la primera ingresada es mayor a la segundo (el +1 no es la cantidad, si no la posicion de f, la proxima)
        {
            orden=1;
            break; //funciona para salir de la estructura repetitiva, para que no siga comparando si no es necesario (se puede utilizar en cualquier repetidor)
        }
    }
    if (orden==0)//si el numero sigue siendo 0 (como lo nombramos fuera del if), ejecuta que si esta ordenado en orden, si no, va a al else y dice que no esta ordenado sin dar mucho mas detalles
    {
        printf("Esta ordenado de menor a mayor");
    }
    else
    {
        printf("No esta ordenado de menor a mayor");
    }
    getch();
    return 0;

}
