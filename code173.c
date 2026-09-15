//Implementación de una función recursiva.

//RECURSIVIDAD
//técnica de programación que nos permite que un bloque de instrucciones se ejecute n veces. Remplaza en ocasiones a estructuras repetitivas.

//Se utiliza en datos tipo árbol.

//Cuando una función se llama a sí misma, se asigna espacio en la pila para las nuevas variables locales y parámetros.


#include <stdio.h>
#include<conio.h>

void repetir()
{
    repetir(); //se llama el void dentro de si misma, ejecuta este programa se bloqueará y generará una error
}

int main()
{
    repetir();
    getch();
    return 0;
}
