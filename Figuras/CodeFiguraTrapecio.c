//figura trapecio

int main()
{
    int f, c, n;

    printf("ingresar filas: ");
    scanf("%i", &n);

    for (f=0; f<n; f++)
    {

        for (c=0; c<n-f; c++)
        {
            printf(" ");
        }
        for (c=0; c<n*2+1; c++)
        {
            printf("x");
        }
    printf("\n");

    }

   getchar();
   return 0;
}
