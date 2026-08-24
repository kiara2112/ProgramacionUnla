//Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10,
//imprimir en pantalla la leyenda "Alguno de los números es menor a diez".

#include<stdio.h>
#include<conio.h>

int main()
{
     int num1, num2, num3;
    printf("pasar numero 1: ");
    scanf("%i", &num1);
    printf("pasar numero 2: ");
    scanf("%i", &num2);
    printf("pasar numero 3: ");
    scanf("%i", &num3);

    if (num1 < 10 || num2 < 10 || num3 < 10)//ALT 124 para poner |
    {
        printf("Minimo uno de los numeros es menor a diez");
    }

    getch();
    return 0;

}

