int INF = std::numeric_limits<int>::max();

void bellman_ford(Graph *g, int start) {
    int *distances = new int[n];
    int *parents = new int[n];
    for (int i = 0; i < n; ++i) {
        distances[i] = INF;
        parents[i] = -1;
    }
    distances[start] = 0;

    Queue<int>* queue = new QueueImp<int>();
    bool* in_queue = new bool[n]();
    for (int i = 0; i < n; ++i) in_queue[i] = false;
    queue->enqueue(start);

    while (!queue->isEmpty()) {
        int u = queue->dequeue();
        in_queue[u] = false;

        Iterator<Edge>* it = g->adjacents(u);
        while (it->hasNext()) {
            Edge edge = it->next();
            int v = edge.to;
            int weight = edge.weight;

            if (distances[u] + weight < distances[v]) {
                distances[v] = distances[u] + weight;
                parents[v] = u;
                if (!in_queue[v]) {
                    queue->enqueue(v);
                    in_queue[v] = true;
                }
            }
        }
    }

    // TODO: procesar la información almacenada en distances (distancias mínimas desde start)
    // y parents (padres/vengo de cada nodo en el camino más corto)

    delete[] distances;
    delete[] in_queue;
}