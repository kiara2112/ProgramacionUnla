//Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.


#include<stdio.h>
#include<conio.h>

int main()
{
    float notas;
    int contarMay, contarMen, x;
    x=1;
    contarMay=0;
    contarMen=0;
   while (x<=10)
   {
       printf("pasar nota: ");
       scanf("%f", &notas);

       if (notas>=7)
       {
           contarMay=contarMay+1;
       }
       else //yo antes separe en 2 if, que aunque esta bien sintacticamente, es mejor poner un else porque es uno o otro, no hay mas posibilidades o si es menor a otro numero que no sea 7
       {
           contarMen=contarMen+1;
       }
       x=x+1;
   }

    printf("La cantidad de notas mayores o iguales a 7 es: ");
    printf("%i", contarMay);
    printf("\n"); //para poner una separacion
    printf("La cantidad de notas menores a 7 es: ");
    printf("%i", contarMen);

    getch();
    return 0;
}
