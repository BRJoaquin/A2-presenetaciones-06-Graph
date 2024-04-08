void topologicalSortKahn(Graph* graph) {
    int V = graph->getV();
    int* inDegree = new int[V](); // Inicializa todos los grados de entrada a 0

    // Calcula el grado de entrada de todos los vértices
    for (int u = 0; u < V; ++u) {
        Iterator<Edge>* it = graph->adjacents(u);
        while (it->hasNext()) {
            Edge edge = it->next();
            inDegree[edge.to]++;
        }
        delete it;
    }

    Queue<int>* queue = new QueueImp<int>();
    for (int i = 0; i < V; ++i) {
        if (inDegree[i] == 0) {
            queue->enqueue(i);
        }
    }

    // Procesa cada elemento de la cola
    while (!queue->isEmpty()) {
        int u = queue->dequeue();
        
        // Procesa el vértice

        // Reduce el grado de entrada de los vértices adyacentes
        Iterator<Edge>* it = graph->adjacents(u);
        while (it->hasNext()) {
            Edge edge = it->next();
            if (--inDegree[edge.to] == 0) {
                queue->enqueue(edge.to);
            }
        }
        delete it; // Asegúrate de liberar la memoria asignada por adjacents(u)
    }

    delete[] inDegree; // Limpia el array de inDegree
}