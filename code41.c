//Escribir un programa que lea 10 números enteros y luego muestre cuántos valores ingresados fueron múltiplos de 3 y cuántos de 5.
//Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez.

#include<stdio.h>
#include<conio.h>

int main()
{
    int mul3,mul5,valor,f;
    mul3=0;
    mul5=0;
    for(f=1; f <= 10 ;f++)
    {
        printf("Ingrese un valor:");
        scanf("%i",&valor);
        if (valor%3 == 0)
        {
            mul3=mul3+1;
        } //los 2 if estan separados porque un numero puede ser multiplo de 3 y de 5 al mismo tiempo, asi que no esta anidado
        if (valor%5 == 0)
        {
            mul5=mul5+1;
        }
    }
    printf("Cantidad de valores ingresados multiplos de 3:");
    printf("%i",mul3);
    printf("\n");
    printf("Cantidad de valores ingresados multiplos de 5:");
    printf("%i",mul5);
    getch();
    return 0;
}
