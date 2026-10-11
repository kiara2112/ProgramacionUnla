//Abrir el archivo "datos1.txt" en modo lectura, leer todas sus líneas y mostrar su contenido por pantalla utilizando la función fgets



#include<stdio.h>

void main()
{
    FILE *arch=fopen("datos1.txt","rt");
    if (arch==NULL)
        exit(1);
    char linea[100];//va mostrando como vector, va almnacenar mas de 10 caracteres ahi dentro
    fgets(linea,100,arch); //lee hasta que muestre todo los caracteres o 99
    while (!feof(arch))
    {
        printf("%s",linea);
        fgets(linea,100,arch); //muestra la fila de 100 caracteres (a diferencia de antes que era 1), hasta que no haya mas lineas
    }
    fclose(arch);
    getch();
    return 0;
}
