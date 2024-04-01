---
theme: default
# random image from a curated Unsplash collection by Anthony
# like them? see https://unsplash.com/collections/94734566/slidev
background: https://images.unsplash.com/photo-1451187580459-43490279c0fa?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1772&q=80
title: Welcome to Slidev
# apply any unocss classes to the current slide
class: text-center
# https://sli.dev/custom/highlighters.html
highlighter: shiki
# https://sli.dev/guide/drawing
drawings:
  persist: false
# slide transition: https://sli.dev/guide/animations#slide-transitions
transition: fade-out
lineNumbers: true
# enable MDC Syntax: https://sli.dev/guide/syntax#mdc-syntax
mdc: true
---

# Grafos

<div class="abs-br m-6 flex gap-2">
  <a href="https://github.com/BRJoaquin" target="_blank" alt="GitHub"
    class="text-xl icon-btn opacity-50 !border-none !hover:text-white">
    <carbon-logo-github />
  </a>
</div>

<!--
The last comment block of each slide will be treated as slide notes. It will be visible and editable in Presenter Mode along with the slide. [Read more in the docs](https://sli.dev/guide/syntax.html#notes)
-->

---
preload: false
layout: iframe-right
url: https://graph-examples.uruguayan.ninja/pages/nested/index.html
---

# Grafos

Tipo abstracto de dato

Consiste en un conjunto de **nodos/vertices** y **aristas** que definen relaciones entre los nodos.

- **Nodo/Vertice** : Representa un objeto o entidad.
- **Arista** : Representa una relación entre dos nodos.

Vamos a denotar $V$ a la cantidad de nodos y $A$ a la cantidad de aristas.

---
preload: false
layout: iframe-right
url: https://graph-examples.uruguayan.ninja/pages/graph-types/index.html
---

# Grafos

Primeras clasificaciones

Las dos propiedades básicas de un grafo están dadas por la características de sus aristas:

- ➡️ Ordenación (direccionalidad)
- #️⃣ Ponderación 

---
preload: false
layout: iframe-right
url: https://graph-examples.uruguayan.ninja/pages/graph-types/index.html
---

# Ordenación y Ponderación

4 combinaciones posibles

- **Dirigido** ➡️ : Las aristas tienen una dirección. Ejemplo: Instagram (seguir a alguien) 

- **No dirigido** : Las aristas no tienen una dirección (es en ambas direcciones). Ejemplo: Facebook (amistad)

- **Ponderado** 🏋️‍♀️ : Las aristas tienen un peso asociado. Ejemplo: Mapa de carreteras (distancia entre ciudades)

- **No ponderado** : Las aristas no tienen un peso asociado. Ejemplo: Arbol genealógico (parentesco)


<footer class="absolute bottom-0 left-0 right-0 p-2">
    <div class="text-center text-sm text-white">
        <a href="https://graph-examples.uruguayan.ninja/pages/graph-types/index.html" target="_blank" class="underline">Ver más ejemplos</a>
    </div>
</footer>

---
preload: false
layout: iframe-right
url: https://graph-examples.uruguayan.ninja/pages/density/index.html
---

# Densidad

Relación entre el número de aristas y el número de aristas posibles

- **Denso** : Donde la cantidad de aristas es similar al número de aristas posibles. O(A)≈O(V^2)
- **Disperso** : Donde la cantidad de aristas es muy pequeño en comparación con el número de aristas posibles. O(A)<<O(V^2)



¿Cuál es la cantidad de aristas posibles en un grafo? 🤔 

- En un grafo no dirigido: <v-click> $\frac{V(V-1)}{2}$ || $\frac{V(V+1)}{2}$ </v-click>
- En un grafo dirigido: <v-click> $V(V-1)$ || $V^2$ </v-click>


---
preload: false
layout: iframe-right
url: https://graph-examples.uruguayan.ninja/pages/density/index.html
---

# Densidad

La densidad de un grafo es un indicador de la cantidad de información que puede contener.

Jugará un papel importante en el orden de los algoritmos 🕓 que se apliquen sobre el grafo y sobre todo
**cómo se implementan** 👩‍💻.

- **Disperso** = implementación con listas de adyacencia
- **Denso** = implementación con matrices de adyacencia

**Nota**: cabe destacar que en la práctica son muy pocos los grafos que son densos. Por qué?

---

# Ciclos

Cíclico o Acíclico

Un grafo cíclico contiene al menos un ciclo, es decir un camino que comienza y termina en el mismo nodo.

```mermaid
graph LR;
A --> B;
B --> C;
C --> D;
D --> E;
D --> A;
```

Un grafo no cíclico no contiene ciclos.

```mermaid
graph LR;
A --> B;
B --> C;
C --> D;
D --> E;
A --> D;
```

<br>

> Un camino es un conjunto de aristas que conectan un nodo con otro. (no puede haber aristas repetidas)

<br>

> Tener en cuenta: un grafo no dirigido no necesariamente es cíclico.


---

# Conexidad
Cómo se disponen los nodos de un grafo

## Grafo no dirigido

- Conexo: Existe un camino entre cualquier par de nodos.
- No conexo: Existen nodos que no están conectados.

<br>

## Grafo dirigido

- Fuertemente conexo: Existe un camino entre cualquier par de nodos.
- Débilmente conexo: Existe un camino entre cualquier par de nodos si se considera el grafo dirigido subyacente.
- No conexo: Existen nodos que no están conectados, independientemente de la dirección de las aristas.

---

```mermaid
graph LR;
    A <--> B;
    B <--> C;
    C <--> D;
    D <--> A;
    A <--> C;
    B <--> D;
```

---

```mermaid
graph LR;
    A <--> B;
    C <--> D;
    A <--> F;
```

---

```mermaid
graph TD;
    A --> B;
    B --> C;
    C --> D;
    D --> A;
    A --> C;
    B --> D;
```

---

```mermaid
graph TD;
    A --> B;
    C --> D;
    A --> F;
    D --> G;
    G --> C;
```

---

# Resumen de clasificaciones
El primer paso es identificar las características del grafo

Hasta ahora podemos clasificar un grafo por:
- **Ordenación** (dirigido o no dirigido)
- **Ponderación** (ponderado o no ponderado)
- **Densidad** (denso o disperso)
- **Ciclos** (cíclico o acíclico)
- **Conexidad** (conexo o no conexo)


---
layout: section
---

# Implementaciones
Lista de Adyacencia vs Matriz de Adyacencia

Tenemos dos formas de representar un grafo en nuestro programa. 
<v-click> Cada una tiene sus <span v-mark="{at:1, color: 'blue', type: 'highlight', animationDuration: 4000 }"> ventajas y desventajas.</span> </v-click>

---
layout: two-cols
---

<template v-slot:default>

# Lista de Adyacencia
Implementación eficiente de un grafo

Una lista de adyacencia es un array de listas, cada celda representa un nodo y cada lista contiene los nodos adyacentes a desde ese nodo.

- Cada lista contiene los nodos adyacentes al nodo correspondiente (dado por el índice del array).
- Es una forma eficiente (memoria) de representar grafos dispersos ya que **no se almacenan aristas que no existen**.

<br>

> En caso de ser no dirigido, una arista se representa dos veces.

</template>
<template v-slot:right>

# Matriz de Adyacencia
Implementación simple de un grafo

Una matriz de adyacencia es una matriz cuadrada utilizada para representar un grafo. 

- Cada elemento de la matriz representa la arista (o ausencia) entre dos nodos (origen y destino).
- El valor del elemento indica si hay un arista entre esos nodos y en caso de ser ponderado, el peso de la arista.

<br>

> En caso de ser no dirigido, la matriz es simétrica.

</template>

---

# Matriz y Lista de Adyacencia

<div class="container flex justify-center items-center">
  <img src="/listvsma.png" class="w-130">
</div>


---

# Lista de Adyacencia
Operaciones básicas

- **Inserción de aristas**: Agregar un nodo a la lista de adyacencia de otro nodo.
- **Eliminación de aristas**: Eliminar un nodo de la lista de adyacencia de otro nodo.
- **Búsqueda de adyacencia**: Para saber si existe la arista A->B, se busca en la lista de adyacencia de A que contenga a B.

## Preguntas

- ¿Qué contiene cada nodo de la lista de adyacencia?
- ¿Cómo se representa un grafo no dirigido?

<div class="abs-br m-6 flex gap-2">
  <img src="/lista_adyacencia.png" class="w-100">
</div>

---

<<< @/snippets/lista_ady.cpp {all|5-10|13-15|17-19|26-30|all}{maxHeight:'500px'}

---

# Matriz de Adyacencia
Operaciones básicas

- **Inserción de aristas**: Cambiar el valor de la matriz en la posición correspondiente.
- **Eliminación de aristas**: Cambiar el valor de la matriz en la posición correspondiente.
- **Búsqueda de adyacencia**: Para saber si existe la arista A->B, se busca en la matriz en la posición A,B.

## Preguntas
- ¿Qué representa el valor de la matriz?
    - ¿Qué valor se le asigna si no hay arista?
    - ¿Qué valor se le asigna si hay arista?
    - ¿Qué valor se le asigna si es ponderado?
    - ¿Qué valor se le asigna si es no ponderado?  
- ¿Cómo se representa un grafo no dirigido?

<div class="abs-br m-6 flex gap-2">
  <img src="/matriz_adyacencia.png" class="w-70">
</div>

---

<<< @/snippets/matriz_ady.cpp {all|4|7-9|11-20|31-35|all}{maxHeight:'500px'}

---


| Característica         | Lista de adyacencia     | Matriz de adyacencia   |
|------------------------|-------------------------|------------------------|
| Espacio                | $O(V + A)$              | $O(V^2)$               |
| Búsqueda de adyacencia | $O(degree_{out}(V))$    | $O(V)$                 |
| Inserción de aristas   | $O(1)$*                 | $O(1)$                 |
| Eliminación de aristas | $O(degree_{out}(V))$    | $O(1)$                 |
| Eficiencia             | <span v-mark.circle.red>Mejor para grafos dispersos</span> | <span v-mark.circle.blue>Mejor para grafos densos</span> |

Donde:
- $degree_{out}$ es el grado de salida de un nodo.

<footer class="absolute bottom-0 left-0 right-0 p-2">
    (*) Asumiendo que no hay aristas repetidas.
</footer>

---

# Recorridas
BFS & DFS

Las recorridas son un algoritmo que permite recorrer un grafo de manera ordenada.
Existen dos tipos de recorridas:
- **BFS** (Breadth First Search o búsqueda en anchura) 
- **DFS** (Depth First Search o búsqueda en profundidad)

<br>
<div class="container flex justify-center items-center">
  <img src="/dfs-vs-bfs.gif" class="w-120">
</div>
---

# BFS
Búsqueda en anchura

Explora un grafo visitando primero todos los vecinos de un nodo inicial antes de pasar a sus vecinos de segundo nivel y así sucesivamente.

<br>
<div class="container flex justify-center items-center">
  <img src="/bfs.gif" class="w-50">
</div>

<br>

> Es importante destacar que el algoritmo no tiene en cuenta el orden de los vecinos.

---

# BFS
Pseudocódigo

```
function BFS(start, graph)
  create a queue Q
  mark start as visited
  enqueue start into Q

  while Q is not empty
    dequeue a node N from Q
    process N

    for each neighbor of N
      if neighbor is not visited
        mark neighbor as visited
        enqueue neighbor into Q
  end while
end function
```
<br>

> Qué orden de complejidad tiene este algoritmo? 🤔

<br>

> Visualización: [https://www.cs.usfca.edu/~galles/visualization/BFS.html](https://www.cs.usfca.edu/~galles/visualization/BFS.html)

---

# BFS
Código

<<< @/snippets/bfs.cpp {all|1|4-7|10-11|14-15|17|19|20|25|26|27-28|all}{maxHeight:'400px'}

---

# BFS
Usos

- Para encontrar el camino más corto entre dos nodos (no ponderado).
- Busqueda de los K vecinos más cercanos.
- Para detectar si un grafo es bipartito.
- Para detectar si un grafo no dirigido es conexo.
- Detectar la cantidad de componentes conexos de un grafo no dirigido.

---

# DFS
Búsqueda en profundidad

Explora un grafo visitando un nodo inicial y luego yendo lo más profundo posible a lo largo de cada rama antes de retroceder. DFS puede no encontrar el camino más corto, pero es útil para explorar estructuras de datos más complejas y detectar ciclos.

<br>
<div class="container flex justify-center items-center">
  <img src="/dfs.gif" class="w-50">
</div>

<br>

> Es importante destacar que el algoritmo no tiene en cuenta el orden de los vecinos.

---

# DFS
Pseudocódigo

```
function DFS(start, graph)
  mark start as visited
  process start

  for each neighbor of start
    if neighbor is not visited
      call DFS(neighbor, graph)
    end if
  end for
end function
```
<br>

> Qué orden de complejidad tiene este algoritmo? 🤔

<br>

> Visualización: [https://www.cs.usfca.edu/~galles/visualization/DFS.html](https://www.cs.usfca.edu/~galles/visualization/DFS.html)

---

# DFS
Código

```cpp {all|5|6|10-11|12-13|all} {maxHeight:'400px'}
void Graph::DFS(int v)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
```

---

# DFS
Usos

- Para detectar ciclos en un grafo.
- Para detectar componentes fuertemente conexas en un grafo dirigido. [Algoritmo de Kosaraju](https://www.geeksforgeeks.org/strongly-connected-components/).
- Para detectar si un grafo no dirigido es conexo.
- Detectar la cantidad de componentes conexos de un grafo no dirigido.

---

# Orden topológico
Qué es un orden topológico?

Un ordenamiento topológico de un grafo dirigido es **una** secuencia lineal de sus vértices.

- Es útil para resolver problemas que involucran dependencias entre tareas.
- Solo es posible si el grafo es un DAG (Directed Acyclic Graph).

<br>
<div class="container flex justify-center items-center">
  <img src="/ot.png" class="w-130">
</div>
<br>

> Si el grafo tiene ciclos, no existe un orden topológico.

---

# Orden topológico
Pseudocódigo

- Encuentra nodos sin aristas entrantes, añádelos a conjunto S.
- Mientras S no esté vacío:
    - Elije un nodo N de S, añádelo a lista L.
    - Elimina aristas de N a vecinos, añade vecinos sin aristas entrantes a S.
- Si todas las aristas eliminadas, L es el orden topológico.

<br>

> Indegree: número de aristas entrantes a un nodo.

<br>

> Visualización: https://www.cs.usfca.edu/~galles/visualization/TopoSortIndegree.html

---

# Orden topológico
Algoritmo de Kahn

```cpp {all|7-25|27-36|40|46|52-57|61-64|67|72|78|82-84|91-92|95-96|78|102|108-110|all} {maxHeight:'400px'}
// A C++ program to print topological
// sorting of a graph using indegrees.
#include <bits/stdc++.h>
using namespace std;
 
// Class to represent a graph
class Graph {
    // No. of vertices'
    int V;
 
    // Pointer to an array containing
    // adjacency listsList
    list<int>* adj;
 
public:
    // Constructor
    Graph(int V);
 
    // Function to add an edge to graph
    void addEdge(int u, int v);
 
    // prints a Topological Sort of
    // the complete graph
    void topologicalSort();
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}
 
// The function to do
// Topological Sort.
void Graph::topologicalSort()
{
    // Create a vector to store
    // indegrees of all
    // vertices. Initialize all
    // indegrees as 0.
    vector<int> in_degree(V, 0);
 
    // Traverse adjacency lists
    // to fill indegrees of
    // vertices.  This step
    // takes O(V+E) time
    for (int u = 0; u < V; u++) {
        list<int>::iterator itr;
        for (itr = adj[u].begin();
             itr != adj[u].end(); itr++)
            in_degree[*itr]++;
    }
 
    // Create an queue and enqueue
    // all vertices with indegree 0
    queue<int> q;
    for (int i = 0; i < V; i++)
        if (in_degree[i] == 0)
            q.push(i);
 
    // Initialize count of visited vertices
    int cnt = 0;
 
    // Create a vector to store
    // result (A topological
    // ordering of the vertices)
    vector<int> top_order;
 
    // One by one dequeue vertices
    // from queue and enqueue
    // adjacents if indegree of
    // adjacent becomes 0
    while (!q.empty()) {
        // Extract front of queue
        // (or perform dequeue)
        // and add it to topological order
        int u = q.front();
        q.pop();
        top_order.push_back(u);
 
        // Iterate through all its
        // neighbouring nodes
        // of dequeued node u and
        // decrease their in-degree
        // by 1
        list<int>::iterator itr;
        for (itr = adj[u].begin(); itr != adj[u].end(); itr++)
            // If in-degree becomes zero,
            // add it to queue
            if (--in_degree[*itr] == 0)
                q.push(*itr);
 
        cnt++;
    }
 
    // Check if there was a cycle
    if (cnt != V) {
        cout << "There exists a cycle in the graph\n";
        return;
    }
 
    // Print topological order
    for (int i = 0; i < top_order.size(); i++)
        cout << top_order[i] << " ";
    cout << endl;
}
 
// Driver program to test above functions
int main()
{
    // Create a graph given in the
    // above diagram
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
 
    cout << "Following is a Topological Sort of\n";
    g.topologicalSort();
 
    return 0;
}
```

--- 
layout: center
class: text-center
---

# Caminos más cortos

---

# Caminos más cortos
Qué es un camino más corto?

- El problema de los caminos más cortos es encontrar el camino más corto (peso) entre dos vértices en un grafo o entre todos los pares de vértices.
- Para grafos no ponderados, el problema de los caminos más cortos es equivalente al problema de la búsqueda en profundidad o en anchura (BFS). Se puede resolver en tiempo lineal.

<br>
<div class="container flex justify-center items-center">
  <img src="/91KjB.png" class="w-70">
</div>

---

# Edsger W. Dijkstra
Científico de la computación holandés

- Conocido por su trabajo en el diseño de algoritmos y estructuras de datos. 
- Ganador del Premio Turing en 1972.
- Dijkstra escribió más de 1.300 cartas llamadas "Manuscritos de EWD" a mano, que compartió con colegas y estudiantes.

---
layout: quote
---

# EWD 898
"La pregunta de si las máquinas pueden pensar es tan relevante como la pregunta de si los submarinos pueden nadar."

# EWD 936
"No es que no confíe en las máquinas, es que no confío en el hombre que usa las máquinas."

<br>
<div class="container flex justify-center items-center">
  <img src="/dijkstra.jpg" class="w-70">
</div>

---

# Algoritmo de Dijkstra
Camino más corto desde un vértice a todos los demás

- El algoritmo de Dijkstra es un algoritmo de búsqueda de caminos más cortos en grafos ponderados.
- Tiene un tiempo de ejecución de $O((|E| + |V|) log |V|)$ con una implementación de cola de prioridad (heap binario).

<br>

> Nota: El algoritmo de Dijkstra no funciona con grafos dirigidos con aristas de peso negativo.

---

# Algoritmo de Dijkstra
Idea general

Dijkstra es un algoritmo para encontrar el camino más corto en un grafo ponderado y dirigido.

1. Inicializa distancias y visitados. Distancia de origen a origen es 0, y a todos los demás es infinito. Ningún nodo está visitado.
2. Selecciona el nodo no visitado con la menor distancia.
3. Actualiza distancias de nodos adyacentes.
4. Marca el nodo como visitado.
5. Repite (desde el punto 2) hasta que todos los nodos estén visitados.

<br>

> Visualización: https://www.cs.usfca.edu/~galles/visualization/Dijkstra.html

--- 

# Algoritmo de Dijkstra
Código

```cpp {all|2-3|5-6|8|9-11|13|14|16|17-18|20|21|22-23|all} {maxHeight:'400px'}
void dijkstra(int start, int n) {
    for (int i = 0; i < n; i++) distances[i] = INF;
    distances[start] = 0;

    PriorityQueue pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (visited[node]) continue;
        visited[node] = true;

        for (int i = 0; i < edge_count[node]; i++) {
            int neighbor = edges[graph[node][i]].v;
            int weight = edges[graph[node][i]].w;

            int new_dist = distances[node] + weight;
            if (new_dist < distances[neighbor]) {
                distances[neighbor] = new_dist;
                pq.push({new_dist, neighbor});
            }
        }
    }
}
```

---

# Algoritmo de Dijkstra
Analisis de complejidad

En términos sencillos, el algoritmo de Dijkstra tiene dos componentes principales que contribuyen a su complejidad en tiempo:

Procesar todos los vértices ($|V|$): Dijkstra explora cada vértice del grafo una vez, seleccionando el vértice con la distancia más corta conocida desde el nodo de inicio que aún no ha sido visitado. La selección del vértice mínimo puede implementarse usando una estructura de datos como el heap binario, que puede hacer esta operación en tiempo logarítmico ($log |V|$). Por lo tanto, esta parte de la complejidad en tiempo es $O(|V| log |V|)$. ``Basicamente vaciar el heap``

Procesar todas las aristas ($|E|$): Para cada vértice seleccionado, el algoritmo de Dijkstra actualiza las distancias de los vértices adyacentes (vecinos) si se encuentra un camino más corto. En el peor de los casos, podría haber que procesar todas las aristas del grafo. Esta parte de la complejidad en tiempo es $O(|E|)$ * el tiempo de actualizar la prioridad en el heap ($log |V|$).

---

# Bellman-Ford
Camino más corto desde un vértice a todos los demás

- A diferencia del algoritmo de Dijkstra, el algoritmo de Bellman-Ford puede manejar grafos dirigidos con aristas de peso negativo.
- Con el algoritmo de Bellman-Ford, podemos encontrar el camino más corto desde un vértice a todos los demás.
- Tiene un tiempo de ejecución de $O(|V|.|E|)$.

---

# Bellman-Ford
Ideas generales

1. Inicializa distancias y visitados. Distancia de origen a origen es 0, y a todos los demás es infinito. Ningún nodo está visitado.
2. Inicializa una cola fifo con el nodo origen.
3. Mientras la cola no esté vacía, saca un nodo de la cola.
4. Para cada nodo adyacente, actualiza la distancia y de ser necesario (mejora el costo), agrega el nodo a la cola.


> El "problema" es que un nodo puede ser procesado multiples veces.

<br>

> Visualización: https://visualgo.net/en/sssp


---

# Bellman-Ford
Código

```cpp {all||all} {maxHeight:'400px'}
void bellman_ford(int start) {
    for (int i = 0; i < n; ++i) distances[i] = INF;
    distances[start] = 0;

    queue[rear++] = start;
    in_queue[start] = true;

    while (front != rear) {
        int u = queue[front++];
        in_queue[u] = false;

        for (int i = 0; i < m; ++i) {
            if (edges[i].u == u) {
                int v = edges[i].v;
                int w = edges[i].w;

                if (distances[u] != INF && distances[u] + w < distances[v]) {
                    distances[v] = distances[u] + w;

                    if (!in_queue[v]) {
                        queue[rear++] = v;
                        in_queue[v] = true;
                    }
                }
            }
        }
    }
}
```

---

# Floyd-Warshall

---
layout: center
class: text-center
---

# Learn More

<!-- [Documentations](https://sli.dev) · [GitHub](https://github.com/slidevjs/slidev) · [Showcases](https://sli.dev/showcases.html) -->
