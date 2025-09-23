# Day 33 – Breadth-First Search (BFS)

Today you’ll learn **Breadth-First Search (BFS)** for graphs.  
BFS explores a graph **level by level** using a queue. In **unweighted graphs**, BFS finds **shortest path lengths** (fewest edges) from a source to all reachable nodes.

---

## 📌 What You'll Learn

- How BFS works and when to use it
- Building an **adjacency list** for graphs
- Tracking **visited**, **distance**, and **parent** to reconstruct paths
- Time complexity analysis: **O(N + M)**

---

## 🧠 When to Use BFS

- Shortest paths in **unweighted** graphs
- Checking connectivity / components (with repeated BFS/DFS)
- Layered processes, multi-source expansion, bipartite checking

---

## 🔧 Implementation Notes

- Use `vector<vector<int>> adj(n+1);` for 1-indexed graphs
- Use a `queue<int>` to process nodes in FIFO order
- Arrays/vectors:
  - `visited[u]` – whether node `u` has been seen
  - `dist[u]` – distance in edges from source (initialize to `-1`)
  - `parent[u]` – for path reconstruction (`-1` if unknown)

---

## 🔁 BFS Skeleton

```cpp
queue<int> q;
q.push(source);
visited[source] = true;
dist[source] = 0;

while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int v : adj[u]) {
        if (!visited[v]) {
            visited[v] = true;
            dist[v] = dist[u] + 1;
            parent[v] = u;
            q.push(v);
        }
    }
}
```

---

## 🧭 Reconstructing a Path

After BFS, if `dist[t] != -1`, you can rebuild a path from `t` back to `s` with `parent[]`:

```cpp
vector<int> path;
for (int cur = t; cur != -1; cur = parent[cur]) path.push_back(cur);
reverse(path.begin(), path.end()); // s -> ... -> t
```

---

## 🧮 Complexity

- Building adjacency list: **O(N + M)**
- BFS traversal: **O(N + M)**
- Extra memory: **O(N + M)**

---

## 📝 Tips

- Graphs may be disconnected—distances can be `-1`
- For **undirected** graphs, add **both** directions
- For **multiple sources**, push all into the queue with `dist=0`

---

## 💡 Example

See [`example.cpp`](./example.cpp) for BFS that outputs the shortest distance and one shortest path from `s` to `t`.

---

## 🏋️‍♂️ Self-Test Problem

Try the task in [`problem.md`](./problem.md): compute shortest distances from a source to **all** nodes.
