# Day 32 – Depth-First Search (DFS)

Today you’ll learn **Depth-First Search (DFS)**, one of the most important graph traversal algorithms.  
DFS explores as far as possible along one branch before backtracking. It’s useful for **connected components**, **cycle detection**, **topological order (DAG)**, and more.

---

## 📌 What You'll Learn

- How to represent graphs (adjacency lists) for USACO-style problems
- How to implement DFS (recursive and iterative)
- How to use DFS to find **connected components**
- Common pitfalls (1-indexing vs 0-indexing, recursion depth)

---

## 🌐 Graph Representation

Use an **adjacency list** for sparse graphs:

```cpp
int n, m;
vector<vector<int>> g(n + 1); // 1-indexed
for (int i = 0; i < m; i++) {
    int u, v; 
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u); // undirected
}
```

---

## 🔎 DFS Templates

### Recursive DFS (simple & readable)
```cpp
void dfs(int u, const vector<vector<int>>& g, vector<int>& vis) {
    vis[u] = 1;
    for (int v : g[u]) if (!vis[v]) dfs(v, g, vis);
}
```

> ⚠️ For **very large graphs** (N ≈ 2e5), recursion can hit stack limits. Use **iterative DFS**.

### Iterative DFS (stack-based)
```cpp
void dfs_iter(int s, const vector<vector<int>>& g, vector<int>& vis) {
    stack<int> st;
    st.push(s); 
    vis[s] = 1;
    while (!st.empty()) {
        int u = st.top(); st.pop();
        for (int v : g[u]) if (!vis[v]) {
            vis[v] = 1;
            st.push(v);
        }
    }
}
```

---

## 🧩 Connected Components via DFS

- Initialize all nodes **unvisited**.
- For each node `u`: if unvisited, run DFS from `u` → you discover one whole **component**.
- Count how many times you start DFS → that’s the number of components.

---


## 📝 Tips

- **Indexing:** Many USACO inputs are 1-indexed. Stay consistent.
- **Sorting neighbors** (optional) makes outputs deterministic for debugging.
- **Large inputs:** Use `ios::sync_with_stdio(false); cin.tie(nullptr);` and consider **iterative DFS**.
- **Undirected vs Directed:** Remember to add both directions for undirected graphs.

---

## 💡 Example

See [`example.cpp`](./example.cpp) for an iterative DFS that counts **connected components** and sizes.

---

## 🏋️‍♂️ Self-Test Problem

Try the problem in [`problem.md`](./problem.md): **Count components and the largest component size**.
