//Desarrollar un programa con dos funciones aparte de la main. La primer solicite el ingreso de un entero y muestre el cuadrado de dicho valor.
//La segunda que solicite la carga de dos valores y muestre el producto de los mismos. Llamar desde la main a ambas funciones.

void cuadrado()
{
    int num, cuadra;
    printf("ingresar un numero: ");
    scanf("%i", &num);

    cuadra=num*num; //En el lenguaje de programación C no existe un signo o operador específico (como ^) para elevar un número al cuadrado

    printf("el cuadrado de %i es %i", num, cuadra);
}
void producto()
{
    int num1, num2, produ;
    printf("ingresar el PRIMER numero: ");
    scanf("%i", &num1);
    printf("ingresar el SEGUNDO numero: ");
    scanf("%i", &num2);

    produ=num1*num2;

    printf("el producto de los numeros %i y %i es %i", num1, num2, produ); // produ=num1*num2 podria ponerlo aca en vez de hacer una variable, pero queda mas organizado y lindo asi
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
    cuadrado();
    separar();
    producto();
    finalizar();
    getch();
    return 0;
}
