# Day 36 – Shortest Path (Unweighted Graphs)

Today you’ll use **Breadth-First Search (BFS)** to compute **shortest paths** in unweighted graphs.  
In an unweighted graph, the shortest path is the one with the **fewest edges**—BFS finds it in **O(N + M)**.

---

## 📌 What You'll Learn
- How BFS yields shortest paths in unweighted graphs
- How to compute **distance** and **predecessor** arrays
- How to **reconstruct** one shortest path from `s` to `t`
- Grid-to-graph modeling (maze shortest path)

---

## 🧠 Key Ideas
- Initialize all distances to **-1** (unvisited). Set `dist[s] = 0`, push `s` to queue.
- Pop from queue; for each neighbor `v` of `u`, if `dist[v] == -1`, then
  - set `dist[v] = dist[u] + 1`
  - set `parent[v] = u`
  - push `v`
- When BFS finishes, `dist[v]` equals the minimum number of edges from `s` to `v` (or -1 if unreachable).

---

## 🧩 Path Reconstruction
- If `dist[t] != -1`, reconstruct by following `parent` from `t` back to `s` and **reverse** the sequence.

---

## 🖼️ Visualization
> **[Placeholder: BFS layers expanding from source node s: 0 → 1-edge frontier → 2-edge frontier …]**

---

## 💡 Example
See [`example.cpp`](./example.cpp) for a template that:
1) builds an adjacency list,  
2) runs BFS from a source `s`,  
3) prints distances, and  
4) reconstructs one shortest path to a target `t` (if it exists).

---

## 🏋️‍♂️ Self-Test Problem
Try the grid shortest path task in [`problem.md`](./problem.md) using BFS over a grid.
