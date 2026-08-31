//Escribir un programa que solicite la carga de un número entre 0 y 999, y nos muestre un mensaje de cuántos dígitos tiene el mismo. Finalizar el programa cuando se cargue el valor 0.

#include<stdio.h>
#include<conio.h>

int main()
{
     int valor;
     do {
         printf("Ingrese un valor entre 0 y 999 (0 finaliza):");
         scanf("%i",&valor);
         if (valor >= 100)
         {
             printf("Tiene 3 digitos.");
         }
         else
         {
             if (valor >= 10)
             {
                 printf("Tiene 2 digitos.");
             }
             else
             {
                 printf("Tiene 1 digito.");
             }
         }
         printf("\n");
     } while (valor != 0);
     getch();
     return 0;
}
