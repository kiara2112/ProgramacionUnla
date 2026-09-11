//Siempre se hace la carga del sueldo, pero si el sueldo que ingresamos supera 3000 pesos se mostrará por pantalla el mensaje 
//"Esta persona debe abonar impuestos", en caso que la persona cobre 3000 o menos no aparece nada por pantalla.

#include<stdio.h>
#include<conio.h>

int main()
{
    float sueldo;
    printf("Ingrese el sueldo:");
    scanf("%f",&sueldo);

    if (sueldo>3000)
    {
        printf("Esta persona debe abonar impuestos");
    }
    getch();
    return 0;
}
