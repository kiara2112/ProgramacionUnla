//Realizar un programa que lea los lados de n triángulos, e informar:
//a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
//b) Cantidad de triángulos de cada tipo.
//c) Tipo de triángulo que posee menor cantidad.

//NO TERMINADO

int main()
{

    int isoceles, equilatero, escaleno, lado1, lado2, lado3, n, f;

    printf("ingresa cantidad de triangulos: ");
    scanf("%i", &n);
    equilatero=0;
    isoceles=0;
    escaleno=0;

    for (f=1; f<=n; f++)
    {
        printf("ingresar PRIMER lado: ");
        scanf("%i", &lado1);
        printf("ingresar SEGUNDO lado: ");
        scanf("%i", &lado2);
        printf("ingresar TERCERO lado: ");
        scanf("%i", &lado3);

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

        printf("\n");
    }

    if (equilatero<isoceles && equilatero<escaleno)
    {
    printf("EQUILATERO tiene menor cantidad");
    }
    else
    {
        if (isoceles>escaleno)
        {
            printf("ESCALENO tiene menor cantidad");
        }
        else
        {
            printf("ISOCELES tiene menor cantidad");
        }
    }
printf("\n");
printf("EQUILATEROS: ");
printf("%i", equilatero);
printf("\n");
printf("ISOCELES: ");
printf("%i", isoceles);
printf("\n");
printf("ESCALENO: ");
printf("%i", escaleno);

getchar();
return 0;


}

