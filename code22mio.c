//Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10,
//imprimir en pantalla la leyenda "Todos los números son menores a diez".

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

    if (num1 < 10 && num2 < 10 && num3 < 10)//si estan pegados con el > no me funcionaba, raro. (num1<10 && num2<10 && num3<10)
    {
        printf("Todos los numeros son menores a diez");
    }

    getch();
    return 0;

}
