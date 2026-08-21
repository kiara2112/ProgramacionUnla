//Se debe desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente.
//Mostrar lo que debe abonar el comprador. Definir una variable float para el precio del artículo.

#include<stdio.h>
#include<conio.h>

int main ()
{
int cantidad;
float precio, venta;

printf ("ingrese la cantidad comprada: ");
scanf("%i", &cantidad);
printf("ingrene el valor por unidad: ");
scanf("%f",&precio);

venta=cantidad*precio;
printf ("el total de venta es: ");
printf("%.2f", venta); //si lleva al principio la f un .2, lo entrecorta para que no salgan todo los digitos

getchar();
return 0 ;
}

