//Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
//Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas.

#include<stdio.h>
#include<conio.h>

int main()
{
    int f,may,men;
    float alturas[5]; //definimos con float el vector
    float suma,promedio;

    for (f=0; f<5; f++)//pasamos por todo el vector sumando las alturas
    {
        printf("Ingrese la altura de la persona:");
        scanf("%f",&alturas[f]);
    }
    suma=0;
    for(f=0; f<5; f++)//f tiene que ser mayor a 5, no mayor e igual
    {
        suma=suma+alturas[f];//vamos vector por vector y lo guardamos en una variable aparte
    }
    promedio=suma/5; //sacamos el promedio
    printf("Promedio de alturas:");
    printf("%0.2f",promedio);//lo achicamos para que no salgan todos los numeros con el "%0.2f" (mostramos solo 2 DECIMALES)
    printf("\n");

    may=0;
    men=0;
    for(f=0; f<5; f++)
    {
        if (alturas[f] > promedio)//como esta en comparacion al promedio las alturas
        {
            may++;
        }
        else
        {
            if (alturas[f] < promedio)
            {
                men++;
            }
        }
    }
    printf("Cantidad de personas mayores al promedio:");
    printf("%i",may);
    printf("\n");
    printf("Cantidad de personas menores al promedio:");
    printf("%i",men);
    getch();
    return 0;
}
