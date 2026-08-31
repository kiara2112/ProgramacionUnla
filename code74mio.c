//Ingresar por teclado una oración de hasta 200 caracteres. Se sabe que el operador ingresa solo un caracter en blanco entre palabras.
//Imprimir por pantalla la cantidad de palabras que tiene la oración.

#include<stdio.h>
#include<conio.h>

int main()
{
    char oracion[200];
    int palabra=0;
    int x=0;

    printf("ingresa una oracion de no mas de 200 caracteres: ");
    gets(oracion);

    while(oracion[x]!='\0') //va por toda la palabra (ya que no se cuanos caracteres tiene), hasta que \0 (null) aparezca al final de la palabra y me lo termine
    {
        if (oracion[x]==' ') //me cuenta los espacios, si hay espacio fue el final de una palabra
        {
            palabra++; //va sumando
        }
        x++;
    }
    palabra++; //me suma por ultima vez, porque la ultima palabra como termina con null no la cuenta, asi que suma 1 al final
    printf("la cantidad de palabras que tiene la oracion es de %i ", palabra);

    getch();
    return 0;
}
