//figura

#include<stdio.h>

int main()
{
int f, n, j;

printf("filas de x: "); //cantidad de filas
scanf("%i", &n);

for (f=1; f<=n; f++) //hace un doble bucle, el primero hace el tabular
{
for (j=1; j<=f; j++) //este me agrega x
{
printf("x");

}
printf("\n");

}
getchar();
return 0;

}
