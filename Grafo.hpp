#ifndef GRAFO_HPP
#define GRAFO_HPP
#include <stdio.h>


class Grafo{

    static bool x;

    bool *v;

    int _n;
    int _m;
    int m_max;

    int f(int , int);

    friend void print(Grafo &);

  public:



      Grafo(int);

     // ~ Falta destructor

      bool &edge(int, int) ;

      int m() const;
      int n() const;

      void DeepFirstSearch(int, int, Grafo &);

};
 void print(Grafo &);

 class node{
    public:

    int _data;
    node *_siguiente;
    node *_anterior;

    node(int x):_data(x){_siguiente = NULL; _anterior = NULL;}

 };

 class bicola{

    node *frente;
    node *fin;
    int s;

public:

    bicola(){s = 0; frente = NULL; fin = NULL;}

    int *u;
    void Push(int x);
	int Pop();
	//int PopF();
	int top(node *_a);
	bool Vacia(){return s == 0 ? true : false;}
	int size(){ return s;}
	void mostrar();

 };

#endif // GRAFO_HPP
