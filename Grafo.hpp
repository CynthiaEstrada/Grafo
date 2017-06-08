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



};
 void print(Grafo &);

#endif // GRAFO_HPP
