//En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
//a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en estructuras paralelas)
//b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
//c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.

#include<stdio.h>
#include<conio.h>


void ingreso (char alumno[4][41], float nota[4])
{
    int f;
    for (f=0; f<4; f++)
    {
        printf("ingresar nombre de alumno: ");
        gets(alumno[f]);
        printf("ingresar nota: ");
        scanf("%f", &nota[f]);
        fflush(stdin);
    }

}

void condicion (char alumno[4][41], float nota[4])
{
    int f;
    int contarMuyB=0;
    for (f=0; f<4; f++) //poner bien el numero porque se me desborda XD
    {
        printf("la nota de %s es: %0.2f. ", alumno[f], nota[f]); //la nota y la condicion del alumno la muestro aca

        if (nota[f]>=8)
        {
            printf("su condicion es: MUY BUENO\n");
            contarMuyB++; //suma si entro dentro del if, significa que su nota es muy buena
        }
        else
        {
            if (nota[f]>4)
            {
                printf("su condicion es: BUENO\n"); //si es mayor a 4 y menor a 8 (ya que antes no ingreso)
            }
            else
            {
                printf("su condicion es: INSUFICIENTE\n"); //si esta bajo de 4 es insuficiente
            }
        }
    }
    printf("la cantidad de alumnos con MUY BUENO es de: %i ",contarMuyB); //el signo va primero antes que la letra

}

int main()
{
    char alumno[4][41];
    float nota[4];
    ingreso(alumno, nota);
    condicion(alumno, nota);
    getch();
    return 0;
}

