//En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa que lea los sueldos que cobra cada empleado
//e informe cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300. Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.

#include<stdio.h>
#include<conio.h>

int main()
{
    int cant, i, cantMen,cantMay;
    float sueldo, sueldoTotal; //sueldo podria ser int, pero pongo float al ser numeros tan chicos que pueden ser en coma el sueldo

    printf("cuantos empleados hay?: ");
    scanf("%i", &cant);

    sueldoTotal=0;
    cantMen=0;
    cantMay=0;
    i=1;

    while (i<=cant)
    {
        printf("Sueldo del trabajador:");
        scanf("%f", &sueldo);

        if (sueldo<300)
        {
            cantMen=cantMen+1;
        }
        else
        {
            cantMay=cantMay+1;
        }

        sueldoTotal=sueldoTotal+sueldo;
        i=i+1;
    }
    printf("la cantidad de sueldos MENORES a 300 es: ");
    printf("%i", cantMen);
    printf("\n");
    printf("la cantidad de sueldos MAYORES a 300 es: ");
    printf("%i", cantMay);
    printf("\n");
    printf("Los sueldos totales a pagar son: ");
    printf("%f", sueldoTotal);

    getch();
    return 0;

}
