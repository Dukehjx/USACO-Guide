# Self-Test Problem: Single-Source Shortest Paths in Unweighted Graph

**Statement:**  
Given an **unweighted**, **undirected** graph with `N` nodes and `M` edges, and a source node `S`, compute the **shortest distance (in edges)** from `S` to every node. If a node is unreachable, print `-1`.

---

**Input Format:**  
- First line: `N M S`  (1 ≤ N ≤ 200000, 0 ≤ M ≤ 200000, 1 ≤ S ≤ N)  
- Next `M` lines: two integers `u v` indicating an undirected edge between `u` and `v`

**Output Format:**  
- A single line with `N` integers: `dist[1] dist[2] ... dist[N]`

---

**Sample Input:**  
```
6 7 1
1 2
1 3
2 4
3 4
3 5
5 6
4 6
```

**Sample Output:**  
```
0 1 1 2 2 3
```

**Explanation:**  
- `dist[1] = 0` (source)  
- Nodes 2 and 3 are one edge from 1  
- Node 4 is two edges away (1 → 2 → 4 or 1 → 3 → 4)  
- Node 6 is three edges away via 5 or 4
