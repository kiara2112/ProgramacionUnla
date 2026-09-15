//Se tiene la siguiente declaración de registro:
//Definir tres variables de tipo país en la función main.
//Crear una función que reciba un puntero de tipo pais y cargue por teclado el nombre del país y la cantidad de habitantes.
//Mostrar en otra función los datos cargados de cada país.

#include<stdio.h>
#include<conio.h>

struct pais {
    char nombre[40];
    int cantidadhab;
};

void cargar(struct pais *ppais)
{
        printf("Nombre del pais:\n");
        fflush(stdin);
        gets(ppais->nombre); //aca va el puntero, no el nombre del struct
        printf("Habitantes del pais:\n");
        scanf("%i", &ppais->cantidadhab); //aca debemos de poner & porque es un numero (no es gets) y debemos decir que mandamos esto y el %i (ES IGUAL QUE NORMALMENTE, solo con otra declaracion despues donde va
}

void imprimir(struct pais ppais)//aca como no cambiamos los datos, va sin * adelante de ppais (ACA POR QUÉ NO VA * Y EN 154 SI)
{
    printf("los habitantes de %s son %i\n", ppais.nombre, ppais.cantidadhab);
}



int main()
{
    struct pais pais1, pais2, pais3;
    cargar(&pais1);
    cargar(&pais2);
    cargar(&pais3);
    imprimir(pais1); //como aca no ingresamos datos, va sin &
    imprimir(pais2);
    imprimir(pais3);
    getch();
    return 0;
}


