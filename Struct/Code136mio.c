//Se tiene la siguiente declaración de registro:
//Definir tres variables de tipo punto y cargarlas llamando a una función que retorne valores de tipo punto.
//Finalmente crear otra función que imprima en que cuadrante se encuentra cada punto (tener en cuenta que si x>0 e y>0
//se encuentra en el primer cuadrante, si x<0 e y>0 se encuentra en el segundo cuadrante y así sucesivamente)


struct punto {
    int x;
    int y;
};

struct punto cargar()//si es un struct, no se mandan los valores, primero es el nombre del struct y una funcion que va a retornar esos valores
{
    struct punto num;
    printf("ingresar X: ");
    scanf("%i", &num.x);
    printf("ingresar Y: ");
    scanf("%i", &num.y);
    return num;
};

void Comprobar (struct punto punt)
{
    if (punt.x>0 && punt.y>0)
    {
        printf("se encuentra en el PRIMER cuadrante\n");
    }
    else
    {
        if (punt.x<0 && punt.y>0)
        {
            printf("se encuentra en el SEGUNDO cuadrante\n");
        }
        else
        {
            if (punt.x<0 && punt.y<0)
            {
                printf("se encuentra en el TERCER cuadrante\n");
            }
            else
            {
                printf("se encuentra en el CUARTO cuadrante\n");
            }
        }
    }

}


int main()
{
    struct punto cuadra1, cuadra2, cuadra3;
    cuadra1=cargar(); //aca NO retornamos num, si no el nombre que le pusimos al struct despues de punto
    cuadra2=cargar();
    cuadra3=cargar();
    printf("Los puntos %i, %i: \n", cuadra1.x, cuadra1.y);
    Comprobar(cuadra1);
    printf("Los puntos %i, %i: \n", cuadra2.x, cuadra2.y);
    Comprobar(cuadra2);
    printf("Los puntos %i, %i: \n", cuadra3.x, cuadra3.y);
    Comprobar(cuadra3);
    getchar();
    return 0;
}
