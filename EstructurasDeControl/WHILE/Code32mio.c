//Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas

#include<stdio.h>
#include<conio.h>

int main()
{
    int cant, i;
    float altura, promedio, sumarAlt;
    printf("Alturas a ingresar: ");
    scanf("%i", &cant);

    sumarAlt=0;
    i=1;

    while (i<=cant)
    {
       printf("Altura de la persona: ");
       scanf("%f", &altura);

       sumarAlt=sumarAlt+altura;
       i=i+1;

    }
    promedio=sumarAlt/cant;
    printf("El promedio de todas las alturas es de: ");
    printf("%f", promedio);

    getch();
    return 0;
}
