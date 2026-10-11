//Una tienda vende un determinado producto. Se ingresa por teclado el precio unitario del producto, la cantidad vendida y la categoría del cliente (`1` para Cliente Habitual, `2` para Cliente VIP).
//1. Calcular el importe bruto (`cantidad * precio`).
//2. Si la cantidad es mayor a 10 unidades **y** el cliente es categoría `2` (VIP), aplicar un **15% de descuento**[4].
//3. Si no cumple la condición anterior pero la cantidad es mayor a 20 unidades, aplicar un **10% de descuento**.
//4. Mostrar en pantalla el importe final a pagar

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int cantVend, categoria;
    float neto, bruto, precioUni;

    printf("Precio unitario de Producto: ");
    scanf("%f", &precioUni);
    printf("Cantidad vendida: ");
    scanf("%i", &cantVend);
    printf("Categoría del cliente (1. Cliente Habitual, 2.Cliente VIP): ");
    scanf("%i", &categoria);

    bruto=cantVend*precioUni;

    if (cantVend>10 && categoria==2)
    {
        neto=bruto-(bruto*15/100);
    }
    else
    {
        if(cantVend>20)
        {
            neto=bruto-(bruto*10/100);
        }
        else
        {
            neto=bruto;
        }
    }

    printf("el importe neto es de %2.0f", neto);
}
