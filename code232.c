//Abrir el archivo "datos1.txt" en modo lectura, leer todas sus líneas y mostrar su contenido por pantalla.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    FILE *arch=fopen("datos1.txt","rt"); //"rt" Sólo lectura. El archivo debe existir previamente. Si no existe, fopen retorna NULL.
    if (arch==NULL)
        exit(1);
    char caracter = fgetc(arch); //leemos caracter por caracter con fgetc
    while (!feof(arch))
    {
        printf("%c",caracter);
        caracter = fgetc(arch); //lo manda a caracter y lo muestra arriba, asi hasta que el archivo termine
    }
    fclose(arch);
    getch();
    return 0;
}
