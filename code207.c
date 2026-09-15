


#include<stdio.h>
#include<conio.h>

struct coordenada {
    int x;
    int y;
};

union punto {
    int v[2]; //ambos tienen los mismos 2 valores de
    struct coordenada co;
};


int main()
{
    union punto p;
    p.co.x=10;
    p.co.y=20;
    printf("%i %i\n",p.co.x, p.co.y); //10 20
    printf("%i %i\n",p.v[0],p.v[1]);  //10 20

    getch();
    return 0;
}
