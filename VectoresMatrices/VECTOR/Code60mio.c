//Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
//El valor acumulado de todos los elementos del vector.
//El valor acumulado de los elementos del vector que sean mayores a 36.
//Cantidad de valores mayores a 50.

#include<stdio.h>
#include<conio.h>

int main()
{
    int vector[8];
    int suma, sumaMay36, cantMay50, f;
    suma=0;
    sumaMay36=0;
    cantMay50=0;

    for (f=0; f<8; f++) //no tiene que ser mayor o igual, solo mayor
     {
        printf("ingresa el numero: ");
        scanf("%i", &vector[f]);
     }

     for (f=0; f<8; f++)//PARA MI, no es necesario hacer muchos for para cada cosa, aunque el de ingreso y esto si queda mas ordenado no ponerlo en el mismo for
     {
         if (vector[f]>36)
         {
             sumaMay36=sumaMay36+vector[f];
         }
         if (vector[f]>50)
         {
             cantMay50++;//sumas mas 1 sin poner cantMay50=CantMay50+1 (mucho mas corto y facil)
         }

        suma=suma+vector[f]; //suma de todos los valores
     }
     printf("el valor acumulado de todos los elementos es: ");
     printf("%i", suma);
     printf("\n");

     printf("La suma acumulada de los mayores a 36: ");
     printf("%i", sumaMay36);
     printf("\n");

     printf("la cantidad de mayores a 50: ");
     printf("%i", cantMay50);
     printf("\n");

     getchar();
     return 0;

}


