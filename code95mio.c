//Desarrollar una función que reciba como parámetro un caracter. La función debe mostrar un mensaje si es una vocal o no es una vocal.
//Debe funcionar tanto con mayúsculas y minúsculas.

void vocal(char letra)
{
    if (letra=='a' || letra=='e'  || letra=='i'  || letra=='o'  || letra=='u' || letra=='A' || letra=='E'  || letra=='I'  || letra=='O'  || letra=='U')
    {
        printf("El caracter %c es una vocal", letra);
    }
    else
    {
        printf("El caracter %c no es una vocal", letra);
    }
}

int main()
{
   char letra;
   printf("ingresar letra: ");
   scanf("%c", &letra); //no es un entero, si no un caracter, va %c
   vocal(letra);

    getch();
    return 0;

}
