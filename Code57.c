//Se desea guardar los sueldos de 5 operarios.

#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    int sueldos[5]; //debemos definir cuantas casillas tiene el vector (dependiendo si es float o int)
    //Carga del vector
    for (f=0; f<5; f++) //para no ir 1 por 1, agregamos un for para que vaya por todo el vector
    {
        printf("Ingrese valor del sueldo:");
        scanf("%i",&sueldos[f]); //cuendo carguemos, debemos poner el nombre del vector y entre corchetes
    }
    printf("Listado de sueldos.");
    printf("\n");
    //impresion del vector
    for(f=0; f<5; f++) //necesitamos otro for para mostrar los valores
    {
        printf("%i",sueldos[f]);
        printf("\n");
    }
    getch();
    return 0;
}
