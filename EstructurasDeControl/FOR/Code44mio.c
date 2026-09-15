//Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados

#include<stdio.h>

int main()
{
int num, suma, f;
suma=0;

for (f=1; f<=10; f++)
{

printf("ingresar numero: ");
scanf("%i", &num);

if (f>5)
{
suma=suma+num;
}

}
printf("la suma de los ultimos 5 num es: ");
printf("%i", suma);
}
