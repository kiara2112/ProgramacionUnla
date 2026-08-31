//Confeccionar un programa que solicite la carga de dos valores enteros por teclado. Luego solicitar que se cargue alguno de los caracteres: '+', '-', '*' o '/'.
//Según el caracter ingresado proceder a mostrar la sumar, resta, multiplicación o división de los valores ingresados.

#include<stdio.h>
#include<conio.h>

int main()
{
    char signo;
    int num1, num2;

    printf("ingresa primer valor: ");
    scanf("%i", &num1);
    printf("ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("Que cuenta hacer ('+', '-', '*', '/'): ");
    scanf(" %c", &signo); //se debe de dejar un espacio entre las comillas y el %, " %c" si, "%c" no

    if (signo=='+')//debemos encerrarlo entre comillas simples.
    {
       int suma;
       suma=num1+num2;
       printf("la suma de los numeros es: ");
       printf("%i", suma);
    }
        if (signo=='-') //estoy usando diferentes if, aunque no es productivo porque compara cada vez en vez de hacerlo de ver que no es y terminar el programa, queda mucho mas organizado hacerlo asi
    {
       int resta;
       resta=num1-num2;
       printf("la resta de los numeros es: ");
       printf("%i", resta);
    }
        if (signo=='*')
    {
       int multi;
       multi=num1*num2;
       printf("la multiplicacion de los numeros es: ");
       printf("%i", multi);
    }
        if (signo=='/')
    {
       float divi; //por las dudas lo hago float por si el resultado es un numero con ,
       divi=num1/num2;
       printf("la division de los numeros es: ");
       printf("%f", divi);
    }
    getch();
    return 0;
}




