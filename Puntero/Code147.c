//Elaborar una función que se le pase la dirección de una variable entera e incremente en 1 lo apuntado por dicha variable.


#include<stdio.h>
#include<conio.h>

void incrementar(int *pe)
{
    *pe=*pe+1; //cambia la ubicacion
}


int main()
{
    int x=0;
    printf("%i\n",x); // 0
    incrementar(&x);
    printf("%i\n",x); // 1
    incrementar(&x);
    printf("%i\n",x); // 2
    incrementar(&x);
    printf("%i\n",x); // 3
    getch();
    return 0;
}
