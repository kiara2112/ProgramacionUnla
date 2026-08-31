//Realizar un programa que solicite la carga de la edad y sexo de dos personas. Luego mostrar la edad y sexo de la persona mayor.
//Para almacenar el sexo definir variables de tipo char donde se almacenará el caracter 'm' o 'f' indicando si es del sexo masculino o femenino.

#include<stdio.h>
#include<conio.h>

int main()
{
    char genero1, genero2;
    int edad1, edad2;

    printf("EDAD de la primera persona: ");
    scanf("%i", &edad1);
    printf("GENERO de la primera persona: ");
    scanf(" %c", &genero1);
    printf("EDAD de la segunda persona: ");
    scanf("%i", &edad2);
    printf("GENERO de la segunda persona: ");
    scanf(" %c", &genero2);

    if (edad1>edad2)
    {
        printf("la persona mayor era la PRIMERA con: ");
        printf("%i", edad1);
        printf("\n");

        if (genero1=='f') //esto me parece medio innecesario, es para mostrar una frase si es masculino o femenino, pero podria poner solo lo que hay dentro de genero (f o m) y se entenderia que genero es la persona, sin poner un IF
        {
            printf("GENERO: Femenino");
        }
        else
        {
            printf("GENERO: Masculino");
        }

    }
    else
    {
        printf("la persona mayor era la SEGUNDA con: ");
        printf("%i", edad2);
        printf("\n");

        if (genero1=='f')
        {
            printf("GENERO: Femenino");
        }
        else
        {
            printf("GENERO: Masculino");
        }
    }
    getch();
    return 0;

}
