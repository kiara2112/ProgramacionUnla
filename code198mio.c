//Definir una matriz de 5 filas y 10 columnas. Cargar valores aleatorios comprendidos entre 1 y 10.
//Ingresar por teclado un número y verificar si se encuentra en la matriz. No buscar más si se lo encuentra, salir de los ciclos mediante un goto.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define FILAS 5
#define COLUMNAS 10

void cargar (int matriz[FILAS][COLUMNAS])
{
    int f, k;

    for (f=0; f<FILAS; f++)
    {
        for (k=0; k<COLUMNAS; k++)
        {
            printf("ingresar valor: ");
            scanf("%i", &matriz[f][k]); //mat[f][c]=rand()%10 + 1; elije un numero al azar entre 1 y 10, pero se le agrega el +1 para que no quede de 1-9
        }
    }
}
void imprimir (int matriz[FILAS][COLUMNAS])
{
    int f, k;

    for (f=0; f<FILAS; f++)
    {
        for (k=0; k<COLUMNAS; k++) //primero va rotando el que se encuentra dentro
        {
            printf("valor de la matriz [%i,%i] es %i\n", f, k, matriz[f][k]);
        }
    }
}

void comparar (int matriz[FILAS][COLUMNAS])
{
    int f, k, num;

    printf("ingresar valor a comparar: ");
    scanf("%i", &num);

    for (f=0; f<FILAS; f++)
    {
        for (k=0; k<COLUMNAS; k++)
        {
           if(matriz[f][k]==num) //si el numero es igual el que esta en la matriz
           {
               goto salir; //sale por medio del goto
           }
        }
    }
  printf("El numero ingresado no esta en la matriz"); //si no, sale del for normal y ejecuta este print, hasta return que sale del programa.
  return ;
  salir: printf("el numero %i se repite", num);//va al goto y muestra que el numero se repite (debe tener un return antes para copiar)

}



int main()
{
   int matriz[FILAS][COLUMNAS];
   cargar(matriz);
   imprimir(matriz);
   comparar(matriz);
   return 0;
   getch();
}









