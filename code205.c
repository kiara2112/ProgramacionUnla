//Confeccionar una función que retorne la suma, resta, multiplicación o división de dos enteros,
//le pasamos como parámetro los dos valores y un tipo de dato enumerado que indique que operación efectuar.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

enum operacion {SUMAR, RESTAR, MULTIPLICAR, DIVIDIR};


int operar(int v1,int v2, enum operacion op)// enum operaciones op sirve para definir el enum (antes de poner todas las variables dentro, se pone un op)
{
    switch(op) { //utilizamos
        case SUMAR:return v1+v2;
        case RESTAR:return v1-v2;
        case MULTIPLICAR:return v1*v2;
        case DIVIDIR:return v1/v2;
        default:printf("El programa se detiene por operacion no valida");
                exit(1); //si el programa tiene un error, te saca de todo
    }
}

int main()
{
    int valor1=10;
    int valor2=5;
    printf("La suma de %i y %i es %i\n", valor1, valor2, operar(valor1,valor2,SUMAR));
    printf("La resta de %i y %i es %i\n", valor1, valor2, operar(valor1,valor2,RESTAR));
    printf("La multiplicacion de %i y %i es %i\n", valor1, valor2, operar(valor1,valor2,MULTIPLICAR));
    printf("La division de %i y %i es %i\n", valor1, valor2, operar(valor1,valor2,DIVIDIR));
    getch();
    return 0;
}
