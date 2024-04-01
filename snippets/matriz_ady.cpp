#include <iostream>
#include <limits>

const int INF = std::numeric_limits<int>::max(); // Representa la ausencia de una arista

class Graph {
    private:
        int vertices; // Número de vértices
        int** adjMatrix; // Matriz de adyacencia
    public:
        Graph(int V) : vertices(V) {
            // Inicializa la matriz de adyacencia
            adjMatrix = new int*[V];
            for (int i = 0; i < V; ++i) {
                adjMatrix[i] = new int[V];
                for (int j = 0; j < V; ++j) {
                    adjMatrix[i][j] =  INF;
                }
            }
        }

        ~Graph() {
            // Libera la memoria de la matriz de adyacencia
            for (int i = 0; i < vertices; ++i) {
                delete[] adjMatrix[i];
            }
            delete[] adjMatrix;
        }

        // Añade una arista al grafo
        void addEdge(int u, int v, int w) {
            adjMatrix[u][v] = w;
            // Para un grafo no dirigido, descomenta la línea siguiente:
            // adjMatrix[v][u] = w;
        }
};
