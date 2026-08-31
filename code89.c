Confeccionar una función que reciba dos enteros e imprima el mayor de ellos. Llamar a la función desde la main cargando previamente dos valores por teclado.

#include<stdio.h>
#include<conio.h>

void imprimirMayor(int v1,int v2) //tipo de parametro, nombre de parametro, asi sucesivamente
{
    if (v1>v2)//no puedo desde aca ingresar a valor1 y valor2, por eso utilizo los parametros que se mandaron de abajo a v1 y v2
    {
        printf("El mayor es %i",v1);
    }
    else
    {
        printf("El mayor es %i",v2);
    }
}


int main()
{
    int valor1,valor2;
    printf("Ingrese primer valor:");
    scanf("%i",&valor1);
    printf("Ingrese segundo valor:");
    scanf("%i",&valor2);
    imprimirMayor(valor1,valor2); //se los pasas, mandando una copia al v1, v2. En la mismo orden que lo ponemos aca. en vez de poner eso, pueden ser directamente los numeros, sin que pasen por una variable antes
    getch();
    return 0;
}
