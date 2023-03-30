---
theme: seriph
background: https://images.unsplash.com/photo-1451187580459-43490279c0fa?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1772&q=80
# apply any windi css classes to the current slide
class: 'text-center'
# https://sli.dev/custom/highlighters.html
highlighter: shiki
lineNumbers: true
drawings:
  persist: false
css: unocss
transition: fade-out
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

- **Dirigido** ➡️ : Las aristas tienen una dirección. Ejemplo: Instagram (seguir a alguien) 

- **No dirigido** : Las aristas no tienen una dirección (es en ambas direcciones). Ejemplo: Facebook (amistad)

- **Ponderado** 🏋️‍♀️ : Las aristas tienen un peso asociado. Ejemplo: Mapa de carreteras (distancia entre ciudades)

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

Relación entre el número de aristas y el número de aristas posibles

- **Denso** : Donde la cantidad de aristas es similar al número de aristas posibles. O(A)≈O(V^2)
- **Disperso** : Donde la cantidad de aristas es muy pequeño en comparación con el número de aristas posibles. O(A)<<O(V^2)

<br>

> V = Número de vértices

<br>

> A = Número de aristas

¿Cuál es la cantidad de aristas posibles en un grafo? 🤔

<div class="abs-br m-4 flex gap-2">
  <a href="https://graph-examples.uruguayan.ninja/pages/graph-types/index.html" target="_blank" alt="GitHub"
    class="text-l icon-btn opacity-50 !border-none !hover:text-white">
    <zondicons:screen-full/>
  </a>
</div>

---

# Ciclos

Cíclico o No Cíclico

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

---
layout: two-cols
---

<template v-slot:default>

# Matriz de Adyacencia
Implementación más simple de un grafo


</template>
<template v-slot:right>

# Lista de Adyacencia
Implementación más eficiente de un grafo

</template>

---
layout: center
class: text-center
---

# Learn More

<!-- [Documentations](https://sli.dev) · [GitHub](https://github.com/slidevjs/slidev) · [Showcases](https://sli.dev/showcases.html) -->
