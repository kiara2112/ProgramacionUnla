//De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
//a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
//b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
//c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.

#include<stdio.h>
#include<conio.h>

//NO ME FUNCIONA, LLORO

int main()
{
    int anioAntg;
    float sueldoNeto, sueldo; //mi problema fue no usar float para divisiones (que me daran con coma)
    printf("ingresar sueldo: ");
    scanf("%f", &sueldo);
    printf("ingresar anios de antiguedad: ");
    scanf("%i", &anioAntg);

    if (sueldo<500 && anioAntg>=10)
    {
        sueldoNeto=sueldo+(sueldo*0.2);
        printf("Sueldo que se debe de pagar: ");
        printf("%f",sueldoNeto); //aca use scanf y me volvia a pedir un numero
    }
    else
    {
        if (sueldo<500)
        {
            sueldoNeto=sueldo+(sueldo*0.05);
            printf("Sueldo que se debe de pagar:");
            printf("%f",sueldoNeto);
        }
        else
        {
            printf("Sueldo que se debe de pagar:");
            printf("%f",sueldo); //no debe de utilizarse el sueldoNeto porque no tiene nada si no hicimos la cuenta
        }

    }
    getch();
    return 0;
}

