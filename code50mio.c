//Se cuenta con la siguiente información:
//Las edades de 5 estudiantes del turno mañana.
//Las edades de 6 estudiantes del turno tarde.
//Las edades de 11 estudiantes del turno noche.
//Las edades de cada estudiante deben ingresarse por teclado.
//a) Obtener el promedio de las edades de cada turno (tres promedios)
//b) Imprimir dichos promedios (promedio de cada turno)
//c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades menor.

#include<stdio.h>
#include<conio.h>

int main()
{
    int sumaMan, sumaTar, sumaNoch, edad, f;
    float proMana, proTarde, proNoche;
    sumaTar=0;
    sumaMan=0;
    sumaNoch=0;

    for (f=1; f<=5; f++)//si empieza en 1, debe de ser mayor o igual. Si empieza en 0 tiene que ser mayor solamente el 5
    {
        printf("ingresar edades de turno MANANA: ");
        scanf("%i", &edad);
        sumaMan=sumaMan+edad;
    }
        for (f=0; f<=6; f++) //ingresamos todos los valores
    {
        printf("ingresar edades de turno TARDE: ");
        scanf("%i", &edad);
        sumaTar=sumaTar+edad;
    }
        for (f=0; f<=11; f++)
    {
        printf("ingresar edades de turno NOCHE: ");
        scanf("%i", &edad);
        sumaNoch=sumaNoch+edad;
    }

    proMana=sumaMan/5;
    proTarde=sumaTar/6; //sacamos
    proNoche=sumaNoch/11;

    printf("Promedio de edad de la MANANA: ");
    printf("%f", proMana);
    printf("\n");
    printf("Promedio de edad de la TARDE: ");
    printf("%f", proTarde);
    printf("\n");
    printf("Promedio de edad de la NOCHE: ");
    printf("%f", proNoche);
    printf("\n");

    if (proMana<proTarde && proMana<proNoche)
    {
        printf("El menor promedio es a la Mañana");
    }
    else
    {
        if (proTarde<proMana && proTarde<proNoche)
        {
            printf("El menor promedio es a la Tarde");
        }
        else
        {
            printf("El menor promedio es a la Noche");
        }
    }

    getch();
    return 0;

}

