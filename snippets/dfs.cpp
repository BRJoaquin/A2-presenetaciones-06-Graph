void DFS(int from)
{
    bool *visited = new bool[V + 1]();
    for (int i = 0; i <= V; i++)
        visited[i] = false;
    DFS_rec(from, 0, visited);
    delete[] visited;
}

void DFS_rec(int from, int step, bool *visited)
{
    visited[from] = true;
    // Process the node
    Edge edge;
    Iterator<Edge> *it = this->adjacents(from);
    while (it->hasNext())
    {
        edge = it->next();
        int w = edge.to;
        if (!visited[w])
        {
            DFS_rec(w, step + 1, each, visited);
        }
    }
}