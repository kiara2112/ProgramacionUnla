//Desarrollar un programa que permita ingresar una clave a un usuario. Si la ingresa en forma incorrecta 3 veces proceder a detener el programa en forma inmediatamente.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h> //


//valor devuelto por convención es un 0 si el programa finaliza en forma correcta, si no un numero distinto a 0

void ingresoClave()
{
    char clave[50];
    int intentos=0;
    do {
        if (intentos==3)
        {
            exit(1); //termina el programa de forma inmediata. Puede salir con 0, pero como sale con 0 parece que el usuario ingreso bien (return 0), Mejor mostrar un error con el 1 (return 1) que cerrar el programa fue por terminar
        }
        printf("Ingrese clave:");
        gets(clave);
        intentos++;
    } while (strcmp(clave,"123abc")!=0); //verifica que la clave sea 123abc, si supera los intentos, entra al exit y sale
}


int main()
{
    ingresoClave();
    printf("Bienvenido\n"); //si la clave estaba bien, sigue en el main y ejecuta el bienvenido
    getch();
    return 0;
}

