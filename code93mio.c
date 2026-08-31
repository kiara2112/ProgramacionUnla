//Confeccionar una función que reciba tres enteros y nos muestre el mayor de ellos. La carga de los valores hacerlo por teclado en la función main.

#include<stdio.h>
#include<conio.h>

void mayor(int n1, int n2, int n3)//podria dejarle el mismo nombre, pero para que se note que eso no es necesario, se lo cambie
{
    if (n1>n2 && n1>n3)
    {
        printf("El numero mayor es el PRIMERO con %i", n1);
    }
    else
    {
        if (n2>n3)
        {
            printf("el numero mayor es SEGUNDO con %i", n2);
        }
        else
        {
            printf("el numero mayor es TERCERO con %i", n3);
        }
    }
}

int main()
{
    int num1, num2, num3;
    printf("ingresar el PRIMER valor: ");
    scanf("%i", &num1);
    printf("ingresar el SEGUNDO valor: ");
    scanf("%i", &num2);
    printf("ingresar el TERCERO valor: ");
    scanf("%i", &num3);

    mayor(num1, num2, num3);

    getch();
    return 0;
}
