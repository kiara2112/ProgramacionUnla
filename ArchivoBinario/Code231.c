//Crear un archivo de texto llamado "datos1.txt" y almacenar tres líneas. Acceder a su contenido luego con al menos dos editores de texto.

// caracteres legibles por el ser humano, podemos editar (crear, agregar, modificar y borrar desde cualquier editor de texto)
//funciones para procesar en forma sencilla un archivo de texto.

//"rt" Sólo lectura. El archivo debe existir previamente. Si no existe, fopen retorna NULL.

//"wt" Sólo escritura. Si el archivo no existía, lo crea. Si existía, destruye su contenido y lo abre vacío.

//"at" Sólo escritura, pero en modo append (o sea: añadir): Los datos que se graban, lo hacen al final. Crea el archivo si no existía, y no destruye su contenido si ya existía.

//"r+t" Permite lectura y escritura. El archivo debe existir previamente.

//"w+t" Permite escritura y lectura. Crea el archivo si no existía, pero destruye su contenido si ya existía, y lo abre vacío.

//"a+t" Permite añadir al final, en modo lectura – escritura. Crea el archivo si no existía. No destruye su contenido si ya existía.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    FILE *arch=fopen("datos1.txt","wt");
    if (arch==NULL)
        exit(1);

    fputs("Primer linea\n",arch);//fputs almacenamos una cadena de caracteres en el archivo
    fputs("Segunda linea\n",arch);//Siempre que llamamos a fputs el puntero de archivo avanza con lo que evitamos grabar en la misma ubicación dentro del archivo.
    fputs("Tercer linea\n",arch);//\n nos da el salto de linea(importante)

    fclose(arch);

    printf("Se creo el archivo de texto con tres lineas de texto.");
    getch();
    return 0;
}
