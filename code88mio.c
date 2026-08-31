//Desarrollar una función que solicite la carga de tres valores y muestre el menor. Desde la función main llamar 3 veces a dicha función.

void menor()
{
    int num1,num2, num3;

    printf("ingresar PRIMER valor: ");
    scanf("%i", &num1);
    printf("ingresar SEGUNDO valor: ");
    scanf("%i", &num2);
    printf("ingresar TERCER valor: ");
    scanf("%i", &num3);

    if (num1<num2 && num1<num3)
    {
        printf("el numero menor es el PRIMERO con %i", num1);
    }
    else
    {
        if (num2<num3)
        {
            printf("el numero menor es el SEGUNDO con %i", num2);
        }
        else
        {
            printf("el numero menor es el TERCERO con %i", num3);
        }
    }
}
void finalizar()
{
    printf("\n-------------------------------\n");
    printf("Gracias por utilizar este programa");
}
void separar()
{
    printf("\n-------------------------------\n");
}

int main()
{
    menor();
    separar();
    menor();
    separar();
    menor();
    finalizar();
    getch();
    return 0;
}

