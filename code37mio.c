//Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.
//Emplear el operador “%” en la condición de la estructura condicional (este operador retorna el resto de la división de dos valores, por ejemplo 11%2 retorna un 1):
//	if (valor%2==0)         //Si el if da verdadero luego es par.


#include<stdio.h>
#include<conio.h>

int main()
{
    int n, num, i, sumarPar, sumarImpar;

    printf("Cantidad de numeros a ingresar: ");
    scanf("%i", &n);

    i=1;
    sumarPar=0; //acumuladores en 0 (por las dudas XD)
    sumarImpar=0;

    while (i<=n)
    {
        printf("Ingresar numero: ");
        scanf("%i", &num);

        if (num%2==0) //esto es como el MOD, me devuelve el resultado de la division. Si es igual a 0 es PAR
        {
            sumarPar=sumarPar+1;
        }
        else
        {
            sumarImpar=sumarImpar+1;
        }
        i=i+1;
    }

    printf("La cantidad de numeros PARES fue: ");
    printf("%i", sumarPar);
    printf("\n");
    printf("la cantidad de numeros IMPARES fue: ");
    printf("%i", sumarImpar);

    getch();
    return 0;
}
