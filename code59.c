//Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
//Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno (definir los dos vectores con componentes de tipo float)
//Imprimir los gastos en sueldos de cada turno.

#include<stdio.h>
#include<conio.h>

int main()
{
    float turnoMan[4];
    float turnoTar[4];
    int f;
    float man,tar;

    printf("Sueldos de empleados del turno de la manana.");
    printf("\n");
    for(f=0; f<4; f++)
    {
        printf("Ingrese sueldo:");
        scanf("%f",&turnoMan[f]);
    }
    printf("Sueldos de empleados del turno de la tarde.");
    printf("\n");
    for(f=0; f<4; f++)
    {
        printf("Ingrese sueldo:");
        scanf("%f",&turnoTar[f]);
    }

    man=0;
    tar=0;
    for(f=0; f<4; f++)
    {
        man=man+turnoMan[f];
        tar=tar+turnoTar[f];
    }
    printf("Total de gastos del turno de la mañana:");
    printf("%0.2f",man);
    printf("\n");
    printf("Total de gastos del turno de la tarde:");
    printf("%0.2f",tar);
    getch();
    return 0;
}

