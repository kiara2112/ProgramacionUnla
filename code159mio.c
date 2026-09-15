//Pedir ingresar por teclado cuantas letras tiene una palabra. Seguidamente crear un vector en forma dinámica que reserve el espacio mínimo para ingresar dicha palabra.
//Cargar por teclado la palabra, mostrarla y finalmente liberar el espacio requerido.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
   char *pa;
   int tam;
   printf("cuantas letras tiene la palabra: ");
   scanf("%i", &tam); //se guarda primero la cantidad de letras que tiene la palabra
   fflush(stdin); //se limpia
   pa=malloc((tam+1)*sizeof(char));//malloc((cant+1)*sizeof(char)) la cantidad mas 1 (que es donde el null que necesitamos para que no se desborde), y se multiplica con sizeof en char (ya que ingresan letras) y nos da la cantidad que separa
   printf("ingresar palabra: ");
   gets(pa); //ya ahora el gets ingresa normal la palabra, porque ya separo ese espacio
   printf("la palabra es %s ", pa); //muestra normal
   free(palabra);//debemos liberar
   getch();
   return 0;
}

