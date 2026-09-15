//Cargar en una matriz los nombres de 5 países y en un vector paralelo la cantidad de habitantes del mismo.
//Ordenar alfabéticamente e imprimir los resultados. Por último ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir nuevamente.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void ingresa (char paises[5][41], int habitantes[5])
{
    int f;
    for (f=0; f<5; f++)
    {
        printf("pais: ");
        gets (paises[f]);
        printf("habitantes: ");
        scanf("%i", &habitantes[f]);
        fflush(stdin);
    }
}

void ordenPais(char paises[5][41], int habitantes[5])
{
    int f, k;
    char auxPaises[41]; //cuando ingresa solo una palabra, debemos de poner solo una cantidad que va a entrar la palabra, sin renglones
    int auxHabit;
    for (k=0; k<4; k++) //con 5 elementos, en un ordenamiento burbuja normalmente hacés como máximo 5 - 1 = 4 pasadas.
    {
        for(f=0; f<4-k; f++)
        {
           if(strcmp(paises[f], paises[f+1])>0) //POR ESTE PARENTESIS DE MIERDA NO ME IBA
              {
                  strcpy(auxPaises, paises[f+1]);//auxpaises no necesita mostrar nada que es un vector
                  strcpy(paises[f+1], paises[f]);
                  strcpy(paises[f], auxPaises);
                  auxHabit=habitantes[f+1];
                  habitantes[f+1]=habitantes[f];
                  habitantes[f]=auxHabit;
              }
        }
    }
}


void mostrarOrden(char paises[5][41], int habitantes[5])
{
    int f;
    for (f=0; f<5; f++)
    {
        printf("pais: %s. Habitantes: %i \n", paises[f], habitantes[f]);
    }
}
void OrdenHabit(char paises[5][41], int habitantes[5])
{
    int f, k;
    char auxPaises[41];
    int auxHabit;
    for (k=0; k<4; k++) //Para que no se desborde, cuenta hasta 4 (el ultimo indice es 4)
    {
        for(f=0; f<4-k; f++)
        {
           if(habitantes[f]<habitantes[f+1]) //el segundo debe ser mas grande para hacer el intercambio
              {
                  strcpy(auxPaises, paises[f+1]);//auxpaises no necesita mostrar nada que es un vector
                  strcpy(paises[f+1], paises[f]);
                  strcpy(paises[f], auxPaises);
                  auxHabit=habitantes[f+1];
                  habitantes[f+1]=habitantes[f];
                  habitantes[f]=auxHabit;
              }
        }
    }
}





int main()
{
   char paises[5][41];
   int habitantes[5];
   ingresa(paises, habitantes);
   ordenPais(paises, habitantes);
   printf("el orden de los paises ALFABETICAMENTE\n");
   mostrarOrden(paises, habitantes);
   printf("el orden de los paises NUMERICAMENTE\n");
   OrdenHabit(paises, habitantes);
   mostrarOrden(paises, habitantes);
}
