//Mediante un ciclo `do-while` o `while`, solicitar al usuario el ingreso de la cantidad de unidades vendidas en cada transacción. La carga finaliza cuando se ingresa la cantidad `0`.
//Contar cuántas ventas fueron superiores a 50 unidades.
//Acumular el total general de unidades vendidas en el día.
//Al finalizar la carga, mostrar el total de unidades vendidas y el promedio de unidades por venta (validando no dividir por cero si no se ingresaron ventas)

#include<stdio.h>
#include<conio.h>


int main()
{
    int cant;
    float promedio;
    int contar50=0;
    int cantTotal=0;
    int contar=0;

    printf("cantidad de unidades vendidas: ");
    scanf("%i", &cant);

  while (cant!=0)
  {

      if (cant>50)
      {
          contar50++;
      }
      cantTotal=cantTotal+cant;
      contar++;
      printf("cantidad de unidades vendidas: ");
      scanf("%i", &cant);
  }

    if (contar!=0)
    {
        promedio=(float)cantTotal/contar;
        printf("el promedio es de %.2f\n", promedio);
    }
    else
    {
      printf("no se ingresaron datos");
    }

    printf("fueron superiores a 50 %i veces", contar50);
   getchar();
   return 0;
}
