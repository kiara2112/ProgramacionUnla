//Desarrollar una función que reciba como parámetro un caracter. La función debe mostrar un mensaje si es una vocal o no es una vocal.
//Debe funcionar tanto con mayúsculas y minúsculas.
//RESULTADO DE LA PAGINA
#include<stdio.h>
#include<conio.h>

void esVocal(char letra)
{
    if (letra=='a' || letra=='e'  || letra=='i'  || letra=='o'  || letra=='u' ||
        letra=='A' || letra=='E'  || letra=='I'  || letra=='O'  || letra=='U')
    {
        printf("El caracter %c es una vocal.\n",letra);
    }
    else
    {
        printf("El caracter %c no es una vocal.\n",letra);
    }
}


int main()
{
   char c;
   for(c='A'; c<='z'; c++)//El caracter ] no es una vocal me sale, hay signos de por medio entre las mayusculas y las minusculas
   {
       esVocal(c);
   }
   getch();
   return 0;
}
