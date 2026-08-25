//Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
//a) La cantidad de valores ingresados negativos.
//b) La cantidad de valores ingresados positivos.
//c) La cantidad de múltiplos de 15.
//d) El valor acumulado de los números ingresados que son pares.

int main()
{
int num, f, pos, neg, mul15, acumPares;

pos=0;
neg=0;
mul15=0;
acumPares=0;

for (f=1; f<=10; f++)
{
printf("ingresar numero entero: ");
scanf("%i", &num);

if (num>0)
{
pos=pos+1;
}
else
{
neg=neg+1;
}

if (num%15==0)
{
mul15=mul15+1;
}

if (num%2==0)
{
acumPares=acumPares+num;
}
}

printf("numeros positivos: ");
printf("%i", pos);
printf("\n");
printf("numeros negativos: ");
printf("%i", neg);
printf("\n");
printf("numeros multiplos de 15: ");
printf("%i", mul15);
printf("\n");
printf("acumulador de pares: ");
printf("%i", acumPares);
printf("\n");

getchar();
return 0;

}
