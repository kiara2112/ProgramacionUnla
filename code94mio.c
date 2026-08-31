//Elaborar una función que reciba un valor entero y nos muestre desde el 1 hasta dicho valor. Si la función recibe un valor negativo mostrar un mensaje de error.

#include<stdio.h>
#include<conio.h>

void lista(int valor)
{
    if (valor>=0)//si es 0, no sabria que hacer
    {
        int f;
        for (f=1; f<=valor; f++)//debe de ser igual o menor al numero, para que sea hasta dicho valor
        {
            printf("%i", f);
            printf(" - ");
        }
    }
    else
    {
        printf("ERROR");//si es negativo, muestra un error
    }
}

int main()
{
    int num;

    printf("ingresar un numero: ");
    scanf("%i", &num);

    lista(num);

    getch();
    return 0;
}
