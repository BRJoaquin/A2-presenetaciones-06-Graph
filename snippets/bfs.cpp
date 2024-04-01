void Graph_BFS(Graph* g, int s)
{
    // Mark all the vertices as not visited
    bool visited[MAX_VERTICES];
    for (int i = 0; i < g->V; i++) {
        visited[i] = false;
    }
 
    // Create a queue for BFS
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue[rear++] = s;
 
    while (front != rear) {
        // Dequeue a vertex from queue and print it
        s = queue[front++];
        printf("%d ", s);
 
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (int adjacent = 0; adjacent < g->V; adjacent++) {
            if (g->adj[s][adjacent] && !visited[adjacent]) {
                visited[adjacent] = true;
                queue[rear++] = adjacent;
            }
        }
    }
}