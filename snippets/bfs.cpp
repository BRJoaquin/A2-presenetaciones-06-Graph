void BFS(int from)
{
    bool *in_queue = new bool[V + 1]();
    for (int i = 0; i <= V; i++)
    {
        in_queue[i] = false;
    }
    Queue<Tuple<int, int>> *queue = new QueueImp<Tuple<int, int>>();
    queue->enqueue(Tuple<int, int>(from, 0));
    in_queue[from] = true;
    while (!queue->isEmpty())
    {
        Tuple<int, int> node = queue->dequeue();
        int v = node.getFirst();
        int step = node.getSecond();
        // Process the node
        Edge edge;
        Iterator<Edge> *it = adjacents(v);
        while (it->hasNext())
        {
            edge = it->next();
            int w = edge.to;
            if (!in_queue[w])
            {
                in_queue[w] = true;
                queue->enqueue(Tuple<int, int>(w, step + 1));
            }
        }
    }
    delete[] in_queue;
}