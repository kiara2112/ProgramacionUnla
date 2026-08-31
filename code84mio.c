//Cargar tres nombres por teclado. Generar un cuarto string que almacene los tres nombres ingresados por teclado en orden alfabético separados por una coma.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre1[30];
    char nombre2[30];
    char nombre3[30];
    char unionNombre[120];

    printf("ingresa el PRIMERO nombre: "); //ingresamos todos los nombres
    gets (nombre1);
    printf("ingresa el SEGUNDO nombre: ");
    gets (nombre2);
    printf("ingresa el TERCER nombre: ");
    gets (nombre3);

    //Si usas < 0, estás buscando cuál va primero (orden de A a Z).

    //Si usas > 0, estás buscando cuál es el mayor/último (orden de Z a A).


    if (strcmp(nombre1,nombre2)<0 && strcmp(nombre1, nombre3)<0) //el nombre1 es MENOR alfabeticamente, eso lo haria que este mas cerca de A, lo convierte en el primer, Por eso no va > porque seria el mayor alfabeticamente y (Ejemplo ana, seria la ultima de la lista, aunque sea el primero del abecesario, porque eso verificaria que ana es el ultimo de la lista, no el primero)
    {
        strcpy(unionNombre,nombre1); //Copia una cadena en otra, como esta vacio union nombre debe de empezar con alguno de los 3 nombres
        strcat(unionNombre,", ");

        if (strcmp(nombre2,nombre3)<0)//nombre2 es MENOR alfabeticamente, por eso va antes de la cadena
        {
            strcat(unionNombre,nombre2); //aca empezamos a utilizar strcat porque ya empezamos la cadena con el primer nombre en strcpy de nombre1
            strcat(unionNombre,", ");
            strcat(unionNombre,nombre3);

        }
        else
        {
            strcat(unionNombre,nombre3); //si no es el anterior caso, los numeros se dan la vuelta y este es el mayor
            strcat(unionNombre,", ");
            strcat(unionNombre,nombre2);
        }
    }
    else
    {
        if (strcmp(nombre2, nombre3)<0)//si nombre1 no es el mayor, el mayor debe ser o nombre2 o nombre3, aca verifica si nombre 2 es mayor a 3, significamndo que esta mas cerca a A y lo convierte en el primero alfabeticamente
        {
            strcpy(unionNombre,nombre2); //empieza con strcpy porque antes no lo señalizamos
            strcat(unionNombre,", ");

            if (strcmp(nombre1,nombre3)<0)
            {
            strcat(unionNombre,nombre3);
            strcat(unionNombre,", ");
            strcat(unionNombre,nombre1);
            }
            else
            {
            strcat(unionNombre,nombre1);
            strcat(unionNombre,", ");
            strcat(unionNombre,nombre3);
            }
        }
        else
        {
            strcpy(unionNombre,nombre3); //por ultimo, si no es ninguno de los anterior, por obviedad nombre3 es el menor alfabeticamente y va primero, hacemos lo mismo que lo anteriores
            strcat(unionNombre,", ");

            if (strcmp(nombre1,nombre2)<0) //y aca verificamos por ultimo es despues del 3 (como no verificamos nada en esta cadena), si nombre 1 es menor que nombre2 y va primero en la cadena, no es es asi, ejecuta el else y lo ordena al final
            {
            strcat(unionNombre,nombre1);
            strcat(unionNombre,", ");
            strcat(unionNombre,nombre2);
            }
            else
            {
            strcat(unionNombre,nombre2);
            strcat(unionNombre,", ");
            strcat(unionNombre,nombre1);
            }

        }
            }

        printf("la union de los nombres es %s", unionNombre); //muestra el quilombo que hicimos arriba, que seguro era mejor haciendo diferentes if y no encadenados, pero bueno. Me complico la vida aproposito


    getch();
    return 0;
}
