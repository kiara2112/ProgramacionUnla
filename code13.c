//Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
//Si el promedio es >=7 mostrar "Promocionado".
//Si el promedio es >=4 y <7 mostrar "Regular".
//Si el promedio es <4 mostrar "Reprobado".

#include<stdio.h>
#include<conio.h>

int main()
{
    int nota1,nota2,nota3,promedio;
    printf("Ingrese primer nota:");
    scanf("%i",&nota1);
    printf("Ingrese segunda nota:");
    scanf("%i",&nota2);
    printf("Ingrese tercer nota:");
    scanf("%i",&nota3);
    promedio=(nota1 + nota2 + nota3) / 3;
    if (promedio >= 7)
    {
        printf("Promocionado");
    }
    else
    {
        if (promedio >= 4)
        {
            printf("Regular");
        }
        else
        {
            printf("Reprobado");
        }
    }
    getch();
    return 0;
}
