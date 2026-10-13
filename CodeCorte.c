
#include<stdio.h>
#include<conio.h>

int main()
{

    int ciudad, venta, ciudadAux;
    int subtotal=0;
    int total=0;
    int x=0;
    int vecCiu[100];
    int vecVent[100];

    printf("ingresar ciudad: ");
    scanf("%i", &ciudad);
    printf("ingresar ventas: ");
    scanf("%i", &venta);


    while (ciudad!=99)
    {
        ciudadAux=ciudad;

        while(ciudad==ciudadAux)
        {
           subtotal+=venta;
           vecCiu[x]=ciudad;
           vecVent[x]=venta;

           printf("ingresar ciudad: ");
           scanf("%i", &ciudad);
           printf("ingresar ventas: ");
           scanf("%i", &venta);

          x++;
        }
      printf("\n");
      printf("ciudad %i total: %i\n", ciudadAux, subtotal);
      total+=subtotal;
      subtotal=0;

    }
    printf("ciudad\tventas\t");
    for (int f=0; f<x; f++)
    {
        printf("%i\t %i\t\n",vecCiu[f] ,vecVent[f]);
    }
    printf("\ntotal final: %i", total);
    getchar();
    return 0;

}


