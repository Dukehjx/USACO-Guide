# Day 37 – Trees and Graph Traversals

Today you’ll build core intuition for **trees** and practice the most common **traversals** used in USACO Silver: DFS (pre/post order) and BFS (level order).  
You’ll also learn how to compute **parent**, **depth**, and **subtree size**, which are foundations for later topics like LCA, DP on trees, and centroid/diameter problems.

---

## 📌 What You'll Learn

- Tree basics and representations
- Rooting an undirected tree
- DFS traversals: **preorder** and **postorder** (general trees)
- BFS traversal: **level order**
- Computing **parent**, **depth**, **subtree size** with one DFS

---

## 🌲 What is a Tree?

- An **undirected**, **connected**, **acyclic** graph with **N nodes** and **N−1 edges**.
- No cycles; exactly one simple path between any two nodes.

**Common representations**
- **Adjacency list** (preferred): `vector<vector<int>> g(n+1);`
- Store edges both ways: `g[u].push_back(v); g[v].push_back(u);`

---

## 🌱 Rooting a Tree

Most algorithms assume a **rooted** tree (pick node 1 by default unless stated).  
During DFS, pass the **parent** to avoid going back:
```cpp
void dfs(int u, int p) {
    parent[u] = p;
    for (int v : g[u]) if (v != p) dfs(v, u);
}
```

---

## 🧭 Traversals

### DFS – Preorder & Postorder (General Trees)
- **Preorder**: visit node first, then children → often used to record entry time.
- **Postorder**: visit children first, then node → handy for **subtree DP** and computing **subtree sizes**.

### BFS – Level Order
- Use a queue to explore nodes by **increasing distance from the root**.
- Good for shortest paths on **unweighted** trees and counting nodes per level.

---

## 🧮 Depth, Parent, Subtree Size
With one DFS:
- `depth[root] = 0; depth[v] = depth[u] + 1` when going `u → v`
- `parent[v] = u`
- `subSize[u] = 1 + sum(subSize[child])`

These are **core building blocks** for many tree problems.

---

## 🖼️ Visualization

> **[Placeholder: Root at node 1, arrows showing DFS preorder and postorder orderings, and BFS layers]**
>
> *(Add to `../assets/` if available)*

---

## 📝 Tips

- Sort adjacency lists to make traversal **deterministic** (useful for testing).
- Avoid recursion limits by using iterative traversals if needed (C++ usually OK for N ≤ 2e5 with `-O2` and system defaults, but be cautious).
- For multiple queries, precompute parent/depth/subtree once.

---

## 💡 Example

See [`example.cpp`](./example.cpp):  
- Reads an undirected tree, roots at 1
- Runs DFS to produce **preorder**, **postorder**, and **subtree sizes**
- (Optional) shows how to build a BFS layer order

---

## 🏋️‍♂️ Self-Test Problem

Open [`problem.md`](./problem.md) and implement preorder, postorder, and subtree sizes for a given tree.  
This will test your mastery of **DFS traversal patterns** and **subtree aggregation**.
