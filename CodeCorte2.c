


#include <stdio.h>

int main()
{
    int ciudadAux;
    int subtotal = 0;
    int total = 0;
    int x = 0;

    int vecCiu[100] = {1,1,1,2,2,3,4,4,99};
    int vecVent[100] = {30,50,3,20,70,80,90,100,0};

    while (vecCiu[x] != 99)
    {
        ciudadAux = vecCiu[x];

        printf("Ciudad %i\n", ciudadAux);

        while (vecCiu[x] == ciudadAux)
        {
            subtotal += vecVent[x];
            printf("Venta: %i\n", vecVent[x]);
            x++;
        }

        printf("Total ciudad %i: %i\n\n", ciudadAux, subtotal);

        total += subtotal;
        subtotal = 0;
    }


    printf("\nTotal final: %i\n", total);

    getchar();
    return 0;
}
