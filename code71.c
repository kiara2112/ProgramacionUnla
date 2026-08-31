//Cargar los nombres de dos personas y sus edades. Mostrar el nombre de la persona que tiene mayor edad. Los nombres de las personan no superan los 20 caractere

#include<stdio.h>
#include<conio.h>

int main()
{
    char nombre1[21];
    char nombre2[21];
    int edad1;
    int edad2;

    printf("Ingrese el nombre de la primer persona:");
    gets(nombre1); //gets sirve para leer una cadena de caracteres

    printf("Ingrese la edad:"); //la primera vez no se usa fflush porque no ingreso nada por teclado
    scanf("%i",&edad1); //la función scanf queda en el buffer de teclado el valor de la tecla "enter"
    fflush(stdin); // luego para eliminarlo y que no se cargue en la siguiente variable debemos llamar a la función fflush, stdin administra el buffer del teclado

    printf("Ingrese el nombre de la segundo persona:");
    gets(nombre2);//Si probamos de no llamar a la función fflush podremos ver que en la variable "nombre2" se carga una cadena vacía (sale en nada), ya que ingreso enter y salta la linea a cargar la edad
    printf("Ingrese la edad:");
    scanf("%i",&edad2);

    if (edad1>edad2)
    {
        printf("La persona con mayor edad es:");
        printf("%s",nombre1);
    }
    else
    {
        if (edad2>edad1)
        {
            printf("La persona con mayor edad es %s", nombre1);
        }
        else
        {
            printf("Tienen la misma edad, %s y %s", nombre1, nombre2); //Tienen la misma edad, kiara aguirre y celeste galvan (los nombres ocupan el lugar de %s)
        }
    }
    getch();
    return 0;
}
