//Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("cargar numero: ");
    scanf("%i", &num);

    if (num>0)//tambien podria funcionar (num>=1)
    {
        printf("el numero es positivo");
    }
    else
    {
        if (num<0)//igualmente aca (num<=-1)
        {
            printf("el numero es negativo");
        }
        else
        {
            printf("el numero es nulo"); //cualquier de los 2 que no cumpla es nulo
        }
    }
    getch ();
    return 0;
}
