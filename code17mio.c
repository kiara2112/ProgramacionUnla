//Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información:
//cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente.
//Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
//Nivel máximo:	Porcentaje>=90%.
//Nivel medio:	Porcentaje>=75% y <90%.
//Nivel regular:	Porcentaje>=50% y <75%.
//Fuera de nivel:	Porcentaje<50%.


#include<stdio.h>
#include<conio.h>

int main()
{
    int cantPreg, cantBien;
    float porcentaje;

    printf("Ingresa la cantidad de preguntas: ");
    scanf("%i", &cantPreg);
    printf("ingresa la cantidad de preguntas correctas: ");
    scanf("%i", &cantBien);

    porcentaje=cantBien*100/cantPreg; // Mi forma: ((cantBien/cantPreg)*100 ) no me da lo mismo

    // EXPLICACION: Como son numeros enteros, el resultado da un numero con coma antes de *100, lo redondea a 0 y el resultado final es 0, no funciona

    if(porcentaje>=90)
    {
          printf("Nivel maximo"); //fui poniendo de adelante a atras
    }
    else
    {
         if (porcentaje>=75) //si no es mayor a noventa, pero si mayor a 75 se encuentra dentro de la barrera de 75% y <90%
         {
             printf("Nivel medio");
         }
         else
         {
             if (porcentaje>=50) //lo mismo aca, no es necesario poner un and para que funcione
             {
                 printf("Nivel regular");
             }
             else //el que sobra son los menores a 50 por la forma que lo pensamos
             {
                printf("Fuera de nivel");
             }
         }
    }

   getch();
   return 0;
}
