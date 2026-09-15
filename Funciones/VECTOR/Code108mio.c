//Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
//1-Realizar la carga de las notas.
//2-Mostrar el nombre del curso que obtuvo el mayor promedio general.

#include<stdio.h>
#include<conio.h>


void cargar(float curso[5])
{
    int f;

    for (f=0; f<5; f++)
    {
        printf("ingresar las notas del curso: ");
        scanf("%f", &curso[f]);
    }
}

float promedio(float curso[5])
{
    int f;
    float suma=0;
    float prome;

    for(f=0; f<5; f++)
    {
        suma=suma+curso[f];
    }

    prome=suma/5.0;
    return (prome);
}

int main()
{
   float cursoA[5];
   float cursoB[5];
   float promeA, promeB;

   printf ("ingresar valores del PRIMER curso\n");
   cargar(cursoA); //sacamos el promedio de ambos cursos
   printf ("ingresar valores del SEGUNDO curso\n");
   cargar(cursoB);
   promeA=promedio(cursoA);
   promeB=promedio(cursoB);

   if (promeA==promeB)//esta comparacion podriamos hacerlo aparte en un float, pero para no tener que volver a mandar los valores a otro lado, lo hago aca fue
   {
       printf("el promedio de ambos es el mismo con %0.2f", promeA);
   }
   else
   {
       if(promeA>promeB)
       {
           printf("el curso A tiene mejor promedio con %0.2f", promeA);
       }
       else
       {
           printf("el curso B tiene mejor promedio con %0.2f", promeB);
       }
   }
   getchar();
   return 0;
}






