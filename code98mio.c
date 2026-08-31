//Elaborar una función que reciba tres enteros y nos retorne el valor promedio de los mismos

float retornaPromedio(int part1, int part2, int part3)
{
    float promo;
    promo=(part1+part2+part3)/3.0; //me retorna un numero entero... no se como solucionarlo porque quiero que me ponga el numero con coma, pero si es con coma me devuelve 0
    //LO SOLUCIONE, puse 3.0 para que entienda que quiero que me retorne un numero con coma si es la situacion (ya que abajo es float, me deberia de dar)
    return (promo);

}
int main()
{
    int num1, num2, num3;
    float promedio;
    printf("ingrese el PRIMER valor: ");
    scanf("%i", &num1);
    printf("ingrese el SEGUNDO valor: ");
    scanf("%i", &num2);
    printf("ingrese el TERCERO valor: ");
    scanf("%i", &num3);

    //retornaPromedio(num1, num2, num3); porque no es necesario? EXPLICACION(porque en la proxima linea mandamos y recuperamos los valores, no es necesario hacerlo 2 veces)
    promedio=retornaPromedio(num1,num2,num3);

    printf("el promedio de los numeros es %0.2f", promedio); //%0.2f son los numeros que quiero despues de la coma (en este caso 2, pero pueden ser 3 o 1)

    getchar();
    return 0;
}
