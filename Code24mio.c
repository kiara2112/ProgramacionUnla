//Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero).
//Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)

#include<stdio.h>
#include<conio.h>

int main()
{
    int coorX, coorY;
    printf("Pasar coordenadas de X: ");
    scanf("%i", &coorX);
    printf("Pasar coodernadas de Y: ");
    scanf("%i", &coorY);

    if (coorX>0 && coorY>0) //positivo y positivo
    {
        printf("Se encuentra en el cuadrante 1");
    }
    else
    {
        if (coorX<0 && coorY>0) //negativo y positivo
        {
            printf("Se encuentra en el cuadrante 2");
        }
        else
        {
            if (coorX<0 && coorY<0) //negativo y negativo
            {
                printf("Se encuentra en el cuadrante 3");
            }
            else
            {
                printf("Se encuentra en el cuadrante 4"); //positov y negativo
            }
        }
    }
    getch();
    return 0;
}
