//Confeccionar un programa que solicite el pago por hora de un empleado y la cantidad de horas trabajadas dentro de una estructura repetitiva en la función main.
//Elaborar una función que reciba como parámetro el valor de la hora y la cantidad de horas trabajadas y nos muestre el total a pagar.

#include<stdio.h>
#include<conio.h>

void calcularSueldo(float costoHora, int cantidadHoras)//debe de pasar si es float, ambos deben de ser lo mismo
{
    float sueldo=costoHora * cantidadHoras;
    printf("El sueldo total a pagar es %0.2f\n",sueldo);
}


int main()
{
    float costoHora;
    int cantidadHoras;
    char opcion;
    do {
        printf("Ingrese cuanto se le paga por hora:");
        scanf("%f",&costoHora);
        printf("Cuantas horas trabajo:");
        scanf("%i",&cantidadHoras);

        calcularSueldo(costoHora, cantidadHoras);

        printf("Desea calcular los datos de otro empleado[s/n]:");
        scanf(" %c",&opcion);

    } while (opcion=='s');
    getch();
    return 0;
}
