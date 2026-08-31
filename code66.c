//Mostrar el abecedario de la 'A' a la 'Z' primero en mayúsculas y luego en minúsculas. Utilizar una variable de tipo char dentro de un for.

#include<stdio.h>
#include<conio.h>

int main()
{
    char letra;

    for(letra='A';letra<='Z';letra++) //entiende el abecedario, aumenta un char las letras (aunque no haya numeros
    {
        printf("%c",letra);
        printf("-");
    }
    printf("\n\n");
    for(letra='a';letra<='z';letra++)
    {
        printf("%c",letra);
        printf("-");
    }
    getch();
    return 0;
}
