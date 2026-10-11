// triangulo relleno

#include<stdio.h>


int main()
{
  int f, j, n;
  printf("filas de x: "); //cantidad de filas
  scanf("%i", &n);
//(Bucle exterior de Filas)
  for (f=0; f<n; f++)
  {
      //(Espacios de la izquierda)
      for (j=0; j<n-f; j++)//empuja la pirámide hacia la derecha y centrarla. En cada fila imprime n - f espacios:
      {
          printf(" ");
      }
    //(Impresión de "x")
      for (j=0; j<f*2+1; j++)//Fórmula matemática que genera números impares
      {
          printf("x");
      }
      printf("\n");
  }

   getchar();
   return 0;
}

