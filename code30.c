//Una planta que fabrica perfiles de hierro posee un lote de n piezas.Confeccionar un programa que pida ingresar
//por teclado la cantidad de piezas a procesar y luego ingrese la longitud de cada perfil; sabiendo que la pieza cuya longitud
//esté comprendida en el rango de 1.20 y 1.30 son aptas. Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.


#include<stdio.h>
#include<conio.h>

int main()
{
    int x,cantidad,n;
    float largo;
    x=1;
    cantidad=0;
    printf("Cuantas piezar procesara:"); //marcar cuantas piezas van a ingresar
    scanf("%i",&n);
    while (x <= n)
    {
        printf("Ingrese la medida de la pieza:");
        scanf("%f",&largo);
        if (largo >= 1.20 && largo <= 1.30)//ve si las medidas se cumplen
        {
            cantidad = cantidad +1; //las va contando
        }
        x=x + 1; //aumenta la X
    }
    printf("La cantidad de piezas aptas son:");
    printf("%i",cantidad);
    getch();
    return 0;
}
