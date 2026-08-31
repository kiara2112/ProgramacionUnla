//Desarrollar una función que reciba como parámetro un caracter. Si llega una 'h' mostrar por pantalla el mensaje "hombre",
//si llega una 'm' mostrar el mensaje "mujer". Llamar desde la función main pasando una vez una 'h' y otra vez una 'm'.

#include<stdio.h>
#include<conio.h>

void mostrarGenero(char tipo)
{
    if (tipo=='h')
    {
        printf("Hombre\n");
    }
    if(tipo=='m')
    {
        printf("Mujer\n");
    }
}


int main()
{
    mostrarGenero('h');
    mostrarGenero('m');
    getch();
    return 0;
}
