

#include<stdio.h>

int main()
{
    int f, n, j;

    printf("filas de x: ");
    scanf("%i", &n);

        for (f=0; f<=n; f++)
        {
            for (j=0; j<f; j++)
            {

                printf(" ");

            }
                printf("x\n");

        }

        for (f=n; f>=1; f--) //el
        {
            for (j=0; j<f-1; j++)//ese -1 sirve que se forme la punta de la flecha mandando todo un paso para atras
            {

                printf(" ");

            }
                printf("x\n");

        }

    getchar();
    return 0;

}
