//Problema: Se cuenta con las unidades vendidas de 5 productos en un vector de enteros int cantidades30
//Crear una función para cargar el vector de cantidades
//Crear una función que encuentre el producto con la mayor cantidad vendida e imprima el valor y el número de producto (su posición $+ 1$)
//Crear una función ordenarMayorAMenor que ordene el vector de cantidades en forma descendente (de mayor a menor) utilizando el método de la burbuja (con dos ciclos for anidados)
//Mostrar el vector antes y después de ordenarlo

#include<stdio.h>
#include<conio.h>



void cargar (int canti[5], int auxCanti[5])
{
int valor;

   for (int f=0; f<5; f++)
   {
       printf("cantidades del producto: ");
       scanf("%i", &valor);
       canti[f]=valor;
       auxCanti[f]=valor;
   }
}

void mayor (int canti[5])
{
    int may=canti[0];
    int posMay=1;
    int f;
   for (f=1; f<5; f++)
   {
        if (canti[f]>may)
        {
            may=canti[f];
            posMay=f+1;
        }
   }

   printf("el producto con mayor cantidad es %i con %i\n", posMay, may);
}

void OrdenMayorAMenor(int canti[5], int auxCanti[5])
{
    int aux;
    for (int k=0; k<4; k++)
    {
         for (int f=0; f<4-k; f++)
         {
             if (auxCanti[f]<auxCanti[f+1])
             {
                 aux=auxCanti[f];
                 auxCanti[f]=auxCanti[f+1];
                 auxCanti[f+1]=aux;

             }
         }
    }

    for (int f=0; f<5; f++)
    {
         printf("vector normal %i vector Intercambiado %i\n", canti[f], auxCanti[f]);
    }

}


int main()
{
    int canti[5];
    int auxCanti[5];

    cargar(canti, auxCanti);
    mayor(canti);
    OrdenMayorAMenor(canti, auxCanti);
    getch();
    return 0;

}
