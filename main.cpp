#include <cstdio>
#include <cstdlib>
#include "Grafo.hpp"

int main(){

    /*int t;
    scanf("%i", &t);

    Grafo g(t);*/
    Grafo g(6);

    g.edge(1, 3) = true;
    g.edge(1, 6) = true;
    g.edge(2, 3) = true;
    g.edge(2, 4) = true;
    g.edge(2, 5) = true;
    g.edge(5, 3) = true;
    g.edge(4, 5) = true;
    g.edge(4, 6) = true;
    g.edge(6, 5) = true;

    print(g);

    printf("comienza Busqueda a profundidad");
    g.DeepFirstSearch(1, 6, g);
	printf(" ");

    return 0;
}
/*
class Grafo{

    int num1;//fila
    int num2;//columna
    int num3;// si es cero o uno

public:

    bool Llenar(int n);




};

bool Grafo::Llenar(int i){

    for(int j = 0; j < i; i++){

    int f = ((i-1) * (i-2) / 2) +j;
    printf("%i", f);

    }



}

int main()
{
    int n, m;

    printf("n: ");
    scanf("%i", &n);
    bool *E = new bool [(n * (n-1))/2];
    m = (n * (n-1))/2;
    E = false;

//    printf("m : %i \n", m);

    for (int i = 0; i < m; i++){
        E[m].Llenar(i);
        printf("[%i] ", E[i]);
    }


    return 0;
}
*/



