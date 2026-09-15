//Implementar un programa que llame al programa del problema 1 (code199.c) mediante el empleo de la función system. Imprimir el código devuelto.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //se encuentra declara la funcion system y exit

//nos permite ejecutar otro programa. Debemos pasar como parámetro una cadena con el nombre del programa a ejecutar, debe ser un programa ejecutable el mismo.
//ambas deben encontrarse en la misma carpeta. Si no, debemos llamar la carpeta que encuentra y el archivo codigo=system("c:\\programasc\\code199.exe");
int main()
{
    int codigo;

    codigo=system("code199.exe"); //debe ser EXE para poder ejecutar el otro programa. Y PODEMOS LLAMAR CUALQUIER PROGRAMA DE WINDOWS, QUE PIOLA
    printf("El programa finalizo retornando el codigo:%i",codigo);//Si ponemos C muestra como salio el return (debajo), ignorando la ejecucion
    getch();
    return 0;
}
