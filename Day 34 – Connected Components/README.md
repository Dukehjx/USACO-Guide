# Day 34 – Connected Components

Today you’ll learn how to find **connected components** in a graph.  
A connected component (in an undirected graph) is a set of vertices where each pair is connected by some path.

---

## 📌 What You'll Learn

- What connected components are (undirected graphs)
- Graph representations: adjacency list vs. adjacency matrix
- How to count components using **DFS** or **BFS**
- How to output each component’s **size** or **members**
- Complexity considerations and common pitfalls

---

## 🧠 Key Ideas

- Use an **adjacency list** for \(N\le 2\times10^5\) and sparse edges.
- Maintain a `visited` array; for each unvisited node, start a DFS/BFS → that entire traversal is **one component**.
- Time complexity: **O(N + M)**, where N = vertices, M = edges.

---

## 🧾 Input Conventions (Typical)

- Undirected graph with `N` nodes labeled `1..N` (or `0..N-1`)
- `M` edges, each `u v` adds **two** adjacency entries (`u→v`, `v→u`).

---

## 🧱 Pitfalls

- Don’t forget to make edges **bidirectional** for undirected graphs.
- Watch 0/1-indexing carefully.
- Clear or re-init `visited` between multiple test cases.

---

## 🛠️ Variations You’ll See

- Count components only
- Print the **size** of each component
- Extract the **members** of each component
- Detect if the graph is **connected** (answer is 1 component)

---

## 💡 Example

See [`example.cpp`](./example.cpp) for:
- Reading `N, M` and edges
- Counting components with DFS (iterative to avoid deep recursion)
- Printing each component’s size

---

## 🏋️‍♂️ Self-Test Problem

Solve the task in [`problem.md`](./problem.md):  
Count components and output their sizes in **ascending order**.
