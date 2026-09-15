//Se tiene la siguiente información:
//Nombres de 4 empleados (matriz de tipo char)
//Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses (matriz de tipo float)
//Confeccionar el programa para:
//a) Realizar la carga de la información mencionada. LISTO
//b) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
//c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
//d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
//Utilizar macros para definir la cantidad de filas y columnas de las estructuras de datos.

#include<conio.h>
#include<stdio.h>
#include<string.h>

#define CANTIDAD 4
#define MESES 3

void ingresar (char empleado[CANTIDAD][41], float sueldo[CANTIDAD][MESES])
{
    int f, k;
    for(f=0; f<CANTIDAD; f++)
    {
        printf("ingresar empleado: ");
        gets(empleado[f]);
        for (k=0; k<MESES; k++) //para ingresar los 3 sueldos sin tener que poner sueldo 1, 2 y 3 separados, hice un for para que sea mas corto
        {
            printf("sueldo: ");
            scanf("%f", &sueldo[f][k]); //dentro de los corchetes no debe de ir cantidad o meses, si no f y k que son los que estan rotando
        }

        fflush(stdin); //este limpia
    }
}

void suma (float ingAcum[CANTIDAD], float sueldo[CANTIDAD][MESES])
{
    int f, k;

    for (f=0; f<CANTIDAD; f++)
    {
        ingAcum[f] = 0;//tengo que empezar un vector si lo uso para contar, porque si no me queda basura de antes que me da mal (DEBE DE SER DENTRO DEL PRIMER FOR, para que todos los renglones se limpien)
        for (k=0; k<MESES; k++)
        {
            ingAcum[f]=ingAcum[f]+sueldo[f][k];
        }

    }

}

void imprimir(float ingAcum[CANTIDAD], char empleado[CANTIDAD][41])
{
    int f;
    for (f=0; f<CANTIDAD; f++)
    {
        printf("el sueldo de %s es %0.2f\n", empleado[f], ingAcum[f]); //muestra los valores
    }

}

void comparar (float ingAcum[CANTIDAD], char empleado[CANTIDAD][41])
{
    float MayorSueldo=ingAcum[0];
    char empleMay[41];
    strcpy(empleMay,empleado[0]); //copiar cadena, no debe de ir un =
    int f;
    for (f=1; f<CANTIDAD; f++)
    {
        if (ingAcum[f]>MayorSueldo)
        {
            MayorSueldo=ingAcum[f];
            strcpy(empleMay,empleado[f]); //pasa lo mismo que fuera

        }

    }
    printf("el empleado %s tiene el mayor sueldo con %0.2f ", empleMay, MayorSueldo);
}

int main()
{
    char empleado[CANTIDAD][41];
    float sueldo[CANTIDAD][MESES];
    float IngAcum[CANTIDAD];
    ingresar(empleado,sueldo);
    suma(IngAcum,sueldo);
    imprimir(IngAcum, empleado);
    comparar(IngAcum, empleado);
    getch();
    return 0;
}

