//Se carga una fecha (día, mes y año) por teclado. Mostrar un mensaje si corresponde al primer trimestre del año (enero, febrero o marzo)
//Cargar por teclado el valor numérico del día, mes y año.
//Ejemplo: dia:10 mes:2 año:2017.

#include<stdio.h>
#include<conio.h>

int main()
{
    int dd,mm,aa;
    printf("Ingrese nro de dia:");
    scanf("%i",&dd);
    printf("Ingrese nro de mes:");
    scanf("%i",&mm);
    printf("Ingrese nro de anio:");
    scanf("%i",&aa);
    if (mm==1 || mm==2 || mm==3) // || es el O o OR de toda la vida
    {
        printf("Corresponde al primer trimestre");
    }
    getch();
    return 0;
}
