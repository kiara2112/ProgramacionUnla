//Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
//Realizar un programa que muestre el curso que obtuvo el mayor promedio general.

#include<stdio.h>
#include<conio.h>

int main()
{
    float cursoA[5];
    float cursoB[5];
    float promedioA, promedioB, sumaA, sumaB;
    int f;

    sumaA=0;
    sumaB=0;

    for (f=0; f<5; f++)//ingresamos del primer curso
    {
        printf("ingresa las notas del PRIMER curso: ");
        scanf("%f", &cursoA[f]);
    }
        for (f=0; f<5; f++)//despues del segundo curso
    {
        printf("ingresa las notas del SEGUNDO curso: ");
        scanf("%f", &cursoB[f]);
    }
        for (f=0; f<5; f++)//sumamos los valores de todo el vector
    {
        sumaA=sumaA+cursoA[f];
        sumaB=sumaB+cursoB[f];
    }
    promedioA=sumaA/5;//sacamos el promedio de la suma dividido 5
    promedioB=sumaB/5;

    printf("Promedio curso A:");
    printf("%f",promedioA);
    printf("\n"); //mostramos los promedios
    printf("Promedio curso B:");
    printf("%f",promedioB);
    printf("\n");

    if (promedioA==promedioB) //ve cual es el que tiene mas promedio
    {
        printf("Los cursos obtuvieron el mismo promedio: ");
        printf("%f",promedioA);
    }
    else
    {
        if (promedioA>promedioB)
        {
        printf("el curso A obtuvo mas promedio: ");
        printf("%f",promedioA);
        }
        else
        {
        printf("el curso B obtuvo mas promedio: ");
        printf("%i",promedioB);
        }
    }

    getch();
    return 0;
}
