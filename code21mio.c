//Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo
//y a este resultado se lo multiplica por el tercero.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3, suma, producto;
    printf("ingresar 1 numero: ");
    scanf("%i", &num1);
    printf("ingresar 2 numero: ");
    scanf("%i", &num2);
    printf("ingresar 3 numero: ");
    scanf("%i", &num3);

    if (num1==num2 && num1==num3) //si los 3 numeros son iguales
    {
        suma=num1+num2;
        producto=suma*num3; //de la suma que ya teniamos lo multiplicamos con el tercero

        printf("la suma de los numeros 1 y 2 es: ");
        printf("%i", suma); //para mostrar el numero debemos de usar antes "%i"
        printf("\n"); //usamos esto para saltar un renglon (ALT 92, porque mi teclado no deja con ALT GR °)
        printf("el producto de la suma con el 3 es: ");
        printf("%i", producto);
    }

   getch();
   return 0;
}
