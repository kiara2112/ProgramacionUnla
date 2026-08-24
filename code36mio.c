//Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con un mensaje
//cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
//Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.

#include<stdio.h>
#include<conio.h>

int main()
{
    int sumarList1, sumarList2, list1, list2, numList1, numList2;

    list1=1;
    list2=1; //aunque no es necesario usar 2 contadores, yo lo hice por tonta y paja de reiniciar luego el otro
    sumarList1=0;
    sumarList2=0;

    while (list1<=15) //hasta 15 numeros ingresados
    {
        printf("ingresar numero de la PRIMERA lista: ");
        scanf("%i", &numList1);

        sumarList1=sumarList1+numList1; //los suma y aumenta el contador
        list1=list1+1;
    }
        printf("Segunda lista");
        printf("\n");

        while (list2<=15) //lo mismo con la otra lista
    {
        printf("ingresar numero de la SEGUNDA lista: ");
        scanf("%i", &numList2);

        sumarList2=sumarList2+numList2;
        list2=list2+1;
    }

    if (sumarList1<sumarList2) //aca me hice medio un quilombo, primer ve si uno es mayor (la lista 2)
    {
       printf("Lista 2 mayor");
    }
    else
    {
        if (sumarList1>sumarList2) //si la 2 no es mayor, es igual o la 1 es mayor, se fija si la 1 es mayor
        {
            printf("Lista 1 mayor");
        }
        else
        {
             printf("Listas iguales"); //como ninguno es mayor al otro, son iguales
        }
    }

    getch();
    return 0;

}
