void kruskal(Graph* graph) {
    int V = graph->getV();
    MinHeap<Edge> edgeHeap(V * V, compareEdges);

    Iterator<Edge>* it = graph->adjacents(u);
    while (it->hasNext()) {
        Edge edge = it->next();
        edgeHeap.push(edge);
    }
    delete it;

    DisjointSet ds(V);
    int mstWeight = 0; // Para almacenar el peso total del MST
    int edgeCount = 0; // Para contar cuántas aristas hemos añadido al MST

    // Vamos a necesitar almacenar las aristas del MST si queremos imprimir o usarlas después
    Edge* mst = new Edge[V-1]; // Almacenar las aristas del MST

    while (!edgeHeap.isEmpty() && edgeCount < V - 1) {
        Edge minEdge = edgeHeap.top();
        edgeHeap.pop();

        if (ds.find(minEdge.from) != ds.find(minEdge.to)) {
            // Si no están en el mismo conjunto, añadir esta arista al MST
            mst[edgeCount++] = minEdge;
            mstWeight += minEdge.weight;
            ds.merge(minEdge.from, minEdge.to);
        }
    }

    // TODO: procesar la información almacenada en mst (aristas del MST) y mstWeight (peso total del MST)
    
    delete[] mst; // Limpieza de la memoria del array MST
}
