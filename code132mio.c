//Se tiene la siguiente declaración de registro:
//Definir tres variables de tipo país y almacenar los nombres de los países y la cantidad de habitantes de dichos países.
//Mostrar seguidamente el nombre del país con mayor cantidad de habitantes (considerar que los tres países tienen cantidades distintas)

#include<stdio.h>
#include<conio.h>
#include<string.h>


struct pais {
    char nombre[40];
    int cantidadhab;
};

int main()
{
    struct pais pais1, pais2, pais3; //debo poner cual es el struct y despues los que definí
    printf("ingresar pais 1: ");
    gets(pais1.nombre);
    printf("ingresar habitantes: ");
    scanf("%i", &pais1.cantidadhab);
    fflush(stdin); //limpiamos despues de ingresar un numero y antes de una cadena de caracteres
    printf("ingresar pais 2: ");
    gets(pais2.nombre);
    printf("ingresar habitantes: ");
    scanf("%i", &pais2.cantidadhab);
    fflush(stdin);
    printf("ingresar pais 3: ");
    gets(pais3.nombre);
    printf("ingresar habitantes: ");
    scanf("%i", &pais3.cantidadhab);
    fflush(stdin); //este es innecesario, pero queda facha JAJA

    if (pais1.cantidadhab>pais2.cantidadhab && pais1.cantidadhab>pais3.cantidadhab) //comparamos todos los valors de paises si es pais 1 es el mayor
    {
        printf("el pais %s es el que tiene mas habitantes", pais1.nombre);

    }
    else
    {
        if (pais2.cantidadhab>pais3.cantidadhab && pais2.cantidadhab>pais1.cantidadhab)
        {
            printf("el pais %s es el que tiene mas habitantes", pais2.nombre);

        }
        else
        {
             printf("el pais %s es el que tiene mas habitantes", pais3.nombre);
        }
    }

    getch();
    return 0;
}
