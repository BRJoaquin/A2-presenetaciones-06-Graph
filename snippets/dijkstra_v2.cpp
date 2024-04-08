struct VertexDistance {
    int vertex;
    int distance;

    VertexDistance(int vertex = -1, int distance = std::numeric_limits<int>::max()) : vertex(vertex), distance(distance) {}
};

// Función comparadora para VertexDistance, necesaria para MinHeap.
int compareVertexDistance(VertexDistance a, VertexDistance b) {
    return a.distance - b.distance; // Retorna negativo si a < b, positivo si a > b
}

void dijkstra(Graph* graph, int source) {
    int V = graph->getV();
    int* dist = new int[V];
    bool* visited = new bool[V];
    int* parent = new int[V];

    for(int i = 0; i < V; i++) {
        dist[i] = std::numeric_limits<int>::max();
        visited[i] = false;
        parent[i] = -1;
    }
    dist[source] = 0;

    MinHeap<VertexDistance> queue(V, compareVertexDistance);
    queue.insert(VertexDistance(source, 0));

    while (!queue.estaVacio()) {
        VertexDistance current = queue.top();
        queue.pop();
        int u = current.vertex;

        if (visited[u]) continue; // Si ya hemos visitado este nodo, continuamos.
        visited[u] = true;

        Iterator<Edge>* it = graph->adjacents(u);
        while (it->hasNext()) {
            Edge edge = it->next();
            int v = edge.to;
            int weight = edge.weight;

            // Si se encuentra un camino más corto hacia v y no ha sido visitado
            if (!visited[v] && dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                parent[v] = u;
                queue.insert(VertexDistance(v, dist[v]));
            }
        }
        delete it; // Liberar la memoria del iterador
    }

    // TODO: procesar la información almacenada en dist (distancias mínimas desde source)
    // y parent (padres/vengo de cada nodo en el camino más corto)

    // Limpieza
    delete[] dist;
    delete[] visited;
}