//Se define en la main un vector de tipo char de 40 caracteres.
//Implementar las funciones de carga e impresión de dicho vector utilizando
//la sintaxis de punteros cuando definamos los parámetros de las funciones.

#include<stdio.h>
#include<conio.h>

void cargar(char *p)
{
    printf("ingresar palabra: ");
    gets(p);
}
imprimir(char *p)
{

   printf("la palabra es %s", p);

}

int main()
{
    char vector[40];
    cargar(&vector);
    imprimir(vector);
    getch();
    return 0;
}
