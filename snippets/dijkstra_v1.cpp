void dijkstra(Graph* graph, int source) {
    int V = graph->getV();
    int* dist = new int[V];
    int* parent = new int[V];
    bool* visited = new bool[V];

    for (int i = 0; i < V; i++) {
        dist[i] = std::numeric_limits<int>::max();
        visited[i] = false;
        parent[i] = -1;
    }
    dist[source] = 0;

    for (int count = 0; count < V - 1; count++) {
        // Encuentra el vértice con la distancia mínima del conjunto de vértices aún no procesados.
        int minDistance = std::numeric_limits<int>::max(), minIndex;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && dist[v] <= minDistance) {
                minDistance = dist[v], minIndex = v;
            }
        }

        if (minDistance == std::numeric_limits<int>::max()) {
            break; // No hay más vértices por procesar.
        }

        // Marca el vértice elegido como visitado.
        visited[minIndex] = true;

        // Actualiza el valor de dist de los vértices adyacentes del vértice elegido.
        Iterator<Edge>* it = graph->adjacents(minIndex);
        while (it->hasNext()) {
            Edge edge = it->next();
            int v = edge.to;
            int weight = edge.weight;

            if (!visited[v] && dist[v] > dist[minIndex] + weight) {
                dist[v] = dist[minIndex] + weight;
                parent[v] = minIndex;
            }
        }
        delete it;
    }

    // TODO: procesar la información almacenada en dist (distancias mínimas desde source)
    // y parent (padres/vengo de cada nodo en el camino más corto)

    // Limpieza.
    delete[] dist;
    delete[] parent;
    delete[] visited;
}
