//Ingresar una palabra por teclado. Mostrar por pantalla la palabra y la cantidad de caracteres que tiene dicha palabra.

#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[30];
    int x=0;//podemos empezar de 0 cuando pongamos la palabra, sin necesidad que sea 2 vece
    printf("ingresar palabra a contar: ");
    gets (palabra);

    while (palabra[x]!='\0')//hasta que while sea diferente a null, ejecutar
    {
        x++; //tenemos que ir incrementando x, porque en while no lo hace solo XD
    }

    printf("la palabra %s tiene una cantidad de caracteres de %i", palabra, x);

    getch();
    return 0;

}
