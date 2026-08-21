//Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
//(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)

#include<stdio.h>
#include<conio.h>

int main()
{
    int numero;
    printf("pasar numero positivo entre 1 a 99: ");//el numero debe de estar comprendido entre 1 y 99, no tiene que ver si tiene 3 digitos
    scanf("%i", &numero);

    if (numero>=10)
    {
        printf ("el numero tiene 2 digitos");
    }
    else
    {
        printf("el numero tiene 1 digito");
    }
    getch (); //funciona para que el programa no me salte el return de una
    return 0;
}
