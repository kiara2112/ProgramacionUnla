//1. Altas: ingresar producto, local, unidades vendidas (en diferentes vectores) hasta que se ingrese 0
//2. Mostrar como fue cargado (tal cual se ingreso, sin ordenar)
//3. Listado por local (ordenado según local)
//4. Lo mismo que el 3 pero con producto
//5. Mostrar matriz
//6. Resumen de mayores y menores cantidades (!=0)
//0. Fin


#include<stdio.h>
#include<conio.h>


int altas(int pro[20], int loc[20], int uni[20], int matriz[20][20], int x) //Recibe los 3 vectores, la matriz y la cantidad de elementos cargados actualmente (x).y si volvemos a ingresar devuelve el valor de x
{
    int produ, local, unidad;

    printf("ingresar Producto (1 a 19)(0 termina el programa): ");
    scanf("%i", &produ);

while (x<20 && produ!=0)//Bucle que se repite mientras no se supere el límite del vector (20) y el usuario no ingrese 0 para salir.
{
    pro[x]=produ;//Guarda el número de producto en la posición x del vector y cada vez que se ingresa un nuevo valor valido, se ingresa aca
    printf("ingresar Local (1 a 19): ");
    scanf("%i", &local);
    printf("ingresar Unidad: ");
    scanf("%i", &unidad);

    loc[x]=local;
    uni[x]=unidad;

    matriz[produ][local]=matriz[produ][local]+unidad;//Acumula las unidades vendidas en la celda de la matriz del producto (fila) y el local (columna).
    x++; //incrementa en 1 el contador global de registros guardados(si llega al limite en algun momento, esta zona nos avisa)

    printf("ingresar Producto (1 a 19)(0 termina el programa): ");
    scanf("%i", &produ);
}
    return x;
}

void imprimirOrden(int pro[20], int loc[20], int uni[20], int x)//Declaración de la función. Recibe los tres vectores y la cantidad de registros x
{
    printf("Orden como fue cargado\n");
    printf("Local\t Producto\t Unidad\t\n");//imprimi los encabezado de como estan ubicados
   for (int f=0; f<x; f++)
   {
        printf("%i\t %i\t \t%i\n", loc[f], pro[f], uni[f]);
   }
}

void organizar (int vector1[20], int vector2[20], int uni[20], int x)//Recibe los tres vectores (el primero es el criterio de ordenamiento que puede variar segun el pedido 3 o 4) y la cantidad de elementos en el vector uni, y la cantidad maximas de posiciones que ubica el vector
{
    int f, k;
    int aux, aux1, aux2, vecAux1[20], vecAux2[20], uniAux[20];

    for (int f=0; f<x; f++) //Bucle para copiar el contenido de los vectores originales a los auxiliares. Por si queremos regresar a ver como lo ordenamos originalmente no tengamos problemas
   {
        vecAux1[f]=vector1[f];
        vecAux2[f]=vector2[f];
        uniAux[f]=uni[f];
   }

    for (k=0; k<x-1; k++)//Bucle externo del algoritmo de la burbuja (pasa x-1 veces). Es decir n-1
    {
        for (f=0; f<x-1-k; f++)
    {
        if (vecAux1[f]>vecAux1[f+1])//Compara si el elemento actual es mayor que el siguiente.
        {

            aux=uniAux[f];
            uniAux[f]=uniAux[f+1]; //estos son los que no varian, siempre aqui vamos a cambiar las unidades
            uniAux[f+1]=aux;

            aux1=vecAux1[f];
            vecAux1[f]=vecAux1[f+1];//intercambia valores, estos seran los referentes
            vecAux1[f+1]=aux1;

            aux2=vecAux2[f];
            vecAux2[f]=vecAux2[f+1]; //este es el que sobra XD
            vecAux2[f+1]=aux2;

        }
    }
    }

    for (f=0; f<x; f++)//Bucle para imprimir la lista ya ordenada.
   {
        printf("%i\t %i\t %i\t\n", vecAux1[f], vecAux2[f], uniAux[f]);
   }
    }


void mostrarMatriz(int matriz[20][20])//Muestra una matriz de 4x4 con los valores acumulados ya que es lo pedido que sea de esa forma, pero podria ser mas grande o menor
{

    for (int f=1; f<5; f++)//Bucle para recorrer las filas desde la 1 hasta la 4.
    {
        for (int c=1; c<5; c++)
        {

            printf("%i\t", matriz[f][c]);
        }

        printf("\n");
    }
}

void mayMen (int matriz[20][20])
{
    int mayUni,menUni,localMen, localMay, produMen, produMay; //Declara las variables para almacenar los máximos, mínimos y sus respectivas ubicaciones.
    int datoReal=1;
     for (int f=0; f<20; f++) //Recorre las 20 filas de la matriz.
    {
        for (int c=0; c<20; c++)
        {
            if (matriz[f][c]!= 0)//Evalúa solo si la celda actual tiene unidades vendidas (es diferente de 0). si no lo hace no verifica el numero (ya que 0 significa que no ingresarn datos) y continua con el proximo valor
            {
                 if(datoReal==1) //Si es el primer valor distinto de cero encontrado, lo utiliza como comparador con los demas valores, esto solo se utiliza la primera vez y luego se desecha, Ya que yo no se cual el primer valor que ingresa valor
                 {
                    mayUni=matriz[f][c];
                    menUni=matriz[f][c];
                    localMen=c;
                    localMay=c;
                    produMen=f;
                    produMay=f;
                    datoReal=0; //Apaga la bandera poniéndola en 0 para no volver a entrar a este bloque.
                 }
                 if (mayUni<matriz[f][c])//Evalúa si el valor actual de la celda es mayor que el máximo guardado.
                 {
                     mayUni=matriz[f][c];
                     localMay=c;
                     produMay=f;
                 }
                 if(menUni>matriz[f][c])//Evalúa si el valor actual de la celda es menor que el mínimo guardado.
                 {
                     menUni=matriz[f][c];
                     localMen=c;
                     produMen=f;
                 }
            }
        }
    }

   printf("Unidad menor %i del local %i y producto %i\n", menUni, localMen, produMen); //muestra los valores menores y mayores
   printf("Unidad mayor %i del local %i y producto %i\n", mayUni, localMay, produMay);
}

int main()
{
    int pro[20];
    int loc[20];//declara los valores a ingresar
    int uni[20];
    int x=0; //comienza el contador en 0 y done se va a retornar todo los valores
    int matriz[20][20]; //matriz donde vamos a ingresar filas locales y columas productos
    int valor;

    for (int f = 0; f < 20; f++) //comenzamos la matriz con todo valor 0 para no encontrarnos con basura, ya que casilleros van a quedar vacios
    {
        for (int c = 0; c < 20; c++)
        {
            matriz[f][c] = 0;
        }
    }

    do{//: Inicia la estructura repetitiva para mostrar el menú al menos una vez. por eso utilizamos un do while, Ya que si la persona quiere salir del programa, con poner 0 ya lo haria y no abria problema

    //preguntamos que quiere hacer la persona con un
    printf("1. ingresar datos\n");
    printf("2. Mostrar sin orden\n");
    printf("3. Ordenado por local\n");
    printf("4. Ordenado por producto\n");
    printf("5. Matriz\n");
    printf("6. Mayores y menores de Unidades\n");
    printf("0. Fin\n");

    scanf("%i", &valor);
    switch(valor){//Evalúa el número ingresado en valor para ejecutar la opción correspondiente.

    case 1:x=altas(pro,loc,uni, matriz, x); //Opción 1: Llama a la función cargar y actualiza la cantidad de datos x, es el unico obligatorio que no necesita un if
            break;
    case 2:if(x > 0)
            imprimirOrden(pro, loc, uni, x); //Muestra la lista en orden de carga solo si hay datos cargados
            else
            printf("No hay datos cargados.\n");
            break;
    case 3: if(x > 0)
            {
            printf("por local:\n"); //si hay datos ingresdos, expresa que dependiendo que se van a ordenar y cual van hacer
            printf("local  producto unidad\n");
            organizar(loc, pro, uni, x);
            }
            else
            printf("No hay datos cargados.\n");
            break;
    case 4: if(x > 0)
            {
            printf("por producto:\n"); //igual que el 3, se va hacer este
            printf("producto  local  unidad\n");
            organizar(pro, loc, uni, x);
            }
            else
            printf("No hay datos cargados.\n");
            break;
    case 5: if(x > 0)
            mostrarMatriz(matriz); //se mostrara solo las 4 primeras posiciones de la matriz (acumulativa)
            else
            printf("No hay datos cargados.\n");
            break;
    case 6: if(x > 0)
            mayMen(matriz); //mostrata
            else
            printf("No hay datos cargados.\n");
            break;
    }


    }while(valor!=0); //repite hasta que el valor que ingresamos sea 0

    getch();
    return 0;
}
