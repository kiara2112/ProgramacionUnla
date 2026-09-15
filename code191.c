//Ingresar por teclado dos valores enteros. Seguidamente solicitar el ingreso de un caracter '+','-','*' o '/'.
//Dependiendo del operador ingresado sumar, restar, multiplicar o dividir los valores ingresados.
//Si no se ingresa un operador válido no hacer nada.

#include<stdio.h>
#include<conio.h>

int main()
{
    int valor1,valor2;
    char operacion;
    int resultado;

    printf("Ingrese primer valor:");
    scanf("%i",&valor1);
    printf("Ingrese segundo valor:");
    scanf("%i",&valor2);
    printf("Ingrese la operacion quiere hacer: +,-,*,/ :");
    scanf(" %c",&operacion); //ingresa signo (char)

    switch (operacion) {
        case '+':resultado=valor1+valor2; //aca no se tabula para abajo, sigue directo despues de :
                 printf("La suma es:%i",resultado);
                 break; //si no estuviera el break, mostraria todo los resultados (ta mal), si esta salta fuera del switch despues de ejecutar
        case '-':resultado=valor1-valor2;
                 printf("La resta es:%i",resultado);
                 break;
        case '*':resultado=valor1*valor2;
                 printf("El producto es:%i",resultado);
                 break;
        case '/':resultado=valor1/valor2;
                 printf("La division es:%i",resultado);
                 break;
    }
    getch();
    return 0;
}
