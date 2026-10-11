 //PRUEBA Menu[[
//1- Altas
//2- Mostrar los datos como fueron cargados.
//3. Mostrar los datos ordenados por jugador
//4. Mostrar los datos ordenados por partido
//5- Mostrar matriz
//6- Precarga de datos
//0- Fin
//Los datos a cargar serán los siguientes: Partido, Jugador, Goles
//Hasta un máximo de 20 (20 es el máximo, no el total a cargar). Los datos a mostrar son en tres columnas
//La matriz deberá tener en las columnas los jugadores, en las filas los equipos y en dato deben ser los goles (totalizados si un jugador hizo mas de un gol en el partido), deberá totalizarse por jugador y por Partido
//Se recuerda que no se debe agregar nada que no fuera pedido en el enunciado.
//La carga de datos termina al cargar O en el partido. Los equipos tienen numero de 1 a 4, lo mismo que los jugadores.

#include<stdio.h>
#define MAX 20
#define JUG 5
#define PART 5

int cargar (int partido[MAX], int jugador[MAX], int goles[MAX], int matriz[PART][JUG], int total)
{
  int parti, juga;

  printf("Ingresar partido (1 a 4)(termina con 0): ");
  scanf("%i", &parti);

  while (total<20 && parti!=0)
  {
      partido[total]=parti;
      printf("ingresar jugador(1 a 4): ");
      scanf("%i", &juga);
      jugador[total]=juga;
      printf("ingresar goles");
      scanf("%i", &goles[total]);

      matriz[parti][juga]+= goles[total];
      total++;

      printf("Ingresar partido (1 a 4)(termina con 0): ");
      scanf("%i", &parti);

  }

  return total;
}

void mostrarCarga(int partido[MAX], int jugador[MAX], int goles[MAX], int total)
{
    printf("Como fue cargado:\n");
    printf("partidos jugador goles\n");
    for (int f=0; f<total; f++)
    {
        printf("%i\t %i\t %i\t\n",partido[f], jugador[f], goles[f]);
    }
}

void ordenar (int vectorPrueba[MAX], int vector2[MAX], int goles[MAX], int total)
{
    int aux1, aux2, aux3, f, k;
    int auxVector1[MAX];
    int auxVector2[MAX];
    int auxGoles[MAX];

    for (f=0; f<total; f++)
    {
        auxVector1[f]=vectorPrueba[f];
        auxVector2[f]=vector2[f];
        auxGoles[f]=goles[f];
    }

    for (k=0; k<total-1; k++)
    {
        for(f=0; f<total-1-k; f++)
        {
            if(auxVector1[f]>auxVector1[f+1])
            {

                aux1=auxVector1[f];
                auxVector1[f]=auxVector1[f+1];
                auxVector1[f+1]=aux1;

                aux2=auxVector2[f];
                auxVector2[f]=auxVector2[f+1];
                auxVector2[f+1]=aux2;

                aux3 = auxGoles[f];
                auxGoles[f] = auxGoles[f+1];
                auxGoles[f+1] = aux3;
            }
        }
    }

    for (f=0; f<total; f++)
    {
        printf("%i\t %i\t %i\t\n", auxVector1[f], auxVector2[f], auxGoles[f]);
    }
}




void mostraMatriz (int matriz[PART][JUG])
{
    for (int f=1; f<=4; f++)
    {
        for(int c=1; c<=4; c++)
        {
           printf("%i\t", matriz[f][c]);

        }
        printf("\n");
    }

}

int precarga (int matriz[PART][JUG],int partido[MAX],int jugador[MAX],int goles[MAX], int total)
{
    int partidosPrecarga[] = {1, 2, 2, 3, 4, 3, 1, 2};
    int jugadoresPrecarga[] = {2, 1, 3, 4, 2, 2, 2, 3};
    int golesPrecarga[] = {2, 1, 2, 1, 2, 1, 1, 1};

    total=8;

        for(int f = 0; f < total; f++)
    {
        partido[f] = partidosPrecarga[f];
        jugador[f] = jugadoresPrecarga[f];
        goles[f] = golesPrecarga[f];
    }
      for(int posVec = 0; posVec<total; posVec++)
    {
        matriz[ partido[posVec]][jugador[posVec] ] += goles[posVec];
    }

    return total;
}

int main()
{
    int matriz[PART][JUG];
    int partido[MAX];
    int jugador[MAX];
    int goles[MAX];
    int total=0;
    int menu;

    for (int f=1; f<PART; f++)
    {
        for (int c=1; c<JUG; c++)
        {
            matriz[f][c]=0;
        }
    }

    do{
    printf("1-Altas\n");
    printf("2-Datos como fueron cargados\n");
    printf("3-Datos ordenados por jugador\n");
    printf("4-Datos ordenados por partido\n");
    printf("5-Mostrar matriz\n");
    printf("6-Precarga de datos\n");
    printf("0-Fin\n");
    scanf("%i", &menu);

    switch(menu){
        case 1: total=cargar(partido, jugador, goles, matriz, total);
                break;
        case 2: mostrarCarga(partido, jugador, goles, total);
                break;
        case 3: printf("Ordenado por jugador\n");
                printf("jugador Partidos Goles\n");
                ordenar(jugador, partido, goles, total);
                break;
        case 4: printf("Ordenado por partido\n");
                printf("Partidos jugador Goles\n");
                ordenar(partido, jugador, goles, total);
                break;
        case 5: mostraMatriz(matriz);
                break;
        case 6: printf("precarga exitosa\n");
                total=precarga(matriz, partido, jugador, goles, total);
                break;
    }

    }while(menu!=0);
    getchar();
    return 0;

}
