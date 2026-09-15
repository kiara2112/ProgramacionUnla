//Confeccionar un programa que permita cargar un vector de 5 elementos enteros. Calcular la suma y el producto de todos sus elementos.
// +=
// -=
// *= (multiplicacion)
// /= (division)
// %= (mod)

#include<stdio.h>
#include<conio.h>

#define CANT 5

void cargar(int vec[CANT])
{
    int f;
    for(f=0;f<CANT;f++)
    {
        printf("Ingrese elemento:");
        scanf("%i",&vec[f]);
    }
}

int retornarSuma(int vec[CANT])
{
    int suma=0;
    int f;
    for(f=0;f<CANT;f++)
    {
        suma+=vec[f]; //suma=suma+valor es lo mismo
    }
    return suma;
}

int retornarProducto(int vec[CANT])
{
    int producto=1; //para que cuando se multiplique no quede en 0
    int f;
    for(f=0;f<CANT;f++)
    {
        producto*=vec[f];//producto=producto*valor, se va multiplcan
    }
    return producto;
}


int main()
{
    int vec[CANT];
    cargar(vec);
    printf("La suma de sus componentes:%i\n", retornarSuma(vec));
    printf("El producto de sus componentes:%i", retornarProducto(vec));
    getch();
    return 0;
}
