//Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia,
//en caso contrario informar el producto y la división del primero respecto al segundo.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, dif, suma, producto;
    float division;

    printf ("ingresa el primer numero: ");
    scanf ("%i", &num1);
    printf ("ingresa el segundo numero: ");
    scanf ("%i", &num2);

    if (num1>num2)//lleva un {} dentro del if para marca el comienzo y el final
    {
        suma=num1+num2;
        dif=num1-num2;

        printf ("la suma de los numeros es: ");
        printf("%i", suma);
        printf ("\n");
        printf("la diferencia entre los numeros es: ");
        printf("%i",dif);
    }
    else //esto seria el si no (si la condicion de arriba niega) este vuelve a abrir con {}
    {
        producto=num1*num2;
        division=num2/num1; //debe de ir al revez porque no se puede dividir siendo 1 menor (ya que ya niega de arriba) en la pagina ta mal

        printf ("la producto de los numeros es: ");
        printf("%i", producto);
        printf("\n");
        printf("la division de los numeros es: ");
        printf("%f", division);
    }
getch();
return 0;
}

