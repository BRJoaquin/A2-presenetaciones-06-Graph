#include <iostream>
#include <list>

// Estructura para representar una arista ponderada.
struct Edge {
    int dest;   // Vértice de destino
    int weight; // Peso de la arista

    Edge(int d, int w) : dest(d), weight(w) {}
};

class Graph {
    private:
        int vertices;            // Número de vértices
        std::list<Edge>* adjList; // Lista de adyacencia que almacena aristas ponderadas
    public:
        Graph(int V) : vertices(V) {
            adjList = new std::list<Edge>[V];
        }

        ~Graph() {
            delete[] adjList;
        }

        // Añadir una arista con peso al grafo
        void addEdge(int u, int v, int w) {
            adjList[u].push_back(Edge(v, w));
            // Para un grafo no dirigido, añade también la arista inversa.
            adjList[v].push_back(Edge(u, w));
        }
};
