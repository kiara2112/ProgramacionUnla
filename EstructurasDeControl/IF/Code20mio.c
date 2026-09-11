//Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad

#include<stdio.h>
#include<conio.h>

int main()
{
    int dia,mes,anio;
    printf("Pasar DIA: ");
    scanf("%i", &dia);
    printf("Pasar MES: ");
    scanf("%i", &mes);
    printf("Pasar ANIO: ");
    scanf("%i", &anio);

    if (dia==25 && mes==12) //el anio no importa porque no es relevante
    {
        printf("es navidad!!");
    }
    getch();
    return 0;
}
