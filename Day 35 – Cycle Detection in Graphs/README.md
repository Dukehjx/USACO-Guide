# Day 35 – Cycle Detection in Graphs

Today you’ll learn how to **detect cycles** in graphs—both **undirected** and **directed**.  
Cycle detection is essential for validating structures (trees vs. graphs), scheduling (DAGs), and many USACO problems.

---

## 📌 What You'll Learn

- Cycle detection in **undirected graphs** (DFS with parent tracking)
- Cycle detection in **directed graphs** (DFS with colors / recursion stack)
- When to use **Union–Find (DSU)** for undirected cycles
- How cycles relate to **DAGs** and **topological sorting**

---

## 🧭 Undirected Graphs (DFS with Parent)

Idea: During DFS, if you see an already-visited neighbor that is **not** your parent, you found a cycle.

**Complexity:** `O(N + M)`

Pseudocode:
```text
dfs(u, parent):
  mark u as visited
  for v in adj[u]:
    if not visited[v]:
      if dfs(v, u) returns true -> cycle
    else if v != parent:
      cycle found
```

**Alternative:** DSU (Union–Find). If an edge connects two nodes already in the same set, a cycle exists.

---

## 🧭 Directed Graphs (DFS with Colors)

Use three colors (or states):
- **0 = unvisited**, **1 = in recursion (gray)**, **2 = finished (black)**  
If DFS reaches a **gray** vertex, a **back edge** exists → cycle.

**Complexity:** `O(N + M)`

---

## 🔗 DAGs & Topological Sort

A **DAG** (Directed Acyclic Graph) has **no cycles**.  
If you can produce a **topological ordering**, the graph is acyclic. If Kahn’s algorithm visits fewer than `N` nodes, there’s a cycle.

---

## 🖼️ Visualization

> **[Placeholder:**
> - Undirected: triangle showing parent/child and a cross-edge
> - Directed: arrows forming a loop with a “gray” back-edge
> ]**

---

## 📝 Tips

- For **undirected** graphs: remember to pass/track the **parent** in DFS.
- For **directed** graphs: the color/recursion-stack method is standard.
- Self-loops are cycles: edge `(u -> u)`.
- Multiple components? Run DFS from every unvisited node.

---

## 💡 Example

See [`example.cpp`](./example.cpp) for a unified program that detects cycles in **either** undirected or directed graphs based on an input flag.

---

## 🏋️‍♂️ Self-Test Problem

Try the task in [`problem.md`](./problem.md)!  
You’ll be given a graph and must print whether it contains **any** cycle.
