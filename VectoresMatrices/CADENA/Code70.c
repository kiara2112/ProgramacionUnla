//Definir una variable para almacenar el nombre y apellido del programador. Mostrar dicho nombre por pantalla.

#include<stdio.h>
#include<conio.h>

int main()
{
    char programador[16]="Pablo Rodriguez"; //utiliza un vector para armar palabras, en cada uno ingresa una palabra, peor es menos, siempre mas es mejor
    //componente   [0]  [1]  [2]  [3]  [4]  [5]  [6]  [7]  [8]  [9]  [10] [11] [12] [13] [14] [15] y el 16 es para terminar el programa (algo debe de ingresar, el espacio en este caso) para terminar el programa, por eso 16 y no 15 (con el espacio)
    //programador  'P'  'a'  'b'  'l'  'o'  ' '  'R'  'o'  'd'  'r'  'i'  'g'  'u'  'e'  'z'  '\0' //Lo que se almacena luego del caracter '\0' no nos importa y se lo considera basura (puede haber cualquier caracter ASCII)
    printf("Nombre del programador:");
    printf("%s",programador); //formato el caracter s (string)

    getch();
    return 0;
}
