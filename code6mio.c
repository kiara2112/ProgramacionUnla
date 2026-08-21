//Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio

#include<stdio.h>
#include<conio.h>

int main ()
{
  int num1, num2, num3, num4, suma;
float promedio;

printf("ingresa el primer numero: ");
scanf ("%i",&num1);
printf ("ingresa el segundo numero: ");
scanf ("%i", &num2);
printf ("ingresa el tercer numero: ");
scanf ("%i", &num3);
printf ("ingresa el cuarto numero: ");
scanf ("%i", &num4);

suma=num1+num2+num3+num4;
promedio=suma/4;

printf("la suma de todos los numeros es: ");
printf ("%i", suma);
printf("\n");
printf ("el promedio de todo los numeros es: ");
printf("%f", promedio);

getchar();
return 0;
}

