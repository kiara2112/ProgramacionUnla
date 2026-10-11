//Registrar las ventas realizadas en un local durante los 6 días de la semana (Lunes a Sábado) utilizando un vector de 6 elementos de tipo `float`.
//Implementar la función `void cargarSueldosOVentas(float ventas)` para ingresar el monto recaudado cada día.
//Implementar la función `float calcularTotal(float ventas)` que sume y devuelva el total recaudado en la semana.
//Implementar la función `void evaluarRendimiento(float ventas, float promedio)` que cuente e imprima cuántos días se superó el promedio diario de ventas.
//En la función `main`, coordinar las llamadas a las tres funciones

#include<stdio.h>
#include<conio.h>

void cargarSueldosOVentas(float ventas[6])
{
    for (int f=0; f<6; f++)
    {
       printf("monto del dia: ");
       scanf("%f", &ventas[f]);
    }
}

float calcularTotal(float ventas[6])
{
    float suma=0;
    for (int f=0; f<6; f++)
    {
       suma+=ventas[f];
    }

    return suma;
}

void evaluarRendi(float ventas[6], float promedio)
{
    int contar=0;
    for (int f=0; f<6; f++)
    {
      if (ventas[f]>promedio)
      {
         contar++;

      }
    }
  printf("el promedio se supero %i dias", contar);
}


int main()
{
  float ventas[6];
  float promedio;
  float sumaCarga;

  cargarSueldosOVentas(ventas);
  sumaCarga=calcularTotal(ventas);

  promedio= sumaCarga/6.0;

  evaluarRendi(ventas, promedio);

  getchar();
  return 0;

}
