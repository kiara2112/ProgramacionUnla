//Definir un vector de 5 componentes de tipo float en la función main que representen las alturas de 5 personas.
//Desarrollar las siguientes funciones:
//1-Carga del vector.
//2-Retornar el promedio del vector. float calcularPromedio(float alturas[5])
//3-Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más bajas. void altasBajas(float alturas[5],float pro)

#include<stdio.h>
#include<conio.h>

void cargarAlt(float alturas[5]) //primero cargamos las alturas,
{
    int f;
    for (f=0; f<5; f++)
    {
        printf("cargar altura: ");
        scanf("%f", &alturas[f]);
    }
}

float calcularPromedio(float alturas[5]) //despues hacemos un float, para retornar el valor y utilizarlo en otra variable y verificar cual. es mayor y menor, como tambien mostrarlo en el main
{
    float sumaAlt=0;
    float promedio=0;
    int f;
    for (f=0; f<5; f++)
    {
        sumaAlt=alturas[f]+sumaAlt; //suma los valores y saca el promedio
    }
    promedio=sumaAlt/5;
    return (promedio); //regresa el valor promedio al main
}

void altasBajas(float alturas[5],float pro) //como es un void no ponemos retornar los valores
{
    int mayor=0;
    int menor=0;
    int f;
    for (f=0; f<5; f++)
    {
        if (pro>alturas[f])
        {
            menor++;
        }
        else
        {
            if (pro<altura[f]) //si alguna persona mide lo mismo que el promedio, verifica que asi no sea
            {
                mayor++;
            }
        }
    }
    printf("la cantidad de personas MAYORES al promedio es de %i", mayor);
    printf("\n");
    printf("la cantidad de personas MENORES al promedio es de %i", menor);
    printf("\n");
}


int main()
{
    float alturas[5]; //altura de 5 personas
    float promedio;
    cargarAlt(alturas);// Se pasa 'alturas' sin [5] para enviar el arreglo, no es necesario para vector poner cuantos lugares tiene, solo para definirlo
    promedio=calcularPromedio(alturas); //gradamos el promedio que retornamos de calcularPromedio, para asi utilizarlo y ver cual es mayor o menor
    printf("La altura promedio de las personas fue de %0.2f\n", promedio); //mostramos el promedio, porque si qsy
    altasBajas(alturas, promedio); //mandamos los valores de altura (vector) y el promedio que retormaos a altasBajas y contar quienes estan bajo o arriba
    getch();
    return 0;
}
