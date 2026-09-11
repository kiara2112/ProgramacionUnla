//figura

#include<stdio.h>

//ME RINDO
int main()
{
int f, n, j;

printf("filas de x: "); //cantidad de filas
scanf("%i", &n);

for (f=n; f>=0; f--) //hasta donde quiero, hasta 0, por eso al revez, y f-- ya que va diminusiendo en 1
{
for (j=1; j<=f; j++) //esto no cambia
{
printf("x");

}
printf("\n");

}
getchar();
return 0;

}
