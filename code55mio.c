//En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual.
//El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
//Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
//a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
//Estado de la cuenta	'Acreedor' si el saldo es >0.
//			'Deudor' si el saldo es <0.
//			'Nulo' si el saldo es =0.
//b) La suma total de los saldos acreedores.


#include<stdio.h>
#include<conio.h>

int main()
{
    float saldo, sumaSaldo;
    int cuenta;
    sumaSaldo=0;

    do{
        printf("ingresa cuenta: ");
        scanf("%i", &cuenta);

        if (cuenta>0) //para que no me pida el saldo de una cuenta que va a dar 0 (ya que este pedido pasa antes de la cuestion de pregunta), se usa un if que si es mayor a 0 se ejecute,si no, vaya al final y termine el programa
        {
            printf("ingresa saldo de cuenta: "); //se pide despues el saldo, dentro del primer if
            scanf("%f", &saldo);
        if (saldo>0) //y ve la situacion del saldo de la cuenta de forma aparte de todo
        {
            printf("Acreedor");
        }
        else
        {
            if (saldo<0)
            {
                printf("deudor");
            }
            else
            {
                printf("nulo");
            }
        }
        sumaSaldo=sumaSaldo+saldo;
        printf("\n"); //asi no queda todo acumulado
        }

    }while (cuenta!=0);


printf("La suma del saldo de las cuentas es: ");
printf("%f", sumaSaldo);

getch();
return 0;

}
