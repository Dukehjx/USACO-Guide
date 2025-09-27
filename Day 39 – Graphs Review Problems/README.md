# Day 39 – Graphs Review Problems

Today is a **review day for graph algorithms** you’ve learned this week:
- Graph representation (adjacency lists)
- DFS & BFS
- Connected components
- Bipartite check
- Topological sorting (DAGs)
- Shortest path on unweighted graphs (BFS)

You’ll solve a consolidated practice problem and use the example as a **graph toolbox**.

---

## 📌 What You'll Do
- Rebuild core graph routines quickly from memory
- Choose DFS or BFS appropriately
- Watch for directed vs. undirected differences
- Double-check 0/1-based indexing and input format

---

## ✅ Checklist Before You Code
- [ ] Is the graph **directed or undirected**?
- [ ] Are nodes labeled **1..N** or **0..N-1**?
- [ ] Are there **multiple test cases**?
- [ ] Any **disconnected** nodes? Handle them in loops!
- [ ] For bipartite: store colors in {-1, 0, 1} and check conflicts
- [ ] For topo: compute in-degrees and use a queue (Kahn’s algorithm)

---

## 🧰 Patterns to Recall
- **Connected Components (undirected):** loop over all nodes; if unvisited → run DFS/BFS to collect a component
- **Bipartite Check:** BFS/DFS color the graph; conflict if you see same color on an edge
- **Shortest Path (unweighted):** BFS from source; dist[nei] = dist[cur] + 1
- **Topological Sort (DAG):** in-degrees + queue; detect cycle if not all nodes appear

---

## 💡 Example
See [`example.cpp`](./example.cpp) for a compact “review” program that:
- Builds an undirected graph
- Computes **connected component sizes**
- Checks if the graph is **bipartite**

---

## 🏋️‍♂️ Self-Test Problem
Try the task in [`problem.md`](./problem.md). It combines **components** and **bipartite** in one go—perfect Bronze→Silver bridge.
