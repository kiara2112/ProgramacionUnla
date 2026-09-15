////Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un triángulo. El programa deberá informar:
//a) De cada triángulo la medida de su base, su altura y su superficie.
//b) La cantidad de triángulos cuya superficie es mayor a 12.

#include<stdio.h>

int main()
{

    int n, base, altura, f, contar12;
    float superficie;
    contar12=0;

    printf("ingresar cuantos pares ingresan: ");
    scanf("%i", &n);

    for (f=1; f <=n; f++)
{

        printf("ingresar base: ");
        scanf("%i", &base);
        printf("ingresar altura: ");
        scanf("%i", &altura);

    superficie=(base*altura)/2;

if (superficie>12)
{
    contar12=contar12+1;
}

    printf("base: ");
    printf("%i", base);
    printf("\n");
    printf("altura: ");
    printf("%i", altura);
    printf("\n");
    printf("superficie: ");
    printf("%.2f", superficie);
    printf("\n");

}

getchar();
return 0;

}
