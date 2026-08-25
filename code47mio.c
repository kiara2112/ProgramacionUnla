//Realizar un programa que lea los lados de n triángulos, e informar:
//a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
//b) Cantidad de triángulos de cada tipo.
//c) Tipo de triángulo que posee menor cantidad.

//NO TERMINADO

int main()
{

    int isoceles, equilatero, escaleno, lado1, lado2, lado3, n;

    printf("ingresa cantidad de triangulos: ");
    scanf("%i", &n);
    equilatero=0;
    isoceles=0;
    escaleno=0;

    for (f=1; f<=n; f++)
{
        printf("ingresar PRIMER lado: ");
        printf("%i", &lado1);
        printf("ingresar SEGUNDO lado: ");
        printf("%i", &lado2);
        printf("ingresar TERCERO lado: ");
        printf("%i", &lado3);

        if (lado1==lado2 && lado2==lado3)
{
            printf("el triangulo es EQUILATERO");
            equilatero=equilatero+1;
}
        else
{
            if (lado1==lado2 || lado2==lado3 || lado3==lado1)
{
                printf("el triangulo es ISOCELES");
                isoceles=isoceles+1;
}
            else
{
                printf("el triangulo es ESCALENO");
                escaleno=escaleno+1;
}

}
}

if (equ)





printf("EQUILATEROS: ");
printf("%i", equilateros);
printf("ISOCELES: ");
printf("%i", isoceles);
printf("ESCALENO: ");
printf("%i", escaleno);

getchar();
return 0;


}

