//Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
//Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
//Imprimir los gastos en sueldos de cada turno.


#include<stdio.h>
#include<conio.h>

void cargar(float sueldo[4])
{
    int f;
    for (f=0; f<4; f++)
    {
        printf("cargar sueldo: ");
        scanf("%f", &sueldo[f]);
    }
}

float gastosTurno(float sueldos[4])
{

    int f;
    float totalSueldo=0;
    for (f=0; f<4; f++)
    {
         totalSueldo=totalSueldo+sueldos[f];
    }
    return (totalSueldo);
}

int main()
{
    float sueldosMa[4];
    float sueldosTar[4];
    printf("Carga de sueldos del turno manana\n");
    cargar(sueldosMa);
    printf("Carga de sueldos del turno tarde\n");
    cargar(sueldosTar);
    printf("Gastos del turno de la manana: %0.2f\n", gastosTurno(sueldosMa));
    printf("Gastos del turno de la tarde: %0.2f", gastosTurno(sueldosTar));
    getch();
    return 0;
}
