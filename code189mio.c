//Ingresar por teclado dos números enteros. Si los valores son iguales sumarlos, sino multiplicarlos.
//Emplear el operador condicional ?: para guardar en una variable el resultado.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, result;
    printf("ingresar valor 1: ");
    scanf("%i", &num1);
    printf("ingresar valor 2:");
    scanf("%i", &num2);
    result=(num1==num2)? num1+num2: num1*num2; //si son iguales, se ejecuta el primero, si no se ejecuta el segundo y ambos dependiendo lo que de se guarda en result
    printf("el resultado es %i", result);
    getch();
    return 0;
}
