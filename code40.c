//Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.

#include<stdio.h>
#include<conio.h>

int main()
{
    int aprobados,reprobados,f,nota;
    aprobados=0;
    reprobados=0;
    for(f=1; f <= 10 ;f++)
    {
        printf("Ingrese la nota:");
        scanf("%i",&nota);
        if (nota >= 7)
        {
            aprobados=aprobados+1;
        }
        else
        {
            reprobados=reprobados+1;
        }
    }
    printf("Cantidad de aprobados:");
    printf("%i",aprobados);
    printf("\n");
    printf("Cantidad de reprobados:");
    printf("%i",reprobados);
    getch();
    return 0;
}
