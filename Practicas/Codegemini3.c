//Se ingresa por teclado el nombre de un producto cargado por el cliente y se debe comparar contra la base del local.
//1. Pedir el ingreso del nombre de dos productos (máximo 30 caracteres) mediante `gets().
//2. Utilizando `strlen()`, indicar cuál de los dos nombres de producto es más largo (tiene más caracteres).
//3. Utilizando `strcmp()`, verificar e informar si los dos productos ingresados son exactamente iguales o cuál de los dos es mayor alfabéticamente.
//4. Copiar mediante `strcpy()` el nombre del producto de mayor longitud a una tercera variable `productoDestacado` e imprimirlo

void largo (char producto1[30], char producto2[30])
{

    if (strlen(producto1)==strlen(producto2))
    {
        printf("el producto 1 y 2 %s y %s son iguales de largo\n", producto1, producto2);

    }
    else
    {
        if(strlen(producto1)>strlen(producto2))
        {
           printf("el producto 1 %s es mas largo\n", producto1);
        }
        else
        {
             printf("el producto 2 %s es mas largo\n", producto2);
        }
    }
}

void alfabeto (char producto1[30], char producto2[30])
{

    if (strcmp(producto1, producto2)==0)
    {
        printf("ambos son iguales alfabeticamnete\n");
    }
    else
    {
        if (strcmp(producto1, producto2)>0)
        {
             printf("el producto 2 %s es mas grande alfabeticamente\n", producto2);
        }
        else
        {
             printf("el producto 1 %s es mas grande alfabeticamente\n", producto1);
        }
    }

}

void copiarLargo (char producto1[30], char producto2[30])
{
    char productoDesta[30];

    if(strlen(producto1)>=strlen(producto2))
    {
        strcpy(productoDesta, producto1);
    }
    else
    {
       strcpy(productoDesta, producto2);

    }

   printf("el nombre de mayor longitud es %s\n", productoDesta);

}

int main()
{
    char producto1[30];
    char producto2[30];

    printf("ingresar nombre de producto: ");
    gets(producto1);
    printf("ingresar nombre de producto: ");
    gets(producto2);

    largo(producto1, producto2);
    alfabeto(producto1, producto2);
    copiarLargo(producto1, producto2);
    getchar();
    return 0;
}







