# Day 31 – Intro to Graph Theory (Terminology & Representation)

Today you’ll learn the basic **language of graphs** and how to **represent** them efficiently in C++.  
Graphs model relationships (roads between cities, friendships, dependencies) and are central to USACO Silver+.

---

## 📌 What You'll Learn

- Core terms: **vertex (node)**, **edge**, **degree**, **path**, **cycle**
- **Directed vs. undirected**, **weighted vs. unweighted**
- How to store graphs: **adjacency list** vs. **adjacency matrix**
- I/O formats commonly used in USACO problems

---

## 🧠 Key Terminology

- **Vertex / Node (v):** a point in the graph (0..n-1 or 1..n)
- **Edge (u–v):** connection between two vertices
- **Degree:** number of edges touching a node (in-degree/out-degree for directed)
- **Path:** sequence of edges connecting vertices
- **Cycle:** path that starts and ends at the same vertex (length ≥ 1)
- **Connected component (undirected):** a maximal set of vertices where each can reach the others
- **Tree:** a connected, acyclic, undirected graph with **n-1** edges

---

## 🧰 Representations

### 1) Adjacency List (preferred for sparse graphs)
- `vector<vector<int>> g(n);`
- For each edge `u v` (0-based):  
  ```cpp
  g[u].push_back(v);
  g[v].push_back(u); // omit for directed
  ```
- **Space:** O(n + m)  
- **Iterate neighbors:** fast

### 2) Adjacency Matrix (dense graphs or tiny n)
- `vector<vector<int>> M(n, vector<int>(n, 0));`
- Set `M[u][v] = 1` (and `M[v][u] = 1` if undirected)
- **Space:** O(n²)  
- **Edge check:** O(1)

> In USACO/Silver, input sizes are large → **use adjacency lists**.

---

## 🔢 Typical Input Formats

- **Undirected, unweighted:**
  ```
  n m
  u1 v1
  ...
  um vm
  ```
- **Directed:** don’t add the back edge
- **Weighted:** add a third number `w` for each edge

Indexing varies: many problems use **1-based**. Convert to **0-based** for code reliability.

---

## ⏱️ Complexity Notes

- Building adjacency list: **O(n + m)**
- Iterating all edges via lists: **O(n + m)**
- Matrix memory/time: **O(n²)** (costly when n ≳ 5000)

---

## 💡 Example

See [`example.cpp`](./example.cpp) to:
- Read an **undirected** graph
- Build an **adjacency list**
- Compute **degrees**
- Count **connected components** with **DFS**

---

## 🏋️‍♂️ Self-Test Problem

Open [`problem.md`](./problem.md) and implement a solution that **counts connected components** of an undirected graph.
