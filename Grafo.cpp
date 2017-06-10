#include "Grafo.hpp"
#include "bicola"

    bool Grafo::x = false;

      int Grafo::f(int u, int v){
      if(u== v)return 0;

      if(v>u){

        int aux = v;
        v =u;
        u = aux;

      }

      return (((u -1) * (u -2))/ 2) + v+1;

      }


      Grafo::Grafo(int n): _n(n){
        // _n = n;
        m_max = _n * (_n-1)/2;

        v = new bool[m_max];

       for(int i = 0; i < m_max; i++) v[i]= false;

      }


      bool &Grafo::edge(int i, int j){//devuelve una referencia
        if(i < 1 || i > _n || j < 1 || j > _n || j == i){

           printf("[Grafo]: bad index \n");
            return x;
        }
        return v[f(i, j)];
      }


      int Grafo::n()const{return _n;}
      int Grafo::m() const{return _m;}


        void print(Grafo &g){

            for(int i = 2; i <= g._n; i++){
                for(int j = 1; j < i; j++){
                    printf("[%i:%i] %i\n", i, j, g.v[g.f(i,j)]);
                    //printf("[%i:%i] %i\n", i, j, g.edge(i,j));
                }

            }
            }

    void DeepFirstSearch(int source, int targe, Grafo &g){

        bicola::Push(source);
        int j = 0;
        int m[m_max];

        while(!bicola::Vacia()){
            u = bicola::frente;
            m[j] = u->_data;
            j++;
            for(int i = 1; i < _n; i++){
                if(g.v[source, i]){
                    bicola::Push(i);
                    if( i == targe){
                        bicola::mostrar();
                    }
                }
                bicola::Pop();
            }

        }

        return bicola::mostrar();
}


void bicola::Push(int x)
{
	node *nuevo = new node(x);

	if(Vacia())
	{
		Frente = nuevo;
		Final = nuevo;
		s++;
	}

	else
	{
		Final->_siguiente = nuevo;
		Final = nuevo;
		s++;
	}
}

int bicola::Pop()
{
	int valor;

	if(Frente == NULL) return -1;

	if(Frente == Final)
	{
		valor = Frente->_data;
		Final = NULL;
		delete Frente;
		Frente = NULL;
		--s;
		return valor;
	}

	node *actual = Frente;
	while(actual->_siguiente != Final) actual = actual->_siguiente;

	valor = Final->_data;
	actual->_siguiente = NULL;
	delete Final;
	Final = actual;
	--s;
	return valor;
}

int bicola::top(node *_a)
{
	return _a->_data;
}

void bicola::::mostrar()
{
	node *actual = Frente;
	while(actual)
	{
		printf("%i ", actual->_data);
		actual = actual->_siguiente;
	}
	puts("");
}

/*#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int V;	// #'s of vertices
    list<int> *adj;	// Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // Used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS(int v);    // DFS traversal of the vertices reachable from v
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v list.
}

void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";

 //	cout << "visited";

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

void Graph::DFS(int v)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 1; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited);
}

/*
	- Just for reference
void print(graph &g)
{
	for (int i = 2; i < ; i++) {
		g.v[i] = false;

		for (int j = 1; j < i; j++) {
			printf("[%i, %i] %i\n", i, j, g.v[g.f(i,j)]);
		}
	}
}

int main(int argc, const char * argv[])
{
    Graph g(8);
//	cout << "static order: 8\n";

	g.addEdge(1, 3); // reference to the function
	g.addEdge(1, 6);
	g.addEdge(2, 3);
	g.addEdge(2, 4);
	g.addEdge(2, 5);
	g.addEdge(5, 3);
	g.addEdge(4, 5);
	g.addEdge(4, 6);
	g.addEdge(6, 5);

	cout << "DFS()\n";

//	cout << "starting from vertice 5\n";
//    g.DFS(5);
//	cout << "\n";
//	cout << "starting from vertice 3\n";
//	g.DFS(3);
//	cout << "\n";
//	cout << "starting from vertice 1\n";
//	g.DFS(1);
//	cout << endl;
	cout << "starting from vertice 2 (target: 6)\n";
	g.DFS(2);
//	cout << endl;
//	cout << "starting from vertice 4\n";
//	g.DFS(4);
//	cout << endl;
//	cout << "starting from vertice 6\n";
//	g.DFS(6);
	cout << endl;

    return 0;
}*/

