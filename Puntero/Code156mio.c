//Implementar la función:
//int largo(char *cadena)
//Debe retornar el largo de la cadena utilizando la sintaxis de punteros para acceder a sus componentes.
//Recordar que el caracter '\0' indica el fin de la parte de información de la cadena.
//No podemos utilizar la función strlen, ya que en realidad estamos pidiendo implementar el algoritmo de dicha función.

#include<stdio.h>
#include<conio.h>

void cargar(char *pa)
{
    printf("ingresar palabra a contar: ");
    gets(pa);//va sin el signo de puntero
}

int largo(char *pa)
{
    int contar=0;
    while (*pa != '\0') //conviene usar un while y no un do while. COMPARA el puntero y ese va aumentando. Compara la direccion (por eso el *pa) y no pa que seria la palabra del puntero
    {
        contar++;
        pa++; //va sumando su posicion hasta llegar
    }
    return contar;
}

int main()
{
    char palabra[40];
    int total;
    cargar(&palabra);
    total=largo(palabra);
    printf("El nombre: %s tiene %i caracteres", palabra, total);
    getch();
    return 0;

}
