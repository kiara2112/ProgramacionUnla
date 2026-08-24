//Mostrar todos los múltiplos de 8 que hay hasta el valor 500.
//Debe aparecer en pantalla 8 - 16 - 24, etc.

#include<stdio.h>
#include<conio.h>

int main()
{
   int num8;
   num8=8;

    while (num8<=500)
    {
      printf("%i", num8);
      printf(" - ");

      num8=num8+8;

    }
    getch();
    return 0;
}
