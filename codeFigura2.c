//figura 2

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
getchar();
return 0;

}
