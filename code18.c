//Confeccionar un programa que lea por teclado tres números distintos y nos muestre el mayor.
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;
    printf("Ingrese primer valor:");
    scanf("%i",&num1);
    printf("Ingrese segundo valor:");
    scanf("%i",&num2);
    printf("Ingrese tercer valor:");
    scanf("%i",&num3);
    if (num1 > num2 && num1 > num3) //&& es el Y o and de toda la vida
    {
        printf("%i",num1);
    }
    else
    {
        if (num2 > num3)
        {
            printf("%i",num2);
        }
        else
        {
            printf("%i",num3);
        }
    }
    getch();
    return 0;
}
