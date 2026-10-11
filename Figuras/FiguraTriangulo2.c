

#include <stdio.h>

int main() {
    int pisos = 6;    // Cantidad de pisos
    int inicio = 3;   // Letra inicial (3 = C)


    // Bucle para controlar cada piso
    for (int i = 1; i <= pisos; i++)
    {

        // 1. Imprimir espacios a la izquierda para alinear el triángulo
        for (int j = 1; j <= pisos - i; j++)
        {
            printf(" ");
        }

        // 2. Imprimir las letras de la fila actual
        for (int j = 1; j <= i; j++) {
            printf("x");

            // Agregar un espacio entre letras de la misma fila
            if (j < i)
            {
                printf(" ");
            }
        }

        // Salto de línea al terminar cada piso
        printf("\n");
    }

    return 0;
}
