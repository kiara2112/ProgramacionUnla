//Realizar la carga de 5 enteros por teclado. Mostrar por pantalla en castellano dicho número si está comprendido entre 1 y 5.


#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    int valor;
    for(f=0;f<5;f++)
    {
        printf("Ingrese un valor:");
        scanf("%i",&valor);
        if (valor>5 || valor<=0)
        {
            continue;//cuando se ejecuta vuelve al principio del ciclo repetitivo. (si es nu valor megativo o mayor a 5, vuelve al principio del ciclo y pide que se vuelva a ingresa el valor
        }            //(PERO, el for aumenta, asi que no pueden ser mas de 5 valores que se ingresan, aunque esten mal. ingresan los 5 valores, pero nunca ingreso al switch)
        switch(valor) {
            case 1:printf("Uno");
                   break; //este break depende del switch y no del for
            case 2:printf("Dos");
                   break;
            case 3:printf("Tres");
                   break;
            case 4:printf("Cuatro");
                   break;
            case 5:printf("Cinco");
                   break;
        }
        printf("\n");
    }
    getch();
    return 0;
}
