//Confeccionar un programa que permita ingresar una palabra y luego muestre un mensaje si la misma comienza con la vocal 'A' o 'a'

#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[20];
    printf("ingresar una palabra: ");
    gets(palabra);

    if (palabra[0]=='a'|| palabra[0]=='A')//verifica si la palabra empieza con a minuscula o mayuscula (cualquiera de los 2 funciona)
    {
        printf("la palabra empieza con A");
    }
    else
    {
        printf("la palabra no empieza con A"); //avisa si no ingresa con A
    }

   getch();
   return 0;
}
