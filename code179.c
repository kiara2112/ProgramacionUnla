//Imprimir la información de una lista simplemente encadenada de atrás para adelante.
//El empleo de estructuras repetitivas para resolver este problema es bastante engorroso y lento
//(debemos avanzar hasta el último nodo e imprimir, luego avanzar desde el principio hasta el anteúltimo nodo y así sucesivamente)
//El empleo de la recursividad para este problema hace más sencillo su solución.


//NO ENTENDI UNA MIERDA, que Kiara del futuro se fije (https://www.youtube.com/watch?v=v_tmnsnhLPo)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo {
    int info;
    struct nodo *sig;
};

struct nodo *raiz=NULL;


void insertarPrimero(int x)
{
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void imprimir(struct nodo *reco)
{
    if (reco != NULL)
    {
        imprimir(reco->sig);
        printf("%i ",reco->info);
    }
}

void liberar() //va a borrar todos los nodos
{
    struct nodo *reco = raiz;
    struct nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}


int main()
{
    insertarPrimero(10);
    insertarPrimero(4);
    insertarPrimero(5);
    printf("Impresion de la lista del final al principio.\n");
    imprimir(raiz);
    liberar();
    getch();
    return 0;
}
