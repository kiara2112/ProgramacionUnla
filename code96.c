//Confeccionar una función que le enviemos como parámetro el valor del lado de un cuadrado y nos retorne su superficie.

#include<stdio.h>
#include<conio.h>

int retornarSuperficie(int lado)
{
    int superficie=lado*lado; //recibe
    return superficie; //devuelve a un dato al int main (un entero), asi que aca hace la cuenta y vuelve a retornarsuperficie con el valor y queda en sup
}


int main()
{
    int valor;
    int sup;
    printf("Ingrese el valor del lado del cuadrado:");
    scanf("%i",&valor);
    sup=retornarSuperficie(valor);//nosotros mandamos el lado, y nos retorna la superficie (por eso ahi dentro dice valor), superficie en el otro int se pierde, igualmente al reves
    //a sup le mandamos lo retornado en superficie (siempre debe de entrar dentro de una variable, no solo retornar). Se le llama en el momento que se les necesita
    printf("La superficie del cuadrado es %i",sup);
    getch();
    return 0; //por eso retornamos a 0,
}
