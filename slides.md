---
# try also 'default' to start simple
theme: default
background: https://images.unsplash.com/photo-1451187580459-43490279c0fa?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1772&q=80
# apply any windi css classes to the current slide
class: 'text-center'
# https://sli.dev/custom/highlighters.html
highlighter: shiki
lineNumbers: true
colorSchema: 'dark'
drawings:
  persist: false
css: windicss
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

Consiste en un conjunto de **nodos** y **aristas** que definen relaciones entre los nodos.

Las dos propiedades básicas de un grafo están dadas por la características de sus aristas:

- ➡️ Ordenación (direccionalidad)
- #️⃣ Ponderación 

<div class="abs-br m-4 flex gap-2">
  <a href="https://graph-examples.uruguayan.ninja/pages/nested/index.html" target="_blank" alt="GitHub"
    class="text-l icon-btn opacity-50 !border-none !hover:text-white">
    <zondicons:screen-full/>
  </a>
</div>

---
preload: false
layout: iframe-right
url: https://graph-examples.uruguayan.ninja/pages/graph-types/index.html
---

# Ordenación y Ponderación

4 combinaciones posibles

- **Dirigido** : Las aristas tienen una dirección. Ejemplo: Instagram (seguir a alguien) 

- **No dirigido** : Las aristas no tienen una dirección (es en ambas direcciones). Ejemplo: Facebook (amistad)

- **Ponderado** : Las aristas tienen un peso asociado. Ejemplo: Mapa de carreteras (distancia entre ciudades)

- **No ponderado** : Las aristas no tienen un peso asociado. Ejemplo: Arbol genealógico (parentesco)

<div class="abs-br m-4 flex gap-2">
  <a href="https://graph-examples.uruguayan.ninja/pages/graph-types/index.html" target="_blank" alt="GitHub"
    class="text-l icon-btn opacity-50 !border-none !hover:text-white">
    <zondicons:screen-full/>
  </a>
</div>

---
preload: false
layout: iframe-right
url: https://graph-examples.uruguayan.ninja/pages/density/index.html
---

# Densidad

A >> V ?

La densidad de un grafo se define como la relación entre el número de aristas y el número máximo de aristas que podría tener el grafo.

Cuál es el máximo número de aristas que puede tener un grafo?

- **Dirigido** : A_max = V^2
- **No dirigido** : A_max = V(V+1)/2


<div class="abs-br m-4 flex gap-2">
  <a href="https://graph-examples.uruguayan.ninja/pages/density/index.html" target="_blank" alt="GitHub"
    class="text-l icon-btn opacity-50 !border-none !hover:text-white">
    <zondicons:screen-full/>
  </a>
</div>


---
preload: false
layout: iframe-right
url: https://graph-examples.uruguayan.ninja/pages/density/index.html
---

# Densidad

y su importancia

La densidad de un grafo es un indicador de la cantidad de información que puede contener.

Jugará un papel importante en el orden de los algoritmos 🕓 que se apliquen sobre el grafo y sobre todo
**cómo se implementan** 👩‍💻.

- **Disperso** = implementación con listas de adyacencia
- **Denso** = implementación con matrices de adyacencia

**Nota**: cabe destacar que en la práctica son muy pocos los grafos que son densos. Por qué?

<div class="abs-br m-4 flex gap-2">
  <a href="https://graph-examples.uruguayan.ninja/pages/density/index.html" target="_blank" alt="GitHub"
    class="text-l icon-btn opacity-50 !border-none !hover:text-white">
    <zondicons:screen-full/>
  </a>
</div>

---
layout: center
class: text-center
---

# Learn More

<!-- [Documentations](https://sli.dev) · [GitHub](https://github.com/slidevjs/slidev) · [Showcases](https://sli.dev/showcases.html) -->
