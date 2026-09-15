//Confeccionar un programa que permita :
//1-Almacenar en una matriz los datos de 5 personas.
//2-Imprimir los nombres.
//3-Ingresar otro nombre y verificar si se encuentra almacenado en la matriz.


#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombres[5][41])
{
    int f;
    for(f=0;f<5;f++)
    {
        printf("Ingrese el nombre de persona:");//ingresan los nombres normal con gets
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41])
{
    int f;
    printf("Listado completo de nombres\n");
    for(f=0;f<5;f++)
    {
        printf("%s\n",nombres[f]); //muestra los que ya tenemos
    }
}

void consulta(char nombres[5][41])
{
    int f;
    char nom[41];
    int existe=0;
    printf("Ingrese un nombre para buscarlo:");
    gets(nom);
    for(f=0;f<5;f++)
    {
        if (strcmp(nom,nombres[f])==0)//compra si el numero que ingresamos (a un vector aparte, independiente al anteriro, es igual a uno alfabeticamente, es decir son iguales)
        {
            existe=1; //usa un existe, que si entra dentro de if intercambia
        }
    }
    if (existe==1)
    {
        printf("El nombre se encuentra almacenado en la matriz."); //luego un if para mostrar si el numero se cambio o no
    }
    else
    {
        printf("El nombre no se encuentra almacenado en la matriz.");
    }
}


int main()
{
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    consulta(nombres);
    getch();
    return 0;
}
