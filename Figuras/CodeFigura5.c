////figura cuadrado sin relleno

#include<stdio.h>

int main()
{
    int f, n, j;

printf("filas de x: "); //cantidad de filas
scanf("%i", &n);

for (f=1; f<=n; f++)
{
for (j=1; j<=n; j++)
{
if (j==1 || j==n || f==1 || f==n) //
{
printf("x");
}
else
{
printf(" ");
}

}
printf("\n");

}
getchar();
return 0;

}
