//Definir tres variables de tipo char y cargar dos por asignación y la tercera por teclado. Imprimir los valores de las mismas.

#include<stdio.h>
#include<conio.h>
// podemos asignarle directamente un entero comprendido entre -128 y 127:
int main()
{
    char letra1=65; //ingresa por comando (65=A)
    char letra2='A';//ingresa directamente la letra (debemos encerrarlo entre comillas simples)
    char letra3; //nosotros ingresamos el caracter
    printf("Ingrese un caracter:");
    scanf(" %c",&letra3);
    printf("%c",letra1);
    printf("\n");
    printf("%c",letra2);
    printf("\n");
    printf("%c",letra3);
    printf("\n");
    getch();
    return 0;
}
