//Se ingresan tres notas de un alumno,
//si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".

#include<stdio.h>
#include<conio.h>

int main()
{
   int nota1, nota2, nota3, promedio;

printf ("ingresa la primera nota: ");
scanf("%i", &nota1);
printf ("ingresa la segunda nota: ");
scanf ("%i", &nota2);
printf ("ingresa la tercera nota ");
scanf ("%i", &nota3);

promedio=(nota1+nota2+nota3)/3;
    if (promedio >= 7) //el if no lleva ; en esta parte
    {
        printf("Promocionado");
    }
getch();
return 0;
}
