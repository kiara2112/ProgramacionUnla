//Se tienen las siguientes declaraciones de registros:
//Definir en la main un registro de tipo triangulo.
//Codificar las funciones:
//1-Una función que retorne un registro de tipo triangulo.
//2-Impresión del registro.



struct punto {
    int x;
    int y;
};

struct triangulo {
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};

struct triangulo cargar() //no debe de ser int
{
    struct triangulo triangu;
    printf("ingresar X: ");
    scanf("%i", &triangu.punto1.x);
    printf("ingresar Y: ");
    scanf("%i", &triangu.punto1.y);
    printf("ingresar X: ");
    scanf("%i", &triangu.punto2.x);
    printf("ingresar Y: ");
    scanf("%i", &triangu.punto2.y);
    printf("ingresar X: ");
    scanf("%i", &triangu.punto3.x);
    printf("ingresar Y: ");
    scanf("%i", &triangu.punto3.y);
    return triangu;
}

void imprimir(struct triangulo triangu)
{
    printf("El triangulo 1 tiene puntos en X:%i  Y:%i\n", triangu.punto1.x, triangu.punto1.y);
    printf("El triangulo 2 tiene puntos en X:%i  Y:%i\n", triangu.punto2.x, triangu.punto2.y);
    printf("El triangulo 3 tiene puntos en X:%i  Y:%i\n", triangu.punto3.x, triangu.punto3.y);

}


int main()
{
    struct triangulo triangu; //definimos lo que mandamos
    //ingresar(triangu); si es struct cargar no debe de ir
    triangu=cargar();
    imprimir(triangu);
    getch();
    return 0;
}
