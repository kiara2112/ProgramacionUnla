//Se tiene la siguiente declaración de registro:
//Definir tres variables de tipo país e iniciarlas por asignación con la sintaxis:
//struct pais pais1={"Argentina",40000000};
//Elaborar una función que reciba un parámetro de tipo pais y muestre por pantalla sus dos campos.
//Llamar a dicha función desde la main pasando en forma sucesiva las tres variables definidas.


struct pais {
    char nombre[40];
    int cantidadhab;
};

void imprimir(struct pais p)
{
    printf("los habitantes de %s son de %i \n", p.nombre, p.cantidadhab);
}


int main()
{
    struct pais pais1={"Argentina",40000000};
    struct pais pais2={"Japon",122000000};
    struct pais pais3={"Uruguay",3000000};
    imprimir(pais1);
    imprimir(pais2);
    imprimir(pais3);
    getch();
    return 0;
}
