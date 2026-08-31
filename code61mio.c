//Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener la suma de los dos vectores,
//dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.

#include<stdio.h>
#include<conio.h>

int main()
{
    int vector1[4];
    int vector2[4];
    int vectorSuma[4];
    int f;

    for (f=0; f<4; f++) //cargamos los 2 valores. En el ejemplo me pone primero el primer vector y arma otro for para cargar el segundo vector, pienso que los 2 funcionan bien si se avisa que se cargan los 2
    {
        printf("ingresa el numero del vector 1: ");
        scanf("%i", &vector1[f]);
        printf("ingresa el numero del vector 2: ");
        scanf("%i", &vector2[f]);
    }

     for (f=0; f<4; f++)
     {
         vectorSuma[f]=vector1[f]+vector2[f];
     }
        printf("suma de los vectores: ");//avisamos que vamos a mostrar la lista de valores (Podriamos poner el numero al lado para que se sepa cual es cada uno, pero ni ganas)
        printf("\n");
     for (f=0; f<4; f++)
     {
         printf("%i", vectorSuma[f]);
         printf("\n"); //es necesario poner un espacio, porque si no, me muestra la suma de los numeros en una misma linea y se confunde
     }

     getch();
     return 0;
}
