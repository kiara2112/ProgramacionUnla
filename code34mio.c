//Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, num;

    i=1;
    num=11;

    while (i<=25)
    {
        printf("%i", num);
        printf("-");

        num=num+11;
        i=i+1;
    }

    getch();
    return 0;
}
